#include <stdio.h>

int main () {

int vize1,vize2,final;
float okulortalama;
float dersort;

printf("1. Vize notunu giriniz:");
scanf("%d",&vize1);
printf("2. Vize notunu giriniz:");
scanf("%d",&vize2);
printf("Final notunu giriniz:");
scanf("%d",&final);
printf("Universite ortalamanizi giriniz:");
scanf("%d",&okulortalama);	

dersort = (vize1*3/10.00 + vize2*3/10.00 + final*4/10.00);

      if(dersort >=90) {
	       printf("Harf Notunuz - AA ve Ders Ortalamaniz : %f",dersort);
	    }
     	else if(dersort >= 85 && dersort < 90){
			printf("Harf Notunuz - BA ve Ders Ortalamaniz : %f",dersort);
        }
        else if(dersort >= 80 && dersort < 85){
			printf("Harf Notunuz - BB ve Ders Ortalamaniz : %f",dersort);
		}
		else if(dersort >= 75 && dersort < 80){
			printf("Harf Notunuz - CB ve Ders Ortalamaniz : %f",dersort);
		}
		else if(dersort >= 70 && dersort < 75){
			printf("Harf Notunuz - CC ve Ders Ortalamaniz : %f\n",dersort);
			if(okulortalama < 2.5){
					printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk:(");
			}
			}
			
				
		else if(dersort >= 65 && dersort < 70){
			printf("Harf Notunuz - DB ve Ders Ortalamaniz : %f\n",dersort);
			if(okulortalama < 2.5){
			
				printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk:(");
			}
		}
		else if(dersort >= 60 && dersort < 65){
			printf("Harf Notunuz - DD ve Ders Ortalamaniz : %f\n",dersort);
			if(okulortalama < 2.5){
				printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk:(");
		}
}
else {
	printf("Harf Notunuz - FF ve Ders Ortalamaniz : %f\n",dersort);
	printf("Dersten Kaldiniz.");
}

	
	
	
	
	
	
	return 0;
}
