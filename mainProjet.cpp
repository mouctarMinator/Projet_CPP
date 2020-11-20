
#include <iostream>

#include "ArbreB.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    //Test création de Sommets
    cout <<"Test création de Sommets\n";
    Sommet s1 ('A', 5, NULL, NULL);
    Sommet s2 ('B', 10, NULL, NULL);
    Sommet *s3 = new Sommet ('C', 12, NULL, NULL);
    Sommet *s4 = new Sommet ('D', 21, NULL, NULL);
    Sommet *s5 = new Sommet (15, NULL, NULL);
    Sommet s6;
    Sommet *s7;
    //test créations d'arbres
    cout <<"test créations d'arbres\n";
    ArbreB a1 (s1);
    ArbreB a2(s3);
    ArbreB a3 (s5);
    cout<<"Affichage Arbre a1 \n"; a1.afficher();
    cout<<"Affichage Arbre a2 \n"; a2.afficher();
    cout<<"Affichage Arbre a3 \n"; a3.afficher();

    //test d'insersion 

    


	return 0;
}