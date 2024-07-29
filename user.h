#ifndef USER_H
#define USER_H

typedef struct User {
    char name[50];
    int choose, score;

} user;

user initUser(const char* name, int choose);

void printScore(const user* n1);

#endif // USER_H
