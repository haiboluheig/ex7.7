
#include <cstdlib>
#include <string>
#include"maclasse.h"
using namespace std;

Pays::Pays(const string& nom, double population, unsigned superficie) : nom(nom), population(population), superficie(superficie) {
}
//Modificateurs

void Pays::setNom(const string& nom) {
    this->nom = nom;
}

void Pays::setPopulation(double population) {
    this->population = population;
}

void Pays::setSuperficie(unsigned superficie) {
    this->superficie = superficie;
}
//Sélecteurs

string Pays::getNom() const {
    return nom;
}

double Pays::getPopulation()const {
    return population;
}

unsigned Pays::getSuerficie() const {
    return superficie;
}
//Autre

double Pays::densitePopulation()const {
    return superficie == 0 ? 0 : (population * 1E6 / superficie);
}
