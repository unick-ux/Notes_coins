
#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    long long taka;
    int paisa;

    printf("Enter amount: ");
    scanf("%99s", input);

    char *point = strchr(input, '.');

    if (point != NULL) {
        *point = '\0';

        sscanf(input, "%lld", &taka);

        point++;

        if (point[0] >= '0' && point[0] <= '9')
            paisa = (point[0] - '0') * 10;
        else
            paisa = 0;

        if (point[1] >= '0' && point[1] <= '9')
            paisa += point[1] - '0';
    }
    else {
        sscanf(input, "%lld", &taka);
        paisa = 0;
    }

    long long cents = taka * 100 + paisa;

    printf("\nNOTES:\n");

    printf("%lld note(s) of 100.00\n", cents / 10000);
    cents = cents % 10000;

    printf("%lld note(s) of 50.00\n", cents / 5000);
    cents = cents % 5000;

    printf("%lld note(s) of 20.00\n", cents / 2000);
    cents = cents % 2000;

    printf("%lld note(s) of 10.00\n", cents / 1000);
    cents = cents % 1000;

    printf("%lld note(s) of 5.00\n", cents / 500);
    cents = cents % 500;

    printf("%lld note(s) of 2.00\n", cents / 200);
    cents = cents % 200;

    printf("COINS:\n");

    printf("%lld coin(s) of 1.00\n", cents / 100);
    cents = cents % 100;

    printf("%lld coin(s) of 0.50\n", cents / 50);
    cents = cents % 50;

    printf("%lld coin(s) of 0.25\n", cents / 25);
    cents = cents % 25;

    printf("%lld coin(s) of 0.10\n", cents / 10);
    cents = cents % 10;

    printf("%lld coin(s) of 0.05\n", cents / 5);
    cents = cents % 5;

    printf("%lld coin(s) of 0.01\n", cents);

    return 0;
}
