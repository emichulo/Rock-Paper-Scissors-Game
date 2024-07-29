#include <stdio.h>
#include <string.h>

#include"user.h"


user initUser(const char* name, int choose) {
    user n1;
    strncpy(n1.name, name, sizeof(n1.name)-1);
    n1.choose = choose;

    return n1;
}