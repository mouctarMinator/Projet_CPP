
#include "ArbreB.hpp"

using namespace std;

ArbreB::ArbreB (){
    racine = NULL;
};                     
ArbreB::ArbreB (Sommet &s){
    racine = new Sommet (s);
};

ArbreB::ArbreB (Sommet *& s){
    racine = new Sommet (s);
};

ArbreB::ArbreB (ArbreB & a){
    racine = new Sommet (a.racine);
};

ArbreB & ArbreB::operator = (ArbreB & a){
    racine = new Sommet (a.racine);
    return *this;
};

ArbreB::~ArbreB (){
    delete racine;
}; 

void ArbreB::inserer(char l, int oq ){
     insertion(racine, l, oq);
};

void ArbreB::insertion (Sommet *& r, char l, int oq){

    if ( r == NULL) 
    r = new Sommet (l, oq, NULL, NULL) ;
    else
    if (oq < r->occurences)
    insertion ( r->filsGauche, l, oq) ;
    else
    insertion ( r->filsDroit, l, oq) ; 

};



void ArbreB::afficher (){
    if   (racine == NULL){
        cout << "l'arbre est vide\n" ;
        return;
    } 
    else affichage (racine, 0);        
};
void ArbreB::affichage (const Sommet * s, int niveau) const{
    if ( s == NULL )return ;
    affichage (s->getFilsGauche(), niveau + 1 ) ; // Affiche le sous-arbre gauche
    for ( int i = 0; i < niveau; i++ )  cout << "     " ;
    if (s->getLettre() != '\0') cout <<"[" <<s->getLettre()<<"|" <<s->getOccurences()<< "]\n"; //affichage racine
    else  cout<<s->getOccurences()<<endl;
    affichage (s->getFilsDroit(), niveau + 1 ) ; // Affiche le sous-arbre droit 
} ; 

ArbreB & ArbreB::fusioner (ArbreB & a){
    if (a.racine == NULL) return *this;
    if (racine->getOccurences() <= a.racine->getOccurences()){
        Sommet s (racine->getOccurences() + a.racine->getOccurences(), racine, a.racine);
        racine = new Sommet (s);
    }else
    {
        Sommet s (racine->getOccurences() + a.racine->getOccurences(), a.racine ,racine);
        racine = new Sommet (s);
    }
    return a;
};

