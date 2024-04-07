# JEU DE MASTERMIND
Le jeu de mastermind est un jeu où un joueur tante de trouver une séquence de couleurs en un nombre de tantifs limités.

## MANUEL D'UTILISATION
Pour jouer, il suffit juste de lancer le terminal depuis le repertoire **techdev-mastermind-tanou_ahamat**, taper la commande __make__,  cette commande compile le programme du jeu, génère un exécutable **main** et le place dans le repertoire **bin** qui se trouve dans le répertoire **techdev-mastermind-tanou_ahamat**. Pour lancer le jeu, tapez la commande __bin/main__.

    techdev-mastermind-tanou_ahamat$ make
    techdev-mastermind-tanou_ahamat$ bin/main

## MANUEL DU DEVELOPPEUR
### Architecture 
Le projet est organisé en different dossier qui sont : 
- __src__ : c'est un dossier qui contient le code source des differentes fonctions du programme dans différents fichier **.c** et les fichiers textes.
- __include__ : c'est un dossier qui contient les prototype des differentes fonctions du programme dans différents fichiers __.h__ .
- __code_bibliothèque__ : c'est un dossier qui contient deux sous dossiers __src__ et __include__ qui contiennent respectivement le code source et le prototype de la fonction de la  bibliothèque de couleur.
- __lib__ : c'est un dossier qui  contient deux sous dossiers, __lib__ qui contient la bibliothèque de couleur __.a__ et __include__ qui contient le prototype de la fonction de bibliothèque de couleur.
- __obj__ : c'est le dossier qui va contenir les fichiers objets générer lors de la compilation.
- __bin__ : c'est le dossier qui va contenir l'exécutable créer lors de la compilation.
- __Doxyfile__ : c'est le fichier de configuration pour la documentation du projet par __doxygen__.
- __makefile__ : c'est le fichier qui contient les règles de compilation du projet.

<span style="color:green">Remarque:</span> Tous les répertoires cités ci-hauts se trouvent dans le répertoire parent **techdev-mastermind-tanou_ahamat**.

### Debuguage 
La compilation du programme avec __make__ inclus l'option de debuguage, donc pour lancer le debugger on tape la commande __gdb__ suivie de __bin/main__.

    techdev-mastermind-tanou_ahamat$ gdb bin/main

De même pour vérifier les fuites mémoires, il suffit juste de taper la commande __valgring__ suivit de l'option __--leak-check=full__ et __bin/main__.

    techdev-mastermind-tanou_ahamat$ valgrind --leak-check=full bin/main

### Contribution 
Si vous souhaitez contribuer au projet, assurez-vous que les codes de vos fonctions ou de votre application soient dans le dossier __src__ et leurs prototypes dans __include__. Si votre application a besoin d'une nouvelle assurez vous de mettre la bibliothèque dans le dossier __lib/lib__ et le prototype dans __lib/include__.

### Divers
Dans tout ce qui suit, on doit lancer le terminal depuis le répertoire __techdev-mastermind-tanou_ahamat__ et taper les commandes:

- __make zip__ : créer une archive
- __make clean__ : supprimer les fichiers objets, l'exécutable et dossiers de documentation.
- __make doc__: générer la documentation.


## RAPPORT DU PROJET
On a tenu une reunion au cours de laquelle on a décidé de separer le projet en differentes applications et on s'est partagé les differentes tâches. On a utilisé des branches parallèles tout au long du developpement, pour chaque nouvelle fonctionnalité ou correction de bugs d'une fonctionnalité existante. A chaque fois que l'un developpe ou corrige une fonctionnalité, il la push et l'autre collegue la vérifie et si tout est parfait, on la fusionne avec la branche principale et ainsi de suite pour chaque nouvelle fonctionnalité jusqu'à la réalisation du projet.

### Défis
- Pour la fonction qui permet de générer une séquence de couleurs aléatoire, pour le niveau facile, en voulant interdire les doublons, on s'est créé une boucle infinie. Par la suite on l'a répéré et corrigé le bug grace à l'outil de debegguage __gdb__.

- De fois quand on pushait une branche, on rencontrait des conflits et c'était pas évident de les corrigés manuellement mais on a réussit a le faire quand même.

- On est pas trop sûr de notre code en terme de complexité(On s'est dit qu'on pouvait optimisé plus que ça).

- On a utilisé un appel system pour nettoyer le terminal (__clear__) mais celui-ci n'est pas pris en charge par d'autres systèmes d'exploitations telque windows ce qui fait que, pour que tout marche bien, <span style = "color: red">il faut être dans un environnement linux </span>.

### Choix de conception
En terme de conception on a eu a utilisé un certain nombre de fonctions de la librairie standard c pour nous faciliter pour alléger un peu le code.
Découpage du projet en differentes fonctions pour avoir une architecture simple et de code lisible.

### Fonctionalités supplémentaires

- __Possibilité de jouer à deux(2) joueurs__:  Un joueur entre une séquence de couleurs et l'autre tante de la deviner.
- __La gestion de scores__ : Avant de jouer, on demande au joueur son prénom pour pouvoir l'enregitrer avec son score dans un fichier. On a décidé de gérer juste trois scores. Et les régles étaient si le nombre de scores dans le fichier est inférieur à 3, et si le joueur n'existe pas dans le fichier, on l'ajoute, sinon si le joueur existe alors on remplace son ancien score par le nouveau score, sinon, le fichier est plein et le joueur n'est pas déjà enregistré dans le fichier alors on écrase le score le plus petit.

