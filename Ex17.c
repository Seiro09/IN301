#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int permut(int *a, int *b){
	int temp; 
	temp = *a;
	*a = *b;
	*b = temp;
	
}

void reinitPointeur(int* (*p)){
	*p = NULL;
}

int main(){
	
	char tab[10];
	// char (*p)[10] = &tab;
	
	// int a,b;
	
	/* printf("char : %d octets \n", sizeof(char));
	printf("int : %d octets \n", sizeof(int));
	printf("long int : %d octets \n", sizeof(long int));
	printf("long long int : %d octets \n", sizeof(long long int));
	printf("double : %d octets \n", sizeof(double));
	printf("char* : %d octets\n", sizeof(char*));
	printf("void* : %d octets \n",sizeof(void*));
	printf("int* : %d octets \n", sizeof(int*));
	printf("double* : %d octets \n", sizeof(double*));
	printf("int** : %d octets \n", sizeof(int**));
	printf("int[10] : %d octets \n", sizeof(int[10]));
	printf("char[7][3] : %d octets \n", sizeof(char[7][3]));
	printf("int[] : %d octets \n", sizeof(int[]));
	printf("tab : %d octets \n", sizeof(tab));
	printf("tab[0] : %d octets \n", sizeof(tab[0]));
	printf("&tab[0] : %d octets \n", sizeof(&tab[0]));
	printf("*&tab : %d octets \n", sizeof(*&tab));
	printf("*&tab[0] : %d octets \n", sizeof(*&tab[0]));
	printf("p : %d octets \n", sizeof(p));
	printf("*p : %d octets \n", sizeof(*p));
	printf("*p[2] : %d octets \n", sizeof(*p[2]));
	printf("&(*p)[2] : %d octets \n", sizeof(&(*p)[2])); */
	
	/* scanf("%d",&a);
	scanf("%d",&b);
	permut(&a,&b);
	printf("a=%d et b=%d \n",a,b); */
	
	int a = 1;
	int* p = &a;
	reinitPointeur(&p);
	printf("%p \n",p);
	
}
