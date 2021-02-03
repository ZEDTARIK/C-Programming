#include <stdio.h>
#include <stdlib.h>
// if using Bool
#include <stdbool.h>

int main()
{
    // Declaration Variable
    const float PI= 3.14;
    const Nb_Mois = 12;
    float a,b;
    a= 5.2;
    b=a;
    int x = 10 ;
    int y = 5 ;
    int S = x + y ;
    bool valid = true; // true
    bool status = 0; // false

    printf("Hello world!\n");
    printf("PI = %f \n", PI);

    printf("Value of  A = %f \n", a);
    printf("Value of  B = %f \n", b);


    printf(" \n Somme of %d + %d =  %d", x,y,S);

    printf("\n Valid", valid);
    printf("\n status", status);

    return 0;
}
