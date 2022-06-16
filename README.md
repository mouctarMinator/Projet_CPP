RAPPORT PREMIÈRE PARTIE 

Le projet contient 7 fichiers :
    1. README.txt : Le fichier que vous êtes en train de lire.
    2. Sommet.hpp : header de la classe Sommet
    3. Sommet.cpp : la définition de la classe sommet
    4. ArbreB.hpp : header de la classe Arbre
    5. ArbreB .cpp : définition de la Arbre
    6. mainProjet.cpp : fichier qui contient tous les tests
    7. Makefile : pour la compilation

-Concernant les fonctions insertion, suppression et recherche de sommet:
 L’implémentation de ces fonction dans un arbre binaire de recherche est à priori évident.
 Mais un arbre de Huffmann n’est pas un ABR. 
 Quand aux fonctions d’étiquettes de sommets, de fusion d’arbre c’est évident qu’on en a besoin pour formé l’arbre de Huffmann. Donc pour les fonctions que  j’ai citées plus haut, je les ai  implémentées à la façoon d'un ABR, puis transformer pour respecter le principe de Huffmann. 

-Affichage de l’arbre : 
L’affichage d’un arbre de racine 15 et et fils gauche [B|10] et de fils droit [A|5] se fait comme suit :

 		        [A|5]
          15
               	[B|10]
  
