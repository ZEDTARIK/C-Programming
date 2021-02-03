#include <stdio.h>
#include <stdlib.h>
/* if using Bool */
#include <stdbool.h>

int main()
{
    /* Declaration Variables */
    const float PI= 3.14;
    const Nb_Mois = 12;
    float a,b;
    a= 5.2;
    b=a;
    int x = 10 ;
    int y = 5 ;
    int S = x + y ;
    bool valid = true; /* true */
    bool status = 0;  /* false */

    printf("Hello world!\n");
    printf("PI = %.2f \n", PI); // %.2f get only 2 numbers after point Exemple PI = 3.14

    printf("Value of  A = %.2f \n", a);
    printf("Value of  B = %.2f \n", b);


    printf(" \n Somme of %d + %d =  %d", x,y,S);

    printf("\n Valid", valid);
    printf("\n status", status);


    printf(" \n ######################################################################## \n ");
        int x1 = 50;
        int mod = x1 % 3;
    printf("modules   = %d" , mod );
    printf(" \n ######################################################################## \n ");
        int nubmer1;
        int nubmer2;

        printf("Entrez la premier valeur  = ");
        scanf("%d",&nubmer1); // scanf ( %opertaor%, & + variable )
        printf("Entrez la deuxieme valeur  = ");
        scanf("%d",&nubmer2);
        int Somme = nubmer1 + nubmer2;
        printf("La Somme est  = %d", Somme );

    printf(" \n ######################################################################## \n ");


    printf(" \n ######################################################################## \n ");

    int Nb_Produit;
    float PrixVente;
    float Chifre;
    printf("Entrez le nombre de priduit = ");
    scanf("%d", &Nb_Produit);
    printf("Entrez le prix de vente pour une seul produit = ");
    scanf("%f", &PrixVente);
    Chifre = Nb_Produit * PrixVente ;
    printf("le chifre d\'afaire est = %.2f", Chifre );

    printf(" \n ######################################################################## \n ");

    return 0;
}
