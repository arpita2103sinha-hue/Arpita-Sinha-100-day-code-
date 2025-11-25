#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum Role roles[] = {ADMIN, USER, GUEST};
    char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    int size = sizeof(roles) / sizeof(roles[0]);

    for (int i = 0; i < size; i++) {
        printf("%s = %d\n", roleNames[i], roles[i]);
    }

    return 0;
}

