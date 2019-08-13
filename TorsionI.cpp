//
// Created by alfonso on 11/08/19.
//

#include "TorsionI.h"

TorsionI::TorsionI() {

}

vector<double> TorsionI::calculaTorsion(vector<string> &dicc, vector<string> &videas) {


    return vector<double>();
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

    vector<double> vr(300, 0.0);
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

