#include <stdio.h>
#define N 8


int main () {
 
 int sayac;
 float toplam,n,ort;
 toplam=0;
 sayac=0;
 printf("Float degerlerini giriniz:");
 
 while(sayac<8) {
 	
 	scanf("%f", &n);
 	toplam=toplam+n;
 	sayac=sayac+1;
 	
 }
 
 ort=toplam/8;
 printf("ortalama %f",ort);
 
 return 0;
 
 }
