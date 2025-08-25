#include <stdio.h>//Tu dis au programme d’utiliser une bibliothèque appelée stdio.Ca sert aussi à utiliser printf  et scanf
#include <stdint.h>//La directive #include <stdint.h> sert à inclure des types d'entiers avec des tailles bien définies dans ton programme en C.
#include <stdlib.h>
#include <string.h>      //Est une bibliothèque très utile qui offre une large gamme de fonctionnalités pour la gestion de la mémoire, la génération de nombres aléatoires, la conversion de types, la gestion des processus, la recherche et le tri, et bien plus encore. Elle est essentielle pour de nombreux programmes en C.


/*
  | Format | Type de donnée       | Exemple                   |
| ------ | -------------------- | ------------------------- |
| `%d`   | entier (`int`)       | `5`                       |
| `%f`   | réel (`float`)       | `5.25`                    |
| `%lf`  | réel long (`double`) | `5.25` (mais en `double`) |

*/

/*
Les raccourcis 
int nombre = 2;

nombre += 4; // nombre vaut 6...
nombre -= 3; // ... nombre vaut maintenant 3
nombre *= 5; // ... nombre vaut 15
nombre /= 3; // ... nombre vaut 5
nombre %= 3; // ... nombre vaut 2 (car 5 = 1 * 3 + 2)

*/

/*

Quand utiliser stdlib.h ?
Vous aurez besoin de stdlib.h lorsque vous voulez :

Allouer dynamiquement de la mémoire

Convertir des chaînes en nombres

Quitter un programme de manière contrôlée

Générer des nombres aléatoires

Trier des tableaux

Interagir avec le système d'exploitation

*/

// Logique ET; &&
/*
C’est vrai seulement si les deux conditions sont vraies.
Exemple : Tu peux aller à la piscine si tu es en vacances ET s’il fait chaud.
*/

// Logique OU 

/*
C’est vrai si au moins une condition est vraie.
Exemple :  Tu peux regarder un film si tu as fini tes devoirs OU s’il est tard.;`
*/

// Structure d'une fonction en C 

/*

type_de_retour nom_de_la_fonction(paramètres) {
    // code à exécuter
}

*/

/*
Résumé de void en C
void signifie "ne retourne aucune valeur".

Une fonction void exécute une action, mais ne renvoie rien au reste du programme.

On l’utilise quand on n’a pas besoin de récupérer un résultat.
*/


/*En C, le mot-clé double est utilisé pour déclarer une variable ou une fonction qui retourne un nombre à virgule flottante de double précision.*/

//En C, tu dois déclarer et initialiser les variables AVANT de les utiliser. IMPORTANT 

/*
Un prototype (Annonce d’une fonction avant qu’on la définisse), c'est en fait une indication pour l'ordinateur, qui lui permet de s'organiser et de savoir qu'il existe une fonction (par exemple appelée aireRectangle ) qui prend tels paramètres en entrée et renvoie une sortie du type que vous indiquez. 

La fonction main est la seule qui n'a pas besoin de prototype, parce que l'ordinateur la connaît (c'est toujours la même pour tous les programmes).
*/


/*

Il y a deux types de fichiers différents :

.h: fichiers header, ils contiennent les prototypes des fonctions.

.c: les fichiers source, ils contiennent les fonctions elles-mêmes.
*/


/*
les chevrons  < >  pour inclure un fichier se trouvant dans le répertoire "include" de votre IDE ;

les guillemets" " pour inclure un fichier se trouvant dans le répertoire de votre projet (à côté des .c, généralement).

La commande #include demande d'insérer le contenu du fichier dans le .c. C'est donc une commande qui dit « Insère ici le fichier view.h», par exemple.

Et dans le fichier view.h, on retrouve les prototypes des fonctions du fichier view.c!
*/


/*

mon_projet/
├── aire.h       → Déclaration de la fonction : prototype
├── aire.c       → Définition de la fonction
└── main.c       → Point de départ du programme

*/



