# cpp07
cpp07

Un template est une fonction ou classe generique qui fonctionne avec plusieurs types sans changer le code. On le met dans le .hpp parce que le compilateur doit voir son implementation quand il l'utilise avec un type.



EX00: 

Dans cet exercice on cree des fonctions template qui marchent avec plusieurs types.

swap echange deux valeurs sans rien retourner.

min retourne la plus petite valeur et max la plus grande.

si les deux valeurs sont egales, on retourne la deuxieme.



EX01:

Dans cet exercice on cree une fonction template iter qui permet d'appliquer une fonction sur chaque element d'un tableau.

Elle prend un tableau, sa taille et une fonction.

On fait deux versions, une (T*) pour modifier les elements et une autre const (const T*) pour ne pas les modifier.

exemple: 

int tab[3] = {1, 2, 3};                      
iter(tab, 3, print);  

=======> 

print(1)

print(2)

print(3)


EX02:

Dans cet exercice on cree une classe template Array qui peut stocker n'importe quel type.

Dans l’operator=, on alloue une nouvelle memoire puis on copie les elements un par un, c’est ce qu’on appelle 

une deep copy, parce que chaque objet a sa propre memoire.

Sinon si on copie juste le pointeur, on aura une shallow copy(meme memoire) et les deux objets vont partager

la meme memoire


                                                       








        
