#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int p,q;
    float m,n;
    
    scanf("%d %d",&p,&q);
    scanf("%f %f",&m,&n);
    printf("%d %d\n",p+q,p-q);
    printf("%.1f %.1f",m+n,m-n);
    
    return 0;
}
