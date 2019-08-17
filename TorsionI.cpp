//
// Created by alfonso on 11/08/19.
//

#include "TorsionI.h"

TorsionI::TorsionI() {

}

/**
 *
 * @param dicc
 * @param videas
 * @return
 */
void TorsionI::calculaTorsion(vector<EntradaD> &dicc, vector<EntradaR> &vrec) {
    size_t tam = vrec.size();
    for (size_t i = 0; i < tam; i++) {
        cout << " Tam vector torsion: " << vrec[i].vtorsion.size() << endl;
         for (string &sidea : vrec[i].oracion) {
             vector<string> vcon;
             vector<double> vcon_nt;
             split(vcon, sidea, " ");

             for (string scon : vcon) {

                 auto v = concepto2vector(dicc, scon);
                 if (v.size() == TAMV) {
                     if (vcon_nt.empty()) {
                         vcon_nt = v;
                     } else {
                         vcon_nt = sumtorsion(vcon_nt, v);
                     }
                 }

             }

             for (size_t j = 0; j < TAMV; j++) {
                 //vrec[i].vtorsion[j] += vcon_nt[j];
             }
         }

        //normaliza(r.vtorsion);
    }

}

/**
 *
 * @param theStringVector
 * @param theString
 * @param theDelimiter
 */
void TorsionI::split(vector<string> &theStringVector, const string &theString, const string &theDelimiter) {
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
 * @param v1
 * @param v2
 * @return
 */
vector<double> TorsionI::sumtorsion(vector<double> &v1, vector<double> &v2) {

    vector<double> vr(TAMV, 0.0);
    size_t tam = v1.size();

    for (size_t i = 0; i < tam; i++) {
        vr[i] = v1[i] + v2[i];

        for (size_t j = 0; j < tam; j++) {
            for (size_t k = 0; k < tam; k++) {
                vr[i] += lcfat(i, j, k) * v1[j] * v2[k];
            }
        }
    }

    return vr;
}


/**
 * https://en.wikipedia.org/wiki/Levi-Civita_symbol
 * https://www.johndcook.com/blog/2018/09/16/permutation-tensor/
 * @param i
 * @param j
 * @param k
 * @return
 */

double TorsionI::lcfat(double i, double j, double k) {

    if (i == j || j == k || k == i) {
        return 0.0;
    }
    double aux = (j - i) * (k - i) * (k - j);

    return aux / fabs(aux);
}

/**
 *
 * @param dicc
 * @param scad
 * @return
 */
vector<double> TorsionI::concepto2vector(vector<EntradaD> &dicc, string &scad) {

    boost::trim_right(scad);
    boost::trim_left(scad);

    for (EntradaD e: dicc) {

        if (e.concepto == scad) {
            vector<double> v(e.v);
            return v;
        }
    }

    cout << "Termino no localizado: "<<scad<<endl;
    return vector<double>();
}

/**
 *
 * @param v
 */
void TorsionI::normaliza(vector<double> &v) {
    double mag2 = 0.0;
    for (double c : v) {
        mag2 += pow(c, 2.0);
    }

    mag2 = sqrt(mag2);

    if (mag2 > 0.0) {
        for (size_t i = 0; i < TAMV; i++) {
            v[i] /= mag2;
        }
    }
}
