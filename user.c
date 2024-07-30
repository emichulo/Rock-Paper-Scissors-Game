#include <stdio.h>
#include <string.h>

#include"user.h"


user initUser(const char* name, int age) {
    user n1;
    strncpy(n1.name, name, sizeof(n1.name)-1);
    n1.age = age;
    n1.score = 0;

    return n1;
}

void printScore(const user* n1){

    printf("Score is: %d", n1->score);

}

void incrScore(user* n1){
    n1->score = n1->score + 1;
}