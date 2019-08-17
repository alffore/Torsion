//
// Created by alfonso on 16/08/19.
//

#ifndef TORSION_ENTRADAR_H
#define TORSION_ENTRADAR_H

#include <vector>
#include <string>

#include "Comun.h"

class EntradaR{
public:
    std::string stabla;
    int id;

    std::vector<std::string> oracion;
    std::vector<double> vtorsion;

    EntradaR():vtorsion(TAMV,0.0){};

};

#endif //TORSION_ENTRADAR_H
