# JEU DE MASTERMIND
Le jeu de mastermind est un jeu où le joueur tante de trouver une séquence de couleurs en un nombre de tantifs limités

## MANUEL D'UTILISATION
Il suffit juste de lancer le terminal depuis le repertoire **techdev-mastermind-tanou_ahamat**, taper la commande __make__,  cette commande compile le programme du jeu et génère un exécutable **main** et le place dans le repertoire **bin** qui se trouve dans le répertoire **techdev-mastermind-tanou_ahamat**. Pour lancer le jeu, tapez la commande __bin/main__.

    techdev-mastermind-tanou_ahamat$ make
    techdev-mastermind-tanou_ahamat$ bin/main

## MANUEL DU DEVELOPPEUR
### Architecture 
Le projet est organisé en different dossier qui sont : 
- __src__ : Est le fichier qui contient les codes sources des differentes fonctions du programme et les fichier textes.
- __include__ : Contient les prototype des differentes fonctions du programme.
- __code_bibliothèque__ : Contient un dossier __src__ et __include__ qui contiennent respectivement le code source et le prototype de la fonction de la  bibliothèque de couleur.
- __lib__ : Contient deux sous dossiers, __lib__ qui contient la bibliothèque de couleur .a et __include__ qui contient le prototype de la fonction de bibliothèque de couleur.
- __obj__ : Est le dossier qui va contenir les fichiers objets generer lors de la compilation.
- __bin__ : Est le dossier qui va contenir l'executable creer lors de la compilation.
- __Doxyfile__ : Fichier de configuration pour la documentation du projet.
- __makefile__ : Contient les règles de compilation du projet.

### Debuguage 
La compilation du programme avec __make__ inclus l'option de debuguage donc pour lancer le debugeur on tape la commande __gdb__ suivie de __bin/main__.

    techdev-mastermind-tanou_ahamat$ gdb bin/main 

### Contribution 
Si vous souhaitez contribuer au projet, assurez-vous que les codes de vos fonctions ou de votre application soient dans le dossier __src__ et leurs prototypes dans __include__. Si votre application a besoin d'une nouvelle assurez vous de mettre la bibliothèque dans le dossier __lib/lib__ et le prototype dans __lib/include__.

## RAPPORT DU PROJET
On a tenu une reunion au cours de laquelle on a décidé de separer le projet en differentes applications et on s'est partagé les differentes tâches. On a utilisé des branches parallèles tout au long du developpement, pour chaque nouvelle fonctionnalité ou correction de bugs d'une fonctionnalité existante. A chaque fois que l'un developpe ou corrige une fonctionnalité, il la push et l'autre collegue la vérifie et si tout est parfait, on la fusionne avec la branche principale et ainsi de suite pour chaque nouvelle fonctionnalité jusqu'à la réalisation du projet.

### Défis
- Pour la fonction qui permet de générer une séquence de couleurs aléatoire, pour le niveau facile, en voulant interdire les doublons, on s'est créé une boucle infinie. Par la suite on l'a répéré et corrigé grace à l'outil de debegguage __gbd__.

- De fois quand on pushait une branche, on rencontrait des conflits et c'était pas évident de les corrigés manuellement.

- On est pas trop sûr de notre code en terme de complexité(On s'est dit qu'on pouvait optimisé plus que ça).

### Choix de conception
En terme de conception on a eu a utilisé un certain nombre de fonctions de la librairie standard c pour nous faciliter pour alléger un peu le code.
Découpage du projet en differentes fonctions pour avoir une architecture simple et de code lisible.

### Fonctionalités supplémentaires

- __Possibilité de jouer à deux(2) joueurs__:  Un joueur entre une séquence de couleurs et l'autre tante de la deviner.
- __La gestion de scores__ : Avant de jouer, on demande au joueur son prénom pour pouvoir l'enregitrer avec son score dans un fichier. On a décidé de gérer juste trois scores. Et les régles étaient si le nombre de scores dans le fichier est inférieur à 3, et si le joueur n'existe pas dans le fichier, on l'ajoute, sinon si le joueur existe alors on remplace son ancien score par le nouveau score, sinon, le fichier est plein et le joueur n'est pas déjà enregistré dans le fichier alors on écrase le score le plus petit.

