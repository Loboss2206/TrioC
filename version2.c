#include "entetesVersion2.h"

void version2(int grille [10][10], int largeur, int cible, solution tabSolutions [], int *taille)
{
    int x=0,y=0, cpt=*taille;
    int valeur0,valeur1,valeur2;

    /* calcul sur l'horizontale */

    while (x<largeur)
    {
        y=0;
        while (y<largeur && y+3 <= largeur)
        {
            valeur0 = grille[x][y];
            valeur1 = grille[x][y+1];
            valeur2 = grille[x][y+2];

            /// ////////////////////////////////////////////////////// ///
            /// OPERATION SOUSTRACTION                                 ///
            /// ////////////////////////////////////////////////////// ///

            if ((valeur0 * valeur1) - valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur0 * valeur2) - valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur1 * valeur0) - valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur2 * valeur0) - valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur1 * valeur2) - valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur2 * valeur1) - valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }

            /// ////////////////////////////////////////////////////// ///
            /// FIN OPERATION SOUSTRACTION                             ///
            /// ////////////////////////////////////////////////////// ///


            /// ////////////////////////////////////////////////////// ///
            /// OPERATION ADDITION                                     ///
            /// ////////////////////////////////////////////////////// ///

            if ((valeur0 * valeur1) + valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur0 * valeur2) + valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur1 * valeur0) + valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur1 * valeur2) + valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur2 * valeur1) + valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur2 * valeur0) + valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }

            /// ////////////////////////////////////////////////////// ///
            /// FIN OPERATION ADDITION                                 ///
            /// ////////////////////////////////////////////////////// ///

            y++;
        }
        x++;
    }

    x=0;
    y=0;

    /* calcul sur la verticale */

    while (x<largeur  && x+3<=largeur)
    {
        y=0;
        while (y<largeur)
        {
            valeur0 = grille[x][y];
            valeur1 = grille[x+1][y];
            valeur2 = grille[x+2][y];

            /// ////////////////////////////////////////////////////// ///
            /// OPERATION SOUSTRACTION                                 ///
            /// ////////////////////////////////////////////////////// ///

            if ((valeur0 * valeur1) - valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur0 * valeur2) - valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur1 * valeur0) - valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur2 * valeur0) - valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur1 * valeur2) - valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur2 * valeur1) - valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }

            /// ////////////////////////////////////////////////////// ///
            /// FIN OPERATION SOUSTRACTION                             ///
            /// ////////////////////////////////////////////////////// ///


            /// ////////////////////////////////////////////////////// ///
            /// OPERATION ADDITION                                     ///
            /// ////////////////////////////////////////////////////// ///

            if ((valeur0 * valeur1) + valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur0 * valeur2) + valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur1 * valeur0) + valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur1 * valeur2) + valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur2 * valeur1) + valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur2 * valeur0) + valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }

            /// ////////////////////////////////////////////////////// ///
            /// FIN OPERATION ADDITION                                 ///
            /// ////////////////////////////////////////////////////// ///
            y++;
        }
        x++;
    }

    x=0;
    y=0;

    /* calcul sur la diagonale gauche vers droite */

    while (x<largeur && x+3<=largeur)
    {
        y=0;
        while (y<largeur && y+3 <= largeur)
        {
            valeur0 = grille[x][y];
            valeur1 = grille[x+1][y+1];
            valeur2 = grille[x+2][y+2];

            /// ////////////////////////////////////////////////////// ///
            /// OPERATION SOUSTRACTION                                 ///
            /// ////////////////////////////////////////////////////// ///

            if ((valeur0 * valeur1) - valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur0 * valeur2) - valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur1 * valeur0) - valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur2 * valeur0) - valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur1 * valeur2) - valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur2 * valeur1) - valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }

            /// ////////////////////////////////////////////////////// ///
            /// FIN OPERATION SOUSTRACTION                             ///
            /// ////////////////////////////////////////////////////// ///


            /// ////////////////////////////////////////////////////// ///
            /// OPERATION ADDITION                                     ///
            /// ////////////////////////////////////////////////////// ///

            if ((valeur0 * valeur1) + valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur0 * valeur2) + valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur1 * valeur0) + valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur1 * valeur2) + valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur2 * valeur1) + valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur2 * valeur0) + valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }

            /// ////////////////////////////////////////////////////// ///
            /// FIN OPERATION ADDITION                                 ///
            /// ////////////////////////////////////////////////////// ///
            y++;
        }
        x++;
    }

    x=0;
    y=2;

    /* calcul sur diagonale droite vers gauche */

    while (x<largeur && x+3<=largeur)
    {
        y=2;
        while (y<largeur && y-3 <= largeur)
        {
            valeur0 = grille[x][y];
            valeur1 = grille[x+1][y-1];
            valeur2 = grille[x+2][y-2];

            /// ////////////////////////////////////////////////////// ///
            /// OPERATION SOUSTRACTION                                 ///
            /// ////////////////////////////////////////////////////// ///

            if ((valeur0 * valeur1) - valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur0 * valeur2) - valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur1 * valeur0) - valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur2 * valeur0) - valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur1 * valeur2) - valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }
            if((valeur2 * valeur1) - valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 45;
                cpt++;
            }

            /// ////////////////////////////////////////////////////// ///
            /// FIN OPERATION SOUSTRACTION                             ///
            /// ////////////////////////////////////////////////////// ///


            /// ////////////////////////////////////////////////////// ///
            /// OPERATION ADDITION                                     ///
            /// ////////////////////////////////////////////////////// ///

            if ((valeur0 * valeur1) + valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur0 * valeur2) + valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur0;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur1 * valeur0) + valeur2 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur2;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur1 * valeur2) + valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur1;
                tabSolutions[cpt].b = valeur2;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur2 * valeur1) + valeur0 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur1;
                tabSolutions[cpt].c =  valeur0;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }
            if((valeur2 * valeur0) + valeur1 == cible)
            {
                tabSolutions[cpt].a = valeur2;
                tabSolutions[cpt].b = valeur0;
                tabSolutions[cpt].c =  valeur1;
                tabSolutions[cpt].cible = cible;
                tabSolutions[cpt].op = 43;
                cpt++;
            }

            /// ////////////////////////////////////////////////////// ///
            /// FIN OPERATION ADDITION                                 ///
            /// ////////////////////////////////////////////////////// ///

            y++;
        }
        x++;
    }
    if (cpt==0) printf("Aucune solution trouvee\n");
    tri(tabSolutions,cpt);
}

void tri (solution tabSolutions[], int nbRes)
{
    int i,j;
    solution c;
    for(i=0; i<nbRes-1; i++)
        for(j=i+1; j<nbRes; j++)
            if (tabSolutions[i].a > tabSolutions[j].a)
            {
                c = tabSolutions[i];
                tabSolutions[i] = tabSolutions[j];
                tabSolutions[j] = c;
            }
    affichage(tabSolutions,nbRes);
}

void affichage(solution tabSolutions[], int taille)
{
    for (int i=0; i<taille; i++)
    {
        printf("%d x %d %c %d = %d\n",tabSolutions[i].a,tabSolutions[i].b,tabSolutions[i].op,tabSolutions[i].c,tabSolutions[i].cible);
    }
}
