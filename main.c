#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#pragma execution_character_set("utf-8")

void DisplayRecipe(float Farine, float Lait, float Biere, float Eau, float Oeufs, float Sel, float Beurre, float levure)
{

    printf("Farine \n");
    printf("Lait \n");
    printf("Bière \n");
    printf("Eau \n");
    printf("Oeufs \n");
    printf("Sel \n");
    printf("Beurre \n");
    printf("Levure \n");
}
int main()

{
    SetConsoleOutputCP(65001);
    int choice, guests;
    float Farine, Lait, Biere, Eau, Oeufs, Sel, Beurre, Levure;
    float i [5][8] = {{500,1,0,0,6,2,2,0},{500,0.75,0,0.25,6,2,2,0},{500,0,1,0,6,2,2,0},{300,0.5,0,0,2,2,4,10},{250,0.3,0,0,2,1,3,10}};
    printf("Nombre de conviés: \n");
    scanf("%d",&guests);
    choose:
    printf("Choisissez la recette :\n 1 - crêpes classiques\n 2 - crêpes légères\n 3 - crêpes à la bierre\n 4 - gauffres\n 5 - pancakes\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            printf("\ncrêpes classiques\n");
            DisplayRecipe(i[0][0],i[0][1],i[0][2],i[0][3],i[0][4],i[0][5],i[0][6],i[0][7]);
            break;
        case 2:
            printf("\ncrêpes légère\n");
            DisplayRecipe(i[1][0],i[1][1],i[1][2],i[1][3],i[1][4],i[1][5],i[1][6],i[1][7]);
            break;
        case 3:
            printf("\ncrêpes à la bierre\n");
            DisplayRecipe(i[2][0],i[2][1],i[2][2],i[2][3],i[2][4],i[2][5],i[2][6],i[2][7]);
            break;
        case 4:
            printf("\ngauffres\n");
            DisplayRecipe(i[3][0],i[3][1],i[3][2],i[3][3],i[3][4],i[3][5],i[3][6],i[3][7]);
            break;
        case 5:
            printf("\ncpancakes\n");
            DisplayRecipe(i[4][0],i[4][1],i[4][2],i[4][3],i[4][4],i[4][5],i[4][6],i[4][7]);
            break;
        default:
            goto choose;
    }


    return 0;
}
