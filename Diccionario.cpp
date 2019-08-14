//
// Created by alfonso on 13/08/19.
//

#include "Diccionario.h"

Diccionario::Diccionario(vector<EntradaD> &vdiccionario, string snomarch) {

    this->snomarch = snomarch;

    cargaDiccionario(vdiccionario);

}

/**
 *
 * @param theStringVector
 * @param theString
 * @param theDelimiter
 */
void Diccionario::split(vector<string> &theStringVector, const string &theString, const string &theDelimiter) {
    size_t start = 0, end = 0;

    while (end != string::npos) {
        end = theString.find(theDelimiter, start);

        // If at end, use length=maxLength.  Else use length=end-start.
        theStringVector.push_back(theString.substr(start,
                                                   (end == string::npos) ? string::npos : end - start));

        // If at end, use start=maxSize.  Else use start=end+delimiter.
        start = ((end > (string::npos - theDelimiter.size()))
                 ? string::npos : end + theDelimiter.size());
    }
}

/**
 *
 */
void Diccionario::cargaDiccionario(vector<EntradaD> &vdiccionario) {
    ifstream is(snomarch);

    while (is) {
        EntradaD line;
        string linea;
        getline(is, linea);

        if (is) {

            vector<string> vs;
            split(vs, linea, " ");
            line.concepto = vs[0];

            for (size_t i = 1; i <= TAMV; i++) {
                line.v.push_back(stod(vs[i]));
            }

            vdiccionario.push_back(line);
        }
    }

    is.close();
}


