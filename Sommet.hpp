#ifndef SOMMET_HPP
#define SOMMET_HPP

#include <stdio.h>
#include <iostream>


class Sommet{
    public:
        char  lettre;
        int occurences;
        Sommet * filsGauche;
        Sommet * filsDroit;

        Sommet();
        Sommet (char l, int oq, Sommet * filsG, Sommet * filsD);
        Sommet (int oq, Sommet * filsG, Sommet * filsD);
        Sommet (Sommet &s);
        Sommet (Sommet *&s);
       ~Sommet ();
       
        char getLettre() const;
        int getOccurences () const;
        void setLettre (char c);
        void setOccurences (int oq);
        Sommet * getFilsGauche()const;
        Sommet * getFilsDroit()const;
    
        bool estFeuille ();
       
        Sommet & operator = (Sommet & s);
    
        friend std::ostream& operator << (std::ostream& flux, Sommet& s);
        friend std::ostream& operator << (std::ostream& flux, Sommet *& s);
};

#endif