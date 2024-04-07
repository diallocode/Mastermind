# JEU DE MASTERMIND
Le jeu de Mastermind est un jeu de réflexion où un joueur tente de deviner une séquence de couleurs en un nombre limité de tentatives.

## MANUEL D'UTILISATION
Pour jouer, lancez le terminal depuis le répertoire **techdev-mastermind-tanou_ahamat**, puis tapez la commande __make__,  cette commande compile le programme, génère un exécutable **main** et le place dans le repertoire **bin** qui se trouve dans le répertoire **techdev-mastermind-tanou_ahamat**. Pour lancer le jeu, tapez la commande __bin/main__.

    techdev-mastermind-tanou_ahamat$ make
    techdev-mastermind-tanou_ahamat$ bin/main

## MANUEL DU DEVELOPPEUR
### Architecture 
Le projet est organisé en different dossier qui sont : 
- __src__ : Contient le code source des différentes fonctions du programme réparti dans divers fichiers **.c** ainsi que les fichiers **.txt**.
- __include__ : Contient les prototypes des différentes fonctions du programme dans divers fichiers __.h__ .
- __code_bibliothèque__ : Contient deux sous dossiers __src__ et __include__ qui renferment respectivement le code source et le prototype de la fonction de la  bibliothèque de couleur.
- __lib__ : Dossier contenant deux sous dossiers, __lib__ qui contient la bibliothèque de couleur __.a__ et __include__ qui contient le prototype de la fonction de bibliothèque de couleur.
- __obj__ : Dossier destiné à contenir les fichiers objets générés lors de la compilation.
- __bin__ : Dossier destiné à contenir l'exécutable créé lors de la compilation.
- __Doxyfile__ : Fichier de configuration pour la documentation du projet avec __Doxygen__.
- __makefile__ : Fichier qui définit les règles de compilation du projet.

<span style="color:green">Remarque:</span> Tous les répertoires cités ci-hauts se trouvent dans le répertoire parent **techdev-mastermind-tanou_ahamat**.

### Debuguage 
La compilation du programme avec __make__ inclus l'option de debuguage. Pour lancer le débogueur, tapez la commande  __gdb__ __bin/main__.

    techdev-mastermind-tanou_ahamat$ gdb bin/main

Pour vérifier les fuites mémoires, utilisez la commande __valgring__ suivit de l'option __--leak-check=full__ et __bin/main__.

    techdev-mastermind-tanou_ahamat$ valgrind --leak-check=full bin/main

### Contribution 
Pour contribuer au projet, veillez à placer vos codes source dans le dossier __src__ et leurs prototypes dans __include__. Si votre contribution nécessite une nouvelle bibliothèque, ajoutez la bibliothèque dans __lib/lib__ et le prototype dans __lib/include__.

### Divers
Utilisez les commandes suivantes depuis le répertoire __techdev-mastermind-tanou_ahamat__ 

- __make zip__ : Créer une archive du projet
- __make clean__ : Supprimer les fichiers objets, l'exécutable et dossiers de documentation générés.
- __make doc__: Générer la documentation.


## RAPPORT DU PROJET
Nous avons tenu une réunion pour décider de la répartition des tâches. Le développement s'est fait en utilisant des branches parallèles pour chaque nouvelle fonctionnalité ou correction. Chaque fonctionnalité développée était soumise à une vérification par un collègue avant d'être fusionnée à la branche principale.

### Défis rencontrés
- Générer une séquence de couleurs aléatoire sans doublons a conduit à une boucle infinie, corrigée grâce à  __gdb__.

- La gestion des conflits git était parfois complexe mais on a toujours pu les résoudres grace a la commande __help__.

- Nous avons des doutes sur l'optimisation de notre code et pensons qu'il pourrait être amélioré.

- L'utilisation d'un appel système pour nettoyer le terminal(__clear__)  n'est pas compatible avec tous les systèmes d'exploitation, limitant l'utilisation à Linux.

### Choix de conception
Nous avons privilégié une architecture modulaire, découpant le projet en fonctions distinctes pour simplifier la lecture,la maintenance, la lisibilité et pour toute eventuelle contribution.

### Fonctionalités supplémentaires

- __Mode deux joueurs__: Un joueur saisit une séquence que l'autre tente de deviner.
- __Gestion des scores__ : Le prénom du joueur et son score sont enregistrés dans un fichier. Seuls les trois meilleurs scores sont conservés.

