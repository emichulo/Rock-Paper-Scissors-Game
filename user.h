#ifndef USER_H
#define USER_H

typedef struct User {
    char name[50];
    int choose, score;

} user;

user initUser(const char* name, int choose);

#endif // USER_H
