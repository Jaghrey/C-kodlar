#include <stdio.h>
int main (){

int islem;
int bakiye = 1000;
int tutar;

printf("Islemler:\n1:Para cekme\n2:Para yatirma\n3:Havale yapma\n4:Bakiye sorgulama\n5:Kart iade\n\n\n");

printf("Islemi seciniz:");

scanf("%d",&islem);

switch(islem) {
	case 1:
		printf("Bakiyeniz: %d\n",bakiye);
		printf("Cekilecek Tutar:");
		scanf("%d",&tutar);
		if (tutar > bakiye) {
			printf("Bakiye Yetersiz\n");
		}
		bakiye -= tutar;
		printf("Bakiyeniz: %d",bakiye);
		
		break;
		
	case 2:
		printf("Bakiyeniz: %d\n",bakiye);
		printf("Yatirilacak Tutar:");
		scanf("%d",&tutar);
		
		bakiye += tutar;
		printf("Bakiyeniz: %d",bakiye);
		
		break;
		
	case 3:
			printf("Bakiyeniz: %d\n",bakiye);
		printf("Havale Yapilacak Tutar:");
		scanf("%d",&tutar);
		if (tutar > bakiye) {
			printf("Bakiye Yetersiz\n");
		}
		bakiye -= tutar;
		printf("Bakiyeniz: %d", bakiye);
		
		break;
		
		
	case 4:
		printf("Bakiyeniz %d",bakiye);
		break;
	
		
	case 5:
		printf("Kart Iade Edildi. \n");
		break;
	
		
		default:
			printf("Bilinmeyen Islem");
			break;
						
}
	
	
	
	
	
	return 0;
}
