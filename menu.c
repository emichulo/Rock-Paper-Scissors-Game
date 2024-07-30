#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#include "menu.h"
#include "user.h"

user u1;

int UserChoose(){
    int n;
    
    printf("Choose a number:\n\n\n");
    printf("1 --- Rock\n");
    printf("2 --- Paper\n");
    printf("3 --- Scissor\n");

    scanf("%d", &n);

   
    return n;
}

int ComputerChoose(){
    int n;
    srand(time(0));

    n = rand() % 3 + 1;
    return n;
    
}

void testing(int n1, int n2){

    if(( n1 == 1 && n2 == 1 )|| ( n1 == 2 && n2 == 2 )||( n1 == 3 && n2 == 3 )) {
        printf("It's a draw!"); }
    else if(( n1 == 1 && n2 == 3 )|| ( n1 == 2 && n2 == 1 )||( n1 == 3 && n2 == 2 ))
            printf("PC win!");
            else{
                printf("You win!");
                incrScore(&u1);}

    

}

void start_menu(){
    system("cls");

    printf("\n\n\n\n\t\t\t\tRock Paper Scissor Game\n\t\t\t\t\t\t\t\n\n\n\n\n");
    printf("1.Start game\n");
    printf("2.Quit\n\n\n\n");
    printf("Enter number\n");
}

void game_menu(){
    system("cls");

    printf("\n\n\n\n\t\t\t\tRock Paper Scissor Game\n\t\t\t\t\t\t\t\n\n\n\n\n");
    printf("1.Play\n");
    printf("2.Show score\n");
    printf("3.Quit\n\n\n\n");
    printf("Enter number\n");
}

void menu(){
    int n,x1,x2,age;
    char name[50];

    start_menu();

    scanf("%d", &n);

    switch (n)
    {
    case 1:
        system("cls");

        printf("Choose your name:\n");
        scanf("%s", name);
        printf("Choose your age:\n");
        scanf("%d", &age);
        u1 = initUser(name,age);
        break;
    case 2:
        exit(1);
    }

    while(1){
        system("cls");

        game_menu();
        scanf("%d", &n);

        switch(n)
        {
        case 1:
            x1=ComputerChoose();
            system("cls");
            x2=UserChoose();
            system("cls");
            printf("Pc choose: %d \n", x1);
            testing(x1,x2);
            Sleep(2000);
            break;
    
        case 2:
            system("cls");
            printScore(&u1);
            Sleep(2000);
            system("cls");
            break;
        case 3:
            exit(1);
        }
    }
    
            
}