#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    int i,j,k;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char *ch[]={"null","one","two","three","four","five",
    "six","seven","eight","nine"};
    scanf("%d%d",&a,&b);
    
    for(i=a;i<=b;i++)
    {
        if(i>9 && i%2)
            printf("odd\n");
        else if(i>9 && i%2==0)
            printf("even\n");
        else
            printf("%s\n",ch[i]);

    }

    return 0;
}

