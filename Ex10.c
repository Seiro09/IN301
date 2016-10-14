#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	float n;
	scanf("%f",&n);
	
	float e=0.0000001;
	float i=0;
	float j;
	
	j=n;
	while ((j-i)>e)
	{
		if (((i+j)/2.0)*((i+j)/2.0)>=n) 
			j=(j+i)/2.0;
		else 
			i=(j+i)/2.0;
}
	printf("La racine carrée de %f est %f",n,j);
	
}


