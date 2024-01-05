#include <stdio.h>

int main() {
	
	
	// Tek yorum sat�r�. Tek sat�rl� yorumlar i�in Compiler (Derleyici) yorumlar aras�na yazd���n�z seyleri g�rmezden gelir.
	
	
	 /*
	 
	      �oklu yorum sat�r�.
	      Buran�n aras�n� diledi�iniz gibi yorumlarla doldurabiliriz.
	      
	      
	      
	 */
	      
	     
	/*
		  Temel De�i�kenlerimiz char,int,float.double,short,long
		  
		  char veri tipi -1 byte (8 bit) 0 dan 255 (2^8) e kadar de�er alabilir. Her bir de�er ASCII Tablosundaki bir de�ere e�de�erdir.
		  
		  int veri tipi -4 Byte (32 bit)  -2^16 dan 2^16 ya kadar de�er al�r. 2,32,45 gibi de�erler int de�erleridir.
		  (tamsay�)
		  
		  short veri tipi ( short int ) -2 byte (16 bit)  -2^8 den 2^8 e kadar de�er al�r. ,nt ile ayn�d�r sadece alaca�� de�er aral��� farkl�d�r. Yine 2,32,132 gibi say�lar� shortla ifade edebiliriz.
		  
		  long veri tipi (long int) -8 byte (64 bit) -2^32 den 2^32 ye kadar de�er al�r. int ile ayn�d�r sadece alaca�� de�er aral��� farkl�d�r. �ok b�y�k say�lar i�in kullan�labilir. 12431415113124,123145412124 gibi say�lar i�in kullan�labilir.
		  
		  float veri tipi kesirli say�lar� tutmak i�in kullan�l�r. Byte'� i�letim sistemine g�re de�i�ebilir. 2.12 , 3.4 gibi de�erler i�in kullan�labilir.
		  
		  double veri tipi ayn� float gibi kesirli say�lar i�in kullan�l�r. Ancak floattan daha kapsaml�d�r. Byte'� i�letim sistemine g�re de�i�ebilir.2.12312314214 , 4.124213142313 gibi de�erler i�in idealdir.
		  
	*/
	
	/*
	De�i�ken tan�mlama
	Veritipi degiskenadi;
	*/
	
	/* 
	Format belirliyiciler:
	%d -----> int de�erler i�in pritf de format belirleyici olarak kullan�l�r.
	�rnek:
	int x =5 ;
	printf("%d",x); -----> ekrana 5 de�erini basar.
	
	%f -----> float ve double i�in format belirleyici olarak kullan�l�r.
	float f=3.1 ;
	double d=4.21 ;
	printf("%f %f",f,d); -------> ekrana 3.1  4.21 �eklinde ��kt� basar. De�i�kenleri verme s�ras�yla.
	%c --------> karakterler i�in kullan�l�r.
	char c1 = 'c' ;
	printf("%c",c1) --------> ekrana c basar
	printf("%d",c1) --------> ekrana ASCII tablosundaki c'nin de�erini basar.
	
	%s -----------> karakter dizileri i�in kullan�l�r. ("Cprogramlama")
	printf("%s","Cprogramlama") -------> ekrana Cprogramlama yazar
	*/
	
	
	    return 0;	    
	
}
