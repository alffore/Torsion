/*
 * https://gehrcke.de/2011/06/reading-files-in-c-using-ifstream-dealing-correctly-with-badbit-failbit-eofbit-and-perror/
 */

#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>

#include "DBOper.h"
#include "TorsionI.h"


using namespace std;


int cargaDiccionario();

void split(vector<string> &theStringVector, const string &theString, const string &theDelimiter);

struct EntradaD {
    string concepto;
    vector<double> v;
};

vector<EntradaD> diccionario;

int main() {

    //cargaDiccionario();

    DBOper mdb("dbrenic.txt");

    cout << "Tamaño Diccionario " << diccionario.size() << endl;

    for (auto i = 0; i < diccionario.size(); ++i) {
        cout << "EntradaD " << i << " concepto:  \"" << diccionario[i].concepto
             << "Componente 154" << diccionario[i].v[154] << endl;
    }

    return 0;
}

/**
 *
 * @return
 */
int cargaDiccionario() {

    ifstream is("/mnt/t/salida/vectors_sic.txt");


    while (is) {
        EntradaD line;
        string linea;
        getline(is, linea);

        if (is) {

            vector<string> vs;
            split(vs, linea, " ");
            line.concepto = vs[0];

            for (size_t i = 1; i <= TAMV; i++) {
                line.v.push_back(stod(vs[i]));
            }

            diccionario.push_back(line);
        }
    }

    is.close();


    return diccionario.size();
}

/**
 *
 * @param theStringVector
 * @param theString
 * @param theDelimiter
 */
void split(vector<string> &theStringVector, const string &theString, const string &theDelimiter) {
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

