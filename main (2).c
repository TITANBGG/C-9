#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,sayi;
	int toplam =0;  
	do
	{
		printf("Sayiyi giriniz: ");
		scanf("%d",&sayi);
		toplam += sayi; 
		if(sayi==0) break; 
	}while(1);
	
	printf("Toplam: %d",toplam);
	
	return 0;
}
