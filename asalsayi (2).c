#include <stdio.h>
#include <stdlib.h>

int main() {
	int sayi,i;
	do
	{
		printf("Sayiyi giriniz: ");
		scanf("%d",&sayi);
		if(sayi<0) {printf("Negatif giremezsiniz!");
			continue;	}
		if(sayi==1) { printf("Degildir."); continue;	}
		if(sayi==0) break;
		
		for(i=2;i<sayi;i++)
		{
			if(sayi%i==0) {
			printf("Degildir!");
			break; 
			}
		}
		if(sayi==i) printf("Bu sayi asaldir!");
		
	}while(sayi!=0);

	return 0;
}
