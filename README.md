# 🧮 TrioC

Ce travail a été réalisé dans le cadre du projet SAE102 pendant mon semestre 1 de BUT Informatique. Ce projet permet, à partir d'une grille, de trouver une combinaison de 3 nombres alignés separés par des opérateurs qui donne un résultat choisi par l'utilisateur. Il est aussi possible de demander toutes les possibilités au lieu de juste une. Le jeu est implémenté en C.

## ⚙️ Configuration

Le jeu utilise un fichier texte pour définir la grille, ainsi :

- Les fichiers grilleNxN.txt (où N est la largeur de la grille carrée) définit la structure de la grille et les nombres se trouvant à chaque position.

## 🛠️ Exécution du jeu

### Option 1 : Vous souhaitez utiliser le fichier executable dejà prêt

1. Clonez ce référentiel sur votre machine locale.

```shell
git clone https://github.com/Loboss2206/TrioC.git
```

2. Placez-vous dans ce repertoire en executant cette commande dans votre terminal :

```shell
cd TrioC
```

3. Exécutez le jeu en utilisant cette commande dans votre terminal :

```shell
./main
```

### Option 2 : Vous souhaitez créer votre propre fichier executable

1. Assurez-vous que vous avez un compilateur C tel que GCC installé.
2. Clonez ce référentiel sur votre machine locale en faisant cette commande :

```shell
git clone https://github.com/Loboss2206/TrioC.git
```

3. Placez-vous dans ce repertoire en executant cette commande dans votre terminal :

```shell
cd TrioC
```

4. Compilez le code en exécutant la commande

```shell
gcc *.c -o main
```

5. Exécutez le jeu en utilisant cette commande dans votre terminal :

```shell
./main
```

## 💻 Instructions de jeu

1. Changez les configurations de la grille en changeant les fichiers utilisés si vous le souhaitez.
2. Lancez le programme.
3. Choisir le mode de recherche (Une combinaison ou plusieurs) ou quitter le programme.
4. Le programme va faire une recherche pour satisfaire la requête et indiquera le résultat.

## 📋 Auteurs

    Logan Brunet
    Mateus Lopes
    Alexandre Colin
    Sacha Hassan

## ⚖️ Licence

Ce projet est sous licence MIT. Pour plus de détails, consultez le fichier LICENSE.

## ✏️ Comment contribuer ?

Si vous êtes enthousiasmé par ce projet et souhaitez contribuer, veuillez consulter le [guide de contribution](https://github.com/Loboss2206/LutinVsMonstres/blob/main/CONTRIBUTING.md) pour plus d'informations.
