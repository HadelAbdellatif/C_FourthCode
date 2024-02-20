#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   int i,j,m;

   for(i=0 ; i<10 ; i++)
   {

   for(j=0 ; j<10-i ; j++ )
   printf(" ");

   for(m=0 ; m<(2*i)+1 ; m++ )
    printf("%d",i);

    printf("\n");}

    return 0;
}
