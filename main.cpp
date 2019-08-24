/*
 * https://gehrcke.de/2011/06/reading-files-in-c-using-ifstream-dealing-correctly-with-badbit-failbit-eofbit-and-perror/
 */

#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <boost/thread.hpp>

#include "Comun.h"
#include "EntradaD.h"
#include "DBOper.h"
#include "TorsionI.h"
#include "Diccionario.h"


#define NTHREADS 8

using namespace std;


vector<EntradaD> vdiccionario;
vector<EntradaR> vrec;


vector<string> vscl={"<br>","</br>","\n","\t","</b>","<b>","<li>","</li>",",",":",";","/","\\","#","$","!","(",")",">","<","¿","?","|","^","'","\""};
/**
 *
 * @return
 */
int main() {

    cout << "Se carga el vdiccionario" << endl;
    Diccionario dicc(vdiccionario, "/home/alfonso/NetBeansProjects/renic/utiles/texto_todos/vectors_sic.txt");

    cout << "Se abre y recuperan los registros" << endl;
    DBOper mdb("dbrenic.txt");

    mdb.recuperaContenidos("teatro", vrec);
    cout << "Tam. vrec: " << vrec.size() << endl;


    cout << "Se calcula la torsion para los registros" << endl;



    // version multithread wit Boost
    TorsionI *pti[NTHREADS];
    boost::thread threads[NTHREADS];

    for (size_t t = 0; t < NTHREADS; t++) {
        pti[t] = new TorsionI(t, NTHREADS, vrec, vdiccionario,vscl);
        threads[t] = boost::thread(*pti[t]);
    }

    for (auto &thread : threads) {
        thread.join();
    }

    for (auto &t : pti) {
        delete t;
    }


    ofstream miarchivo("teatro_sal.sql");
    for (EntradaR e: vrec) {
        miarchivo << "INSERT INTO ideas VALUES('" << e.stabla << "'," << e.id << ",{";


        miarchivo<<e.vtorsion[0];
        for(size_t i=1;i<TAMV;i++){
            miarchivo<<","<<e.vtorsion[i];
        }

        miarchivo << "});";
        miarchivo << "\n";
    }
    miarchivo.close();

    return 0;
}

