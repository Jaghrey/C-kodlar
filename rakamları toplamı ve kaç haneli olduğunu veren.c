#include <stdio.h>

int main () {

int n;
int hane =0;
int toplam=0;

printf("Sayiyi giriniz:");

scanf("%d",&n);


do {
	toplam +=(n%10);
	
	hane++;
	
	n = n/10;
	
}
	
	while(n>0);
	
	printf("Rakamlari toplami %d - %d Haneli",toplam,hane);
	
	
	
	
	
	
	
	
	return 0;
}
