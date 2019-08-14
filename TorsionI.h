//
// Created by alfonso on 11/08/19.
//

#ifndef TORSION_TORSIONI_H
#define TORSION_TORSIONI_H

#include <vector>
#include <string>
#include <cmath>

#include "EntradaD.h"

#define TAMV 300

using namespace std;



class TorsionI {
public:
    TorsionI();

    vector<double> calculaTorsion(vector<EntradaD> &dicc, vector<string> &ideas);

    void split(vector<string>& theStringVector, const string& theString, const string& theDelimiter);

private:

    vector<double> sumtorsion(vector<double>& v1 ,vector<double>& v2);

    double lcfat(double i,double j,double k);

    vector<double> concepto2vector(vector<EntradaD> &dicc,string scad);
};


#endif //TORSION_TORSIONI_H
