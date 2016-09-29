#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//fonction factorielle


int main(){
	
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a/3600;
	c=a%3600;
	d=c/60;
	e=c%60;
	printf("%d secondes correspond à %d heure(s), %d minute(s) et %d secondes",a,b,d,e);
	
}

