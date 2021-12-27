//Program ce izracunat oplosje valjka.

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14
//Funkcija za izracunavanje oplosja valjka
int oplosje(int radijus, int visina)
{
	float oplosje;
	oplosje=(float)2*PI*radijus*(radijus+visina);
    return oplosje;
}
  

int main()
{
    int radijus;
    int visina;
    printf("Unesi radijus i visinu\n");
    scanf("%d %d",&radijus,&visina);
    // Poziv funkcije.
    float O= oplosje(radijus, visina);
    printf("Oplosje valjka je: %.2f",O);
    return 0;
}
