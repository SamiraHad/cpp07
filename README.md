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
                                                       








        
