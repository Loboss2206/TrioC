#include "entetesVersion1.h"

void version1(int grille [10][10], int largeur, int cible)
{
    int x=0,y=0, cpt=0;
    int valeur0,valeur1,valeur2;

    /* calcul sur l'horizontale */

    while (x<largeur && cpt<1)
    {
        y=0;
        while (y<largeur && cpt<1)
        {
            if (y+3 <= largeur)
            {
                valeur0 = grille[x][y];
                valeur1 = grille[x][y+1];
                valeur2 = grille[x][y+2];
                if ((calcule_minus(valeur0, valeur1, valeur2, cible)==1) || (calcule_add(valeur0, valeur1, valeur2, cible))==1) cpt++;
            }
            y++;
        }
        x++;
    }

    x=0;
    y=0;

    /* calcul sur la verticale */

    while (x<largeur && cpt<1)
    {
        y=0;
        while (y<largeur && cpt<1)
        {
            if (y+3 <= largeur)
            {
                int valeur0 = grille[x][y];
                int valeur1 = grille[x+1][y];
                int valeur2 = grille[x+2][y];
                if (calcule_minus(valeur0, valeur1, valeur2, cible)==1 || (calcule_add(valeur0, valeur1, valeur2, cible))==1) cpt++;
            }
            y++;
        }
        x++;
    }

    x=0;
    y=0;

    /* calcul sur la diagonale gauche vers droite */

    while (x<largeur && cpt<1)
    {
        y=0;
        while (y<largeur && cpt<1)
        {
            if (y+3 <= largeur)
            {
                valeur0 = grille[x][y];
                valeur1 = grille[x+1][y+1];
                valeur2 = grille[x+2][y+2];
                if ((calcule_minus(valeur0, valeur1, valeur2, cible)==1) || (calcule_add(valeur0, valeur1, valeur2, cible))==1) cpt++;
            }
            y++;
        }
        x++;
    }

    x=0;
    y=2;

    /* calcul sur diagonale droite vers gauche */

    while (x<largeur && cpt<1)
    {
        y=2;
        while (y<largeur && cpt<1)
        {
            if (y-3 <= largeur)
            {
                valeur0 = grille[x][y];
                valeur1 = grille[x+1][y-1];
                valeur2 = grille[x+2][y-2];
                if ((calcule_minus(valeur0, valeur1, valeur2, cible)==1) || (calcule_add(valeur0, valeur1, valeur2, cible))==1) cpt++;
            }
            y++;
        }
        x++;
    }

    if (cpt==0) printf("Aucune solution trouvee\n");
}

int calcule_minus(int valeur0, int valeur1, int valeur2, int cible)
{
    if ((valeur0 * valeur1) - valeur2 == cible)
    {
        printf("%d = %d x %d - %d\n", cible, valeur0, valeur1, valeur2);
        return 1;
    }
    else if((valeur0 * valeur2) - valeur1 == cible)
    {
        printf("%d = %d x %d - %d\n", cible, valeur2, valeur1, valeur0);
        return 1;
    }
    else if((valeur1 * valeur0) - valeur2 == cible)
    {
        printf("%d = %d x %d - %d\n",cible, valeur0, valeur2,  valeur1);
        return 1;
    }
    else if((valeur1 * valeur2) - valeur0 == cible)
    {
        printf("%d = %d x %d - %d\n",cible, valeur2, valeur0,  valeur1);
        return 1;
    }
    else if((valeur2 * valeur1) - valeur0 == cible)
    {
        printf("%d = %d x %d - %d\n",cible, valeur1, valeur0, valeur2);
        return 1;
    }
    else if((valeur2 * valeur0) - valeur1 == cible)
    {
        printf("%d = %d x %d - %d\n",cible, valeur0, valeur1, valeur2);
        return 1;
    }
    return 0;
}

int calcule_add(int valeur0, int valeur1, int valeur2, int cible)
{
    if ((valeur0 * valeur1) + valeur2 == cible)
    {
        printf("%d = %d x %d + %d\n",cible , valeur1, valeur2, valeur0);
        return 1;
    }
    else if((valeur0 * valeur2) + valeur1 == cible)
    {
        printf("%d = %d x %d + %d\n",cible , valeur2, valeur1, valeur0);
        return 1;
    }
    else if((valeur1 * valeur0) + valeur2 == cible)
    {
        printf("%d = %d x %d + %d\n",cible , valeur0, valeur2, valeur1);
        return 1;
    }
    else if((valeur1 * valeur2) + valeur0 == cible)
    {
        printf("%d = %d x %d + %d\n",cible , valeur2, valeur0, valeur1);
        return 1;
    }
    else if((valeur2 * valeur1) + valeur0 == cible)
    {
        printf("%d = %d x %d + %d\n",cible , valeur1, valeur0, valeur2);
        return 1;
    }
    else if((valeur2 * valeur0) + valeur1 == cible)
    {
        printf("%d = %d x %d + %d\n",cible , valeur0, valeur1, valeur2);
        return 1;
    }
    return 0;
}
