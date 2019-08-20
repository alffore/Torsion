//
// Created by alfonso on 10/08/19.
//

#ifndef TORSION_DBOPER_H
#define TORSION_DBOPER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

#include <pqxx/pqxx>
#include "EntradaD.h"
#include "EntradaR.h"
#include "Comun.h"

using namespace std;


class DBOper {

public:
    DBOper(string sarchconf, string caracteres);
    void recuperaContenidos(string smodulo, vector<EntradaR> &vr);

private:
    string sarchivo;
    vector<string> credenciales;

    string caracteres;

    void abreConexion(void);

    void abreArchivo();

    void split(vector<string> &theStringVector, const string &theString, const string &theDelimiter);

    void remueveCarL(string &scad);

};


#endif //TORSION_DBOPER_H