/*
Une variable déclarée dans une fonction n'est accessible qu'à l'intérieur de cette fonction. On dit que c'est une variable locale.
*/


/*
Le contenu des fichiers .h est inclus en haut des .c par un programme appelé préprocesseur. Les .c sont transformés en fichiers .o binaires par le compilateur. Les .o sont assemblés en un exécutable (.exe) par le "linker", aussi appelé éditeur de liens.
*/

/*
  rand () = Sert à générer un nombre pseudo-aléatoire. 
  srand() = Elle permet d’avoir des résultats différents à chaque lancement.
  On utilise souvent : srand(time(NULL)); → la graine change selon l’heure actuelle.
*/ 

/*
Avec  age  , l'ordinateur lit la valeur de la variable en mémoire et vous renvoie cette valeur.
Avec &age  , votre ordinateur vous dit en revanche à quelle adresse se trouve la variable.
*/

//Un pointeur, c’est une variable spéciale qui ne contient pas une valeur, mais l’adresse mémoire où se trouve cette valeur.

/*

Sur une variable, comme la variable age  :

age signifie : "Je veux la valeur de la variable age  " ;

&age signifie : "Je veux l'adresse à laquelle se trouve la variable age  ".

Sur un pointeur, comme pointeurSurAge  :

pointeurSurAge signifie : "Je veux la valeur de pointeurSurAge  " (cette valeur étant une adresse) ;

*pointeurSurAge signifie : "Je veux la valeur de la variable qui se trouve à l'adresse contenue dans pointeurSurAge  ".


Chaque variable est stockée à une adresse précise en mémoire.

Les pointeurs sont semblables aux variables, à ceci près qu'au lieu de stocker un nombre, ils stockent l'adresse à laquelle se trouve une variable en mémoire.

Si on place un symbole & devant un nom de variable, on obtient son adresse au lieu de sa valeur (ex. : &age  ).

Si on place un symbole * devant un nom de pointeur, on obtient la valeur de la variable stockée à l'adresse indiquée par le pointeur.

Le gros intérêt des pointeurs (mais ce n'est pas le seul) est qu'on peut les envoyer à des fonctions pour qu'ils modifient directement une variable en mémoire.


Exemple : 

int age = 20;
int* p = &age;

| Nom    | Contenu            | Signification                           |
| ------ | ------------------ | --------------------------------------- |
| `age`  | `20`               | La valeur de l’âge                      |
| `&age` | `0x7ffeeabc` (ex.) | L’adresse mémoire de `age`              |
| `p`    | `0x7ffeeabc`       | Le pointeur contient l’adresse de `age` |
| `*p`   | `20`               | La valeur stockée à l’adresse `p`       |

Le déréférencement consiste à accéder à la valeur stockée à une adresse mémoire à l'aide d'un pointeur.Déréférencer, c’est aller chercher la valeur à cette adresse. , *p c’est le déréférencement de p → tu obtiens la valeur de x, donc 10.

int a  =  10; 

int *p = &a ; => permet de chercher la valeur grace à l'adresse &a; 

*/

//La fonction sizeof permet de connaître la taille en mémoire (en octets) d’un type de donnée ou d’une variable.

/*

La bibliothèque (string.h) fournit de nombreuses fonctions dédiées aux calculs sur des chaînes.
strlen pour calculer la longueur d'une chaîne.

- strcpy pour copier une chaîne dans une autre.

- strcat pour concaténer 2 chaînes.

- strcmp pour comparer 2 chaînes.

- strchr pour rechercher un caractère.

- strpbrk pour rechercher le premier caractère de la liste.

- strstr pour rechercher une chaîne dans une autre.

- sprintf pour écrire dans une chaîne.

*/


/*

strlen (pour "string length") est une fonction qui calcule la longueur d'une chaîne de caractères (sans compter le caractère\0  ) :

*/

int main() {
    char text[100];
      printf("Ecrivez quelqie chose \n"); 
      fgets(text,100, stdin);
      printf("%s", text); 

      
}
