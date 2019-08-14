//
// Created by alfonso on 13/08/19.
//

#ifndef TORSION_DICCIONARIO_H
#define TORSION_DICCIONARIO_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

#define TAMV 300

using namespace std;

struct EntradaD {
    string concepto;
    vector<double> v;
};


class Diccionario {
private:
    string snomarch;

    void split(vector<string> &theStringVector, const string &theString, const string &theDelimiter);

    void cargaDiccionario(vector<EntradaD> &vdiccionario);

public:

    Diccionario(vector<EntradaD> &vdiccionario, string snomarch);


};


#endif //TORSION_DICCIONARIO_H
