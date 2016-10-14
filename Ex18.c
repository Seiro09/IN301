#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Tableau {
	int taille;
	int tab[100];
};
	
typedef struct Tableau TAB;

int alea(int n) { return rand()%n; }

TAB init(){
	int i;
	TAB T;
	T.taille=10;
	for (i=0;i<T.taille;i++)
	{
		T.tab[i]=alea(2*T.taille);
		
	}
	
	return T;
}

int affiche(TAB T)
{
	int i;
	for(i=0;i<T.taille;i++)
	{
		printf("Case %d du tableau : %d \n", i,T.tab[i]);
	}
}

int main(){
	
	int m,n;
	TAB T;
	scanf("%d",&n);
	T=init();
	m=affiche(T);
}
