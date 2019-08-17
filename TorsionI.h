//
// Created by alfonso on 11/08/19.
//

#ifndef TORSION_TORSIONI_H
#define TORSION_TORSIONI_H

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

#include <boost/algorithm/string.hpp>

#include "EntradaD.h"
#include "EntradaR.h"
#include "Comun.h"


using namespace std;



class TorsionI {
public:
    TorsionI();

    void calculaTorsion(vector<EntradaD> &dicc, vector<EntradaR> &vrec);

    void split(vector<string>& theStringVector, const string& theString, const string& theDelimiter);

private:

    vector<double> sumtorsion(vector<double>& v1 ,vector<double>& v2);

    static double lcfat(double i,double j,double k);

    vector<double> concepto2vector(vector<EntradaD> &dicc,string &scad);

    void normaliza(vector<double> &v);
};


#endif //TORSION_TORSIONI_H
