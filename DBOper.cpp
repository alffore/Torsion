//
// Created by alfonso on 10/08/19.
//

#include "DBOper.h"

DBOper::DBOper(string sarchconf) {

    sarchivo = sarchconf;

    //abreArchivo();
    abreConexion();

}

void DBOper::abreArchivo() {
    ifstream archc(sarchivo);

    while (!archc.eof()) {
        string line;
        getline(archc, line);
        credenciales.push_back(line);
    }

    archc.close();
}

/**
 *
 */
void DBOper::abreConexion() {
    /*string sconn("host=" + credenciales[0] + " port=" + credenciales[1] + " dbname=" + credenciales[2] + " user=" +
                 credenciales[3] + " password=" + credenciales[4]);*/
}

/**
 *
 * @param smodulo
 * @param vr
 */
void DBOper::recuperaContenidos(string smodulo, vector<EntradaR> &vr) {
    string sconn{"postgresql://postgres@localhost/nuevadbrenic"};
    pqxx::connection conn{sconn.c_str()};

    string sobs("observaciones");
    string sagr("agrupador");

    pqxx::work wrk{conn};

    pqxx::result res = wrk.exec("SELECT " + smodulo + "_id as idrec, * FROM " + smodulo + " WHERE " + smodulo +
                                "_info_publica=true LIMIT 8");

    if (res.size() < 1) {
        return;
    }

    pqxx::row_size_type num_columnas = res.columns();

    for (int i = 0; i < res.size(); i++) {
        EntradaR erec;
        erec.stabla = smodulo;

        erec.id = res[i][0].as<int>();

        for (auto j = 0; j < num_columnas; j++) {
            if ((res.column_type(j) == 25 || res.column_type(j) == 1043) && res[i][j].size() > 0) {
                string scampo = res.column_name(j);
                if (scampo.find(sobs) == string::npos && scampo.find(sagr) == string::npos) {
                    string scadv = res[i][j].c_str();
                    transform(scadv.begin(), scadv.end(), scadv.begin(),
                              [](unsigned char c) { return tolower(c); });
//this->remueveCarL(scadv);
                    split(erec.voracion, scadv, ".");
                }
            }
        }

        vr.push_back(erec);

    }

    conn.disconnect();
}

/**
 *
 * @param theStringVector
 * @param theString
 * @param theDelimiter
 */
void DBOper::split(vector<string> &theStringVector, const string &theString, const string &theDelimiter) {
    size_t start = 0, end = 0;

    while (end != string::npos) {
        end = theString.find(theDelimiter, start);

        // If at end, use length=maxLength.  Else use length=end-start.
        theStringVector.push_back(theString.substr(start,
                                                   (end == string::npos) ? string::npos : end - start));

        // If at end, use start=maxSize.  Else use start=end+delimiter.
        start = ((end > (string::npos - theDelimiter.size()))
                 ? string::npos : end + theDelimiter.size());
    }
}



