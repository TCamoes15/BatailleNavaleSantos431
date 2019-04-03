#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

int jouerfacile(char grille55[5][5] , int grillemasque55[5][5] , bool jeuactif){
    int a = 0;
    int b= 0;
    int horizontal , vertical;
    jeuactif = true;

    SetConsoleOutputCP(65001); // Pour les accents

    while(jeuactif == true)
    {
        printf("\t1\t2\t3\t4\t5\n");

        for (a=0; a<5; a++) {

            printf("%d\t",a+1);

            for (b = 0; b < 5; b++) {
                printf("%c\t", grille55[a][b]);
            }
            printf("\n");
        }

        printf("Ou veux tu tirer en horizontal?\n");
        scanf("%d",&horizontal);

        printf("Ou veux tu tirer en vertical?\n");
        scanf("%d",&vertical);

        horizontal = horizontal-1;
        vertical = vertical-1;

        if  (grillemasque55[horizontal][vertical]==1 ||
             grillemasque55[horizontal][vertical]==2 ||
             grillemasque55[horizontal][vertical]==3 ||
             grillemasque55[horizontal][vertical]==4)
        {
            grille55[horizontal][vertical]='T';
        }
        else
        {
            grille55[horizontal][vertical]='R';
        }
        system("cls");
    }
}

int jouermoyen(char grille1010[10][10] , int grillemasque1010[10][10] , bool jeuactif){
    int a = 0;
    int b= 0;
    int horizontal , vertical;
    jeuactif = true;

    while(jeuactif == true)
    {
        for (a=0; a<10; a++) {

            for (b = 0; b < 10; b++) {
                printf("%c\t", grille1010[a][b]);
            }
            printf("\n");
        }

        printf("Ou veux tu tirer en horizontal?\n");
        scanf("%d",&horizontal);

        printf("Ou veux tu tirer en vertical?\n");
        scanf("%d",&vertical);

        horizontal = horizontal-1;
        vertical = vertical-1;

        if  (grillemasque1010[horizontal][vertical]==1 ||
             grillemasque1010[horizontal][vertical]==2 ||
             grillemasque1010[horizontal][vertical]==3 ||
             grillemasque1010[horizontal][vertical]==4)
        {
            grille1010[horizontal][vertical]='T';
        }
        else
        {
            grille1010[horizontal][vertical]='R';
        }
        system("cls");
    }
}

    int jouerdifficile(char grille1515[15][15] , int grillemasque1515[15][15] , bool jeuactif){
        int a = 0;
        int b= 0;
        int horizontal , vertical;
        jeuactif = true;

    while(jeuactif == true)
    {
        for (a=0; a<10; a++) {

            for (b = 0; b < 10; b++) {
                printf("%c\t", grille1515[a][b]);
            }
            printf("\n");
        }

        printf("Ou veux tu tirer en horizontal?\n");
        scanf("%d",&horizontal);

        printf("Ou veux tu tirer en vertical?\n");
        scanf("%d",&vertical);

        horizontal = horizontal-1;
        vertical = vertical-1;

        if  (grillemasque1515[horizontal][vertical]==1 ||
             grillemasque1515[horizontal][vertical]==2 ||
             grillemasque1515[horizontal][vertical]==3 ||
             grillemasque1515[horizontal][vertical]==4)
        {
            grille1515[horizontal][vertical]='T';
        }
        else
        {
            grille1515[horizontal][vertical]='R';
        }
        system("cls");
    }
}


int main() {
    int Menu,Jouer1,i,j,choix,a,b,c,d;
    bool jeuactif = false;

    char grille1010[10][10] = {
            {'-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-'},

    };

    int grillemasque1010 [10][10] = {

            {0,1,0,0,6,6,6,0,0,0},
            {0,1,0,0,0,0,0,0,4,0},
            {0,0,0,0,0,0,0,0,4,0},
            {0,0,0,0,0,0,0,0,4,0},
            {0,0,0,0,3,0,0,0,4,0},
            {0,0,2,0,3,0,0,0,0,0},
            {0,0,2,0,3,0,0,0,0,0},
            {0,0,0,0,3,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,5,5,5,0,0,0,0,0,0},


    };

    char grille55 [5][5] = {

            {'-','-','-','-','-'},
            {'-','-','-','-','-'},
            {'-','-','-','-','-'},
            {'-','-','-','-','-'},
            {'-','-','-','-','-'},

    };

    int grillemasque55 [5][5] = {
            {4,2,2,2,0},
            {4,0,0,0,3},
            {4,0,1,0,3},
            {4,0,1,0,3},
            {4,0,0,0,3},

    };

    char grille1515 [15][15] = {

            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
            {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
    };

    int grillemasque1515 [15][15] = {

            {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,4,4,4,4,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,3,3,3,3},
            {0,0,0,0,0,0,2,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,2,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,5,5,5,0,0,0,0,0,0,0,6,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,6,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,6,0},



    };


    printf("1- Jouer\n2- Tutoriel\n3- Aide\n\nChoissisez le numero que vous voulez:");
    scanf("%d", &Menu);

    switch (Menu) {
        case 1:
            printf("1-Partie rapide\n2-Choisir la grille de jeu\n3-Retourner sur le menu principal\n\nChoissiez le numero de votre choix:");  //Utilisateur choisi ce qu'il veut faire.
            scanf("%d",&Jouer1);

            switch (Jouer1) {
                case 1:
                    printf("Vous allez jouer une partie rapide!\n\n");      //Jouer
                    jouermoyen(grille1010,grillemasque1010,jeuactif);

                    break;
                case 2:
                    printf("1-Facile\n2-Moyen\n3-Difficile\n\nChoissiez le numero de votre choix:");
                    scanf("%d",&choix);

                    switch (choix) {
                        case 1:
                            printf("Vous avez choisi le mode facile.\n");
                            jouerfacile(grille55,grillemasque55,jeuactif);

                            break;
                        case 2:
                            printf("Vous avez choisi le mode moyen.\n");
                            jouermoyen(grille1010,grillemasque1010,jeuactif);

                            break;

                        case 3:
                            printf("Vous avez choisi le mode difficile.\n");
                            jouerdifficile(grille1515,grillemasque1515,jeuactif);

                            break;
                    }
                    break;
                case 3:
                    printf("");
                    break;
                default:
                    printf("");
                    break;
            }
            break;
        case 2:
            printf("\t\n\nPage Tutoriel\n\n");     //Afficher une page de tutoriel
            printf("Vous devez choisir une grille et les bateaux seront pose de forme aleatoire.\n");
            printf("Vous devriez par la suite choisir le numero de la ligne et le numero de la colonne pour pouvoir tirer.\n");
            printf("Quand la lettre 'T' ce affiche c'est pour vous dire que vous avez toucher un bateau.\n");
            printf("Quand la lettre 'R' ce affiche c'est pour vous dire que vous avez rate votre tir\n");
            printf("Quand la lettre 'C' ce affiche c'est pour vous dire que vous avez toucher et couler le bateau.\n");
            break;
        default:
            printf("");
            break;
    }

    system("pause");
    return 0;
}