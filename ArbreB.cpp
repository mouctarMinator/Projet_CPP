
#include "ArbreB.hpp"

using namespace std;

ArbreB::ArbreB (){
    racine = NULL;
};                     
ArbreB::ArbreB (Sommet &s){
    racine = new Sommet (s);
};

ArbreB::~ArbreB (){
    delete racine;
}; 

void ArbreB::inserer(char l, int oq ){
     insertion(racine, l, oq);
};

void ArbreB::insertion (Sommet *& r, char l, int oq){

};

void ArbreB::afficher (){
    //d'abord
    cout <<*racine<<endl;
}

ArbreB ArbreB::fusioner (ArbreB & a){
    ArbreB result;
    if (a.racine != NULL){
        result.racine->occurences = racine->getOccurences()+ a.racine->getOccurences();
        result.racine->lettre = '\0';
        if (racine->getOccurences() < a.racine->getOccurences())
        {
            result.racine->filsGauche = racine;
            result.racine->filsDroit = a.racine;
        }
        else
        {
            result.racine->filsDroit = racine;
            result.racine->filsGauche = a.racine;
        }
    
    }
    return result;
};

