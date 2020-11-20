
#include <iostream>

#include "ArbreB.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    char lettre = 'A';
    int occurences = 20;
    Sommet s(occurences, NULL, NULL);
   // cout <<s<<endl;
    Sommet ss ('X', 10, &s, NULL);

    ArbreB a(ss);
    ArbreB b (s);
    //ArbreB = ArbreB(a.fusioner(b)); constructeur de recopie...........
    a.afficher();
	return 0;
}