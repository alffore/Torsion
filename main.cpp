/*
 * https://gehrcke.de/2011/06/reading-files-in-c-using-ifstream-dealing-correctly-with-badbit-failbit-eofbit-and-perror/
 */

#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>


#include "EntradaD.h"
#include "DBOper.h"
#include "TorsionI.h"
#include "Diccionario.h"

using namespace std;


vector<EntradaD> diccionario;

/**
 *
 * @return
 */
int main() {

    Diccionario dicc(diccionario,"/home/alfonso/NetBeansProjects/renic/utiles/texto_todos/vectors_sic.txt");

    //DBOper mdb("dbrenic.txt");

    for (auto i = 0; i < diccionario.size(); ++i) {
        cout << "EntradaD " << i << " concepto:  " << diccionario[i].concepto
             << " Componente 154: " << diccionario[i].v[154] << endl;
    }

    return 0;
}

