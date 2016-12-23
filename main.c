#include "déplacementjoueur1.h"
void gotoligcol( int lig, int col )
{
    // ressources
    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}
void color(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}
int main()
{
    //menu
    int nbjoueurs, joueur, tour, findugame=0;
    color(11,0);
    printf("\n");
    printf("            *******************************************\n");
    printf("                   BIENVENUE DANS LE JEU DE L'HALMA\n");
    printf("            *******************************************\n");
    printf("\n");
    printf("    combien y a t'il de joueurs ?  ");
    scanf("%d",&nbjoueurs);
    printf("\n");
    printf("\n");
    //tableau
    system("cls");
    gotoligcol(0,0);
    int i,j,b=1;
    if(nbjoueurs == 4)
    {
        int mat[16][16] = {
            {1,1,1,1,0,0,0,0,0,0,0,0,4,4,4,4},
            {1,1,1,1,0,0,0,0,0,0,0,0,4,4,4,4},
            {1,1,1,0,0,0,0,0,0,0,0,0,0,4,4,4},
            {1,1,0,0,0,0,0,0,0,0,0,0,0,0,4,4},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {3,3,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
            {3,3,3,0,0,0,0,0,0,0,0,0,0,2,2,2},
            {3,3,3,3,0,0,0,0,0,0,0,0,2,2,2,2},
            {3,3,3,3,0,0,0,0,0,0,0,0,2,2,2,2},
            };
            while(findugame != 1)
            {
                int tour, joueur;
                for (tour=0; tour<200; tour++)
                {
                    for (joueur=1; joueur<=4; joueur++)
                    {
                        gotoligcol(4,55);
                        printf("C'est le tour %d de joueur %d", tour, joueur);
                        afficher(mat);
                        deplacementjoueur1(mat, &joueur);
                    }
                }
            }
    }
    else if(nbjoueurs == 2)
    {
         int mat[16][16] = {
                {1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
                {1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
                {1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2},
                {0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
                {0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
                };
                 while(findugame != 1)
                    {
                        int tour, joueur;
                        for (tour=0; tour<200; tour++)
                        {
                            for (joueur=1; joueur<=2; joueur++)
                            {
                                gotoligcol(4,55);
                                printf("C'est le tour %d de joueur %d", tour, joueur);
                                afficher(mat);
                                deplacementjoueur1(mat, &joueur);
                            }
                        }
                    }
    }
        int idep , jdep;
        int iar , jar;
//saisie coup par joueur
        scanf("%d",&idep);
        scanf("%d",&jdep);
        scanf("%d",&iar);
        scanf("%d",&jar);
        /*//controler mouvement
        //mouvement
        mat[iar][jar]=mat[idep][jdep]
        mat[idep][idep]=0;
        void afficherMat(int mat [16][16])
        {
            int i,j;*/
        return 0;
    }
