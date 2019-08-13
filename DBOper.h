//
// Created by alfonso on 10/08/19.
//

#ifndef TORSION_DBOPER_H
#define TORSION_DBOPER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <pqxx/pqxx>

using namespace std;


class DBOper {

public:
    DBOper(string sarchconf);

private:
    string sarchivo;
    vector<string> credenciales;

    void abreConexion(void);

    void abreArchivo();

    void recuperaContenidos(pqxx::connection &conn,string smodulo);

};


#endif //TORSION_DBOPER_H
