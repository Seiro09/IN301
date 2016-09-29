
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
c=0;
while (a>0)
	{
if (a%2==0) 
		{
			printf("=%d*%d+%d\n",a,b,c);
			a=a/2;
			b=2*b;
		}
else 
		{
			printf("=%d*%d+%d\n",a,b,c);
			a=a-1;
			c=c+b;
		}
	}
printf("=%d",a*b+c);	
}
