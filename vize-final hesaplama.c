#include <stdio.h>

int main () {
	
	int vize1,arasinav,final;
	float dersort;
	
	printf("1. Vize notunuzu giriniz:");
	scanf("%d",&vize1);
	printf("Ara sinav notunuzu giriniz:");
	scanf("%d",&arasinav);
	printf("Final notunuzu giriniz:");
	scanf("%d",&final);
	
	dersort = ((vize1*40/100)+(arasinav*10/100)+(final*50/100));
	
	if (dersort > 60) {
	printf("%.2f\n",dersort);
	printf("Dersten Gectiniz.");

	}
	
	else if (dersort >50 ) {
		printf("%.2f\n",dersort);                      	
		printf("Dersten Bute Kaldiniz.");
	}
	else {
		printf("%.2f\n",dersort);
		printf("Dersten Kaldiniz.");
	}
	

	
	
	
	
	return 0;
}
