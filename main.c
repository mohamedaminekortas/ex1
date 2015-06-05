#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  tab[20];
   int i,n;

   printf("tapper n= ");
   scanf("%i",&n);

    printf("Remplissage du TAB");

    for(i=0;i<n;i++)
{
    printf("\n T[%i]= ",i);
    scanf("%i",&tab[i]);
}

printf(" Affichage");

for(i=0;i<n;i++)
{
     printf("\n T[%i]= %i",i,tab[i]);
}


    return 0;
}
