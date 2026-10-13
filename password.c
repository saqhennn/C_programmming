//BCS-05-0072/2026

#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);
    } while (password != 1234);

    printf("Access Granted");

    return 0;
}
