/*
 * https://gehrcke.de/2011/06/reading-files-in-c-using-ifstream-dealing-correctly-with-badbit-failbit-eofbit-and-perror/
 */

#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>

#include "Comun.h"
#include "EntradaD.h"
#include "DBOper.h"
#include "TorsionI.h"
#include "Diccionario.h"

using namespace std;


vector<EntradaD> diccionario;
vector<EntradaR> vrec;

/**
 *
 * @return
 */
int main() {

    cout << "Se carga el diccionario"<<endl;
    Diccionario dicc(diccionario,"/home/alfonso/NetBeansProjects/renic/utiles/texto_todos/vectors_sic.txt");

    cout<<"Se abre y recuperan los registros"<<endl;
    DBOper mdb("dbrenic.txt");

    mdb.recuperaContenidos("museo",vrec);
    cout << "Tam. vrec: "<<vrec.size()<<endl;


    cout << "Se calcula la torsion para los registros"<<endl;
    TorsionI tori;

    tori.calculaTorsion(diccionario,vrec);

    cout <<vrec[0].id <<endl;

    for(size_t i=0;i<TAMV;i++){
        cout<<vrec[0].vtorsion[i]<<" ";
    }

    cout <<endl <<endl;



    return 0;
}

