#include <iostream>
#include "point.h"

using namespace std;

int main() {
    cout << "ex 7.5" << endl;
    Point p1(0,0);
    cout << p1.abscisse() << " : " << p1.oordonne() << endl;
    p1.deplacer(2,1);
    cout << p1.abscisse() << " : " << p1.oordonne() << endl;
    Point p2(3,5);
    cout << p2.abscisse() << " : " << p2.oordonne() << endl;

    Point p3 = p2 + p1;
    cout << p3.abscisse() << " : " << p3.oordonne() << endl;



    return 0;
}