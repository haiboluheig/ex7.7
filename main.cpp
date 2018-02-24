/* 
 * File:   main.cpp
 * Author: luhaibo_
 *
 * Created on February 21, 2018, 3:14 PM
 */
#include <cstdlib>
#include<iostream>
#include "maclasse.h"
using namespace std;

int main() {
    //exe 7.7
    C c0, c1(1), c2 = 5;
    const C c3{7};
    cout << c0 << endl
            << c1 << endl;

    cout << boolalpha;
    cout << (c0 == c1) << endl;
    cout << (c0 != c1) << endl;
    cout << noboolalpha;

    cout << c1++ << endl;
    cout << c1 << endl;
    cout << ++c1 << endl;

    cout << c1 + c2 << endl;
    c1 += c2;
    cout << c1 << endl;
    cout << c3 + c2 << endl;

    return EXIT_SUCCESS;
}

