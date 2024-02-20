#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char h;
    char count=0;

    for(h='a' ; h<='z' ; h++)

      {
          if(count%4==0)
           printf("\n");
          count++;

          printf("     %c",h);

      }

    return 0;
}
