#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int a;
	scanf("%d",&a);
	if ((a%2==0)||(a%3==0)||(a%5==0)||(a%7==0))
	printf("%d n'est pas un nombre premier",a);
	else printf("%d est un nombre premier",a);	
}
