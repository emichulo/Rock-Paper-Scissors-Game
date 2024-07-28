#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

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

    if(n1 == 1 && n2 == 1 || n1 == 2 && n2 == 2 || n1 == 3 && n2 == 3) {
        //draw case add a function to play again
        printf("It's a draw!"); }
    else if(n1 == 1 && n2 == 3 || n1 == 2 && n2 == 1 || n1 == 3 && n2 == 2)
            printf("PC win!");
            else
                printf("You win!");

}

void menu(){
    int n,x1,x2;

    printf("\n\n\n\n\t\t\t\tRock Paper Scissor Game\n\t\t\t\t\t\t\t\n\n\n\n\n");
    printf("1.Start game\n");
    printf("2.Quit\n\n\n\n");
    printf("Enter number\n");

    scanf("%d", &n);

    system("cls");

    switch (n)
    {
    case 1:
        x1=ComputerChoose();
        x2=UserChoose();
        system("cls");
        printf("Pc choose: %d \n", x1);
        testing(x1,x2);
        break;
    
    case 2:
        exit(1);
    }

            
}

int main(){
menu();
}