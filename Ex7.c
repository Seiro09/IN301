#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	float i=1;
	float a= 1/((i+1)*(i+1))+1/(i*i);
	float b=1/(i*i);
	float e=0.0001;
	while ((a-b)>e)
	{
		i++;
		b=b+1.0/(i*i);
		a=a+1.0/((i+1.0)*(i+1.0));	
	}
	printf("%f\n",b);
	printf("%f",i);
}


