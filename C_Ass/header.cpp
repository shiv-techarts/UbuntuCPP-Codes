#include "header.h"
#include <cstdio>

using namespace std;

void coordinates() {
    int x = 0, y = 0;
    printf("Enter the Co-Ordinates:\n");
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);

    if(x > 0 && y > 0)
        printf("First Co-Ordinate.\n");
    else if(x < 0 && y > 0)
        printf("Second Co-Ordinate.\n");
    else if(x < 0 && y < 0)
        printf("Third Co-Ordinate.\n");
    else if(x > 0 && y < 0)
        printf("Four Co-Ordinate.\n");
    else if(x == 0)
        printf("On Y-Axis\n");
    else if(y == 0)
        printf("On X-Axis");
    else
        printf("Wrong!...\n");
}

void calculateGross() {
    double amount = 0.0;
    printf("Enter the amount.\n");
    scanf("%lf", &amount);

    if(amount > 0 && amount < 4000)
        printf("Your Gross Amount is %lf", amount + (amount * .1) + (amount * .5));
    else if(amount > 4000 && amount < 8000)
        printf("Your Gross Amount is %lf", amount + (amount * .2) + (amount * .6));
    else if(amount > 8000 && amount < 12000)
        printf("Your Gross Amount is %lf", amount + (amount * .25) + (amount * .7));
    else if(amount > 12000)
        printf("Your Gross Amount is %lf", amount + (amount * .3) + (amount * .8));
    else
        printf("No gross Amount Valid: %lf\n", amount);
}
