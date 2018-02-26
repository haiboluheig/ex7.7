#ifndef MACLASSE_H
#define MACLASSE_H
#include<iostream>
using namespace std;

class C {
public:
    C(int x = 0);
    //surchages d'operateurs
    C operator+(const C&) const;
    C& operator++(); //pré-incrémentation,identique :friend C operator ++(C&)
    C operator++(const int); //post-incrémentationidentique :friend C operator ++(C&,int)
    C operator=(const C&);
    //friend fonctions et surchages d'operateurs
    friend bool operator==(const C&, const C&);
    friend bool operator!=(const C&,const C&);
    C& operator+=( const C&);
    friend ostream& operator<<(ostream&, const C&);
private:
    int x;
};
#endif /* MACLASSE_H */ 
