#ifndef MACLASSE_H
#define MACLASSE_H
#include<iostream>
using namespace std;

class C {
public:
    C(int x = 0);
    //surchages d'operateurs
    C operator+(const C&) const;
    C operator++(); //prefix,identique :friend C operator ++(C&)
    C operator++(const int); //identique :friend C operator ++(C&,int)
    C operator=(const C&);
    //friend fonctions et surchages d'operateurs
    friend bool operator==(C&, C&);
    friend bool operator!=(C&, C&);
    friend C operator+=(C&, const C&);
    friend ostream& operator<<(ostream&, const C&);
private:
    int x;
};
#endif /* MACLASSE_H */ 