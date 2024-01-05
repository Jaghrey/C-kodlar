#include <stdio.h>


int main() {  
int A,B,C;
printf("3 sayi giriniz");
scanf("%d" ,&A );
scanf("%d" ,&B);
scanf("%d" ,&C);
if(A>B && A>C){
	printf("en buyuk sayi %d", A);
}
else if(B>A && B>C){
	printf("en buyuk sayi %d",B);
}
else if(C>A && C>B){
	printf("en buyuk sayi %d",C);
}

return 0;
}
