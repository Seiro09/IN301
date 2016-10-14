#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int n,nmax,c,d,i,j;
	c=0;d=0;n=1;
	
	scanf("%d",&nmax);
	
	while (n<nmax){
		c=0;
		d=0;
	for (i=1;i<n;i++)
	{
		if (n%i==0) c=c+i;
	}
	
	for (j=1;j<c;j++)
	{
		if (c%j==0) d=d+j;
	}
	
	if ((d==n)&&(n<=c)) printf("%d et %d sont amis \n",n,c);
	n++;
}
}
