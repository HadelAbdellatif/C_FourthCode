#include <stdio.h>
#include <stdlib.h>
int prefect(int n){
    int i,Sum = 0 ;
 for(i = 1 ; i < n ; i++)
  {
   if(n % i == 0)
     Sum = Sum + i ;
  }

 if (Sum == n)
    return 1;
 else
   return 0;
}
int main()
{
    int n,p;
    printf("enter n: ");
    scanf("%d",&n);
    while(n!=-1)
        {
        p=prefect(n);
        if(p==1)
        {
            printf("%d is perfect\n",n);
        }
        else
        {
            printf("%d is not perfect\n",n);
        }
        printf("enter n: ");
        scanf("%d",&n);
        }
    return 0;
}
