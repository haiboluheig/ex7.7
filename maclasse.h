#ifndef MACLASSE_H
#define MACLASSE_H
#include<string>
//  using namespace std; 不在头文件中使用，而是std::          
class Pays {
public:
    //constructeur
    Pays(const std::string& nom = "", double population = 0., unsigned superficie = 0);
    //Sélecteurs
    std::string getNom() const;
    double getPopulation()const;
    unsigned getSuerficie() const;
    //Modificateurs
    void setNom(const std::string& nom);
    void setPopulation(double population);
    void setSuperficie(unsigned superficie);
    //Autre
    double densitePopulation()const;
private:
    std::string nom; //nom du pays
    double population; //en mio d'habitants
    unsigned superficie; //en km2
};

#endif /* MACLASSE_H */

