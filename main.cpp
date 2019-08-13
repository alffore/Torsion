/*
 * https://gehrcke.de/2011/06/reading-files-in-c-using-ifstream-dealing-correctly-with-badbit-failbit-eofbit-and-perror/
 */

#include <vector>
#include <iostream>
#include <fstream>
#include <string>

#include "DBOper.h"


using namespace std;


int cargaDiccionario();


struct EntradaD {
    string text;
    vector<double> vc;
};

vector<EntradaD> diccionario;

int main() {

    cargaDiccionario();

    DBOper mdb("dbrenic.txt");

    cout << "Tamaño Diccionario " << diccionario.size() << endl;

    /*  for (auto i = 0 ; i < diccionario.size() ; ++i){
          cout << "EntradaD " << i << " text:  \"" << diccionario[i].text << endl;
      }*/

    return 0;
}


int cargaDiccionario() {

    ifstream is("/mnt/t/salida/vectors_sic.txt");


    cout << is.is_open() << endl;

    while (is) {
        EntradaD line;
        getline(is, line.text);

        if (is) {
            diccionario.push_back(line);
        }
    }

    is.close();


    return diccionario.size();
}