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

void DBOper::abreConexion() {
    /*string sconn("host=" + credenciales[0] + " port=" + credenciales[1] + " dbname=" + credenciales[2] + " user=" +
                 credenciales[3] + " password=" + credenciales[4]);*/

    string sconn("postgresql://postgres@localhost/nuevadbrenic");

    cout <<"Conexion: "<< sconn <<endl;


    pqxx::connection conn{sconn.c_str()};


    string smodulo = "museo";
    recuperaContenidos(conn, smodulo);

    conn.disconnect();
}

void DBOper::recuperaContenidos(pqxx::connection &conn, string smodulo) {


    pqxx::work wrk{conn};

    pqxx::result res = wrk.exec("SELECT * FROM " + smodulo + " WHERE " + smodulo + "_info_publica=true limit 10");

    if (res.size() < 1) {
        return;
    }

    pqxx::row_size_type num_columnas = res.columns();

    for (int i = 0; i < res.size(); i++) {
        for (auto j = 0; j < num_columnas; j++) {
            cout << res.column_type(j) << "::" << res.column_name(j) <<"::"<< res[i][j] << endl;
        }
    }


}
