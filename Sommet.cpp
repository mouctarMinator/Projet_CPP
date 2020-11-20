
#include "Sommet.hpp"
#include "ArbreB.hpp"

using namespace std;

Sommet::Sommet(){
    filsGauche = filsDroit = NULL;
};
Sommet::Sommet::Sommet (char l, int oq, Sommet * filsG = NULL, Sommet * filsD = NULL){
    lettre = l;
    occurences = oq;
    filsGauche = filsG;
    filsDroit  = filsD;
};

//SOMMET SANS LETTRE:  dans l'arbre de huffman les sommets nonFeuille ne porte pas de lettre
Sommet::Sommet (int oq, Sommet * filsG, Sommet * filsD){        
    lettre = '\0';
    occurences = oq;
    filsGauche = filsG;;
    filsDroit = filsD;
};
Sommet::Sommet (Sommet &s){
    lettre = s.lettre;
    occurences = s.occurences;
    filsGauche = s.getFilsGauche();
    filsDroit  = s.getFilsDroit();  
};

Sommet::Sommet (Sommet *&s){
    lettre = s->lettre;
    occurences = s->occurences;
    filsGauche = s->getFilsGauche();
    filsDroit  = s->getFilsDroit();
};

Sommet & Sommet::operator = (Sommet & s){
    lettre = s.lettre;
    occurences = s.occurences;
    filsGauche = s.getFilsGauche();
    filsDroit  = s.getFilsDroit();
    return *this;
};

Sommet::~Sommet (){
    //destruction here
};

char Sommet::getLettre() const{ return lettre; };
int  Sommet::getOccurences () const{ return occurences; };
void Sommet::setLettre (char c){ lettre = c; };
void Sommet::setOccurences (int oq){ occurences = oq; };

Sommet * Sommet::getFilsGauche()const{return filsGauche; };
Sommet * Sommet::getFilsDroit()const{ return filsDroit; };

bool Sommet::estFeuille (){ return (filsGauche == NULL) && (filsDroit == NULL); };
       

ostream& operator << (ostream& flux, Sommet& s){
    if (s.lettre != '\0'){ cout <<"["<<s.getLettre()<<"|"<<s.getOccurences()<< "]"; }

    else {cout <<"["<<s.getOccurences()<< "]"; }

    return flux;
};

ostream& operator << (ostream& flux, Sommet *& s){
    if (s->lettre != '\0'){  cout <<"["<<s->getLettre()<<"|"<<s->getOccurences()<< "]"; }

    else {cout <<"["<<s->getOccurences()<< "]"; }
   
    return flux;
};