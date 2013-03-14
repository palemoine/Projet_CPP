La Caverne

GIT
Configuration

    Associer son mail à Git : Test pour savoir s'il existe : git config --global user.email Si rien ne s'affiche, associer un nouveau nom : git config --global user.eamil "exemple@gmail.com"

    Associer son nom à Git : Test pour savoir s'il existe : git config --global user.name Si rien ne s'affiche, associer un nouveau nom : git config --global user.name "Martin Dupont"

    Pour utiliser SSH, il faut générer une clé. Voir la page github dédiée : https://help.github.com/articles/generating-ssh-keys

/!\ Le protocole ssh utilise le port 22 qui n'est pas autorisé à l'IUT. Il est donc nécessaire de passer par l'https quand on y est. Pour cela, il faut éditer un fichier de configuration local : 1. Se place dans le dépot local de Git 2. git config --local -e 3. En dessous de la ligne url=https://github.com/roipoussiere/jeudelavie.git, ajouter : url=git@github.com:roipoussiere/jeudelavie.git 4. Commenter (#) l'une ou l'autre ligne pour passer de ssh à https.

    .gitignore est configuré pour ignorer les fichiers générés par Eclipse et NEtBeans (.classpath, .metadata, ...).

Utilisation de Git :

Se familiariser avec les commandes de base : status, add, commit, pull, push

Après avoir installé le client GitHub, vous devez vous créer un répertoire local dans le quel vous mettrez tous les fichiers du projet. En suite, passez en mode console et effectuez cette commande pour cloner le dépot distant avec votre répertoire local : git clone https://github.com/votre_login_github/volley.git votre_repertoire
Commandes de base

Ensuite, à chaque fois que vous travaillez et que vous voulez envoyer vos fichiers sur le dépot, il faudra effectuer ces commandes :

    Si c'est pas fait, on se place dans le repertoire git local : cd votre_repertoire_git
    On regarde quels sont les fichiers qui ont été modifiés : git status
    Eventuellement on ajoute des fichiers au dépot (si on en a crée) : git add le_fichier
    On commite les fichiers pour dire à Git qu'il faut versionner les fichiers que vous avez modifié : git commit -a -m "Message pour décrire la modification effectuée"
    On récupère les fichiers présents sur le dépot pour avoir tout à jour : git pull
    On envoie les fichiers locaux vers le dépot github : git push

Configuration d'Eclipse
Workspace

Travaillez sur celui du projet (le dossier src du dépot), pas sur votre workspace perso!!
Pour que les caractères soient en utf-8

-> Window, General, Workspace, Text file encoding : UTF-8
