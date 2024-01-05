#include <stdio.h>

int main() {
	
	
	// Tek yorum satýrý. Tek satýrlý yorumlar için Compiler (Derleyici) yorumlar arasýna yazdýðýnýz seyleri görmezden gelir.
	
	
	 /*
	 
	      Çoklu yorum satýrý.
	      Buranýn arasýný dilediðiniz gibi yorumlarla doldurabiliriz.
	      
	      
	      
	 */
	      
	     
	/*
		  Temel Deðiþkenlerimiz char,int,float.double,short,long
		  
		  char veri tipi -1 byte (8 bit) 0 dan 255 (2^8) e kadar deðer alabilir. Her bir deðer ASCII Tablosundaki bir deðere eþdeðerdir.
		  
		  int veri tipi -4 Byte (32 bit)  -2^16 dan 2^16 ya kadar deðer alýr. 2,32,45 gibi deðerler int deðerleridir.
		  (tamsayý)
		  
		  short veri tipi ( short int ) -2 byte (16 bit)  -2^8 den 2^8 e kadar deðer alýr. ,nt ile aynýdýr sadece alacaðý deðer aralýðý farklýdýr. Yine 2,32,132 gibi sayýlarý shortla ifade edebiliriz.
		  
		  long veri tipi (long int) -8 byte (64 bit) -2^32 den 2^32 ye kadar deðer alýr. int ile aynýdýr sadece alacaðý deðer aralýðý farklýdýr. Çok büyük sayýlar için kullanýlabilir. 12431415113124,123145412124 gibi sayýlar için kullanýlabilir.
		  
		  float veri tipi kesirli sayýlarý tutmak için kullanýlýr. Byte'ý iþletim sistemine göre deðiþebilir. 2.12 , 3.4 gibi deðerler için kullanýlabilir.
		  
		  double veri tipi ayný float gibi kesirli sayýlar için kullanýlýr. Ancak floattan daha kapsamlýdýr. Byte'ý iþletim sistemine göre deðiþebilir.2.12312314214 , 4.124213142313 gibi deðerler için idealdir.
		  
	*/
	
	/*
	Deðiþken tanýmlama
	Veritipi degiskenadi;
	*/
	
	/* 
	Format belirliyiciler:
	%d -----> int deðerler için pritf de format belirleyici olarak kullanýlýr.
	Örnek:
	int x =5 ;
	printf("%d",x); -----> ekrana 5 deðerini basar.
	
	%f -----> float ve double için format belirleyici olarak kullanýlýr.
	float f=3.1 ;
	double d=4.21 ;
	printf("%f %f",f,d); -------> ekrana 3.1  4.21 þeklinde çýktý basar. Deðiþkenleri verme sýrasýyla.
	%c --------> karakterler için kullanýlýr.
	char c1 = 'c' ;
	printf("%c",c1) --------> ekrana c basar
	printf("%d",c1) --------> ekrana ASCII tablosundaki c'nin deðerini basar.
	
	%s -----------> karakter dizileri için kullanýlýr. ("Cprogramlama")
	printf("%s","Cprogramlama") -------> ekrana Cprogramlama yazar
	*/
	
	
	    return 0;	    
	
}
