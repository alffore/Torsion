//
// Created by alfonso on 11/08/19.
//

#ifndef TORSION_TORSIONI_H
#define TORSION_TORSIONI_H

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string.hpp>

#include "EntradaD.h"
#include "EntradaR.h"
#include "Comun.h"


using namespace std;



class TorsionI {
public:

    TorsionI(int avance, int paso, vector<EntradaR> &vrec, vector<EntradaD> &dicc, vector<string> &vscl);

    void operator()();

    void calculaTorsion();

    void split(vector<string>& theStringVector, const string& theString, const string& theDelimiter);

private:
    int avance;
    int paso;

    vector<EntradaR>& vrec;
    vector<EntradaD>& vdiccionario;

    vector<string>& vscl;


    vector<double> sumtorsion(vector<double>& v1 ,vector<double>& v2);

    static double lcfat(double i,double j,double k);

    vector<double> concepto2vector(string &scad);

    void normaliza(vector<double> &v);

    void remueveCarL(string &scad);
};


#endif //TORSION_TORSIONI_H
