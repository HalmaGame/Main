#include "déplacementjoueur1.h"
void deplacementjoueur1(int tab[][16], int* joueur)
{//deplacement joueur
 int x;
 int y;
 int x1 , y1;
 color(15,0);
 gotoligcol(5,55);
 printf(" ligne de depart\n");
 gotoligcol(6,55);
 scanf("%d",&x);
 gotoligcol(7,55);
 printf("colonne de depart\n");
 gotoligcol(8,55);
 scanf ("%d",&y);
 gotoligcol(x,y);
 printf("  ");
 gotoligcol(9,55);
  printf("ligne d'arrivee\n");
 gotoligcol(10,55);
 scanf("%d",&x1);
gotoligcol(11,55);
 printf("colonne d'arrivee\n");
 gotoligcol(12,55);
 scanf ("%d",&y1);
 gotoligcol(13,55);
 printf ("                                  ");
    tab[y][x] = 0;
    tab[y1][x1] = *joueur;
}
void afficher(int tab[][16])
{
    gotoligcol(0, 0);
    int i = 0, j = 0, b = 1;
    color(7, 0);
    printf(" A  B  C  D  E  F  G  H  I  J  K  L  M  N  O\n");
    for(i = 0; i < 16; i++)
    {
        for(j = 0; j < 16; j++)
        {
            if((j % 2) == b)
                color(0, 15);
            else
                color(0, 4);
            if(tab[i][j] == 0)
                printf("   ");//, tab[i][j]);
            else if(tab[i][j] == 1)
                printf(" # ");
            else if(tab[i][j] == 2)
                printf(" ! ");
            else if(tab[i][j] == 3)
                printf(" i ");
            else if(tab[i][j] == 4)
                printf(" ^ ");
        }
        b = (i % 2);
        color(7,0);
        printf("  %d\n", (i + 1));
    }
}
