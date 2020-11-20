#ifndef ARBREB_HH
#define ARBREB_HH

#include <stdio.h>
#include <iostream>

#include "Sommet.hpp"

class ArbreB{
    private:
    Sommet * racine;
    void insertion ( Sommet *&, char l, int oq);
    void suppression ( Sommet *&, char l);
    bool recherche ( Sommet *, char l ) const ;
    void affichage ( const Sommet *, int ) const ; 
    public:
    ArbreB ();                     
    ArbreB (Sommet &s);
    ArbreB (ArbreB & a);
    ~ArbreB ();    
    
    ArbreB fusioner (ArbreB & a);
    void inserer (char l, int oq );

    void afficher ();



};

#endif