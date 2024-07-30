#ifndef USER_H
#define USER_H

typedef struct User {
    char name[50];
    int age, score;

} user;

user initUser(const char* name, int age);

void printScore(const user* n1);

void incrScore(user* n1);

#endif // USER_H
