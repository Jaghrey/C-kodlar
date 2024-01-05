#include <stdio.h>

int main () 
{
	
int A[10],n,i;
for(i=0; i<10; i++){
	printf("Dizinin elemanlarini giriniz:\n");
	scanf("%d",&n);
	if ( n!= -1) {
		A[i]  = n*n;
		printf("%d\n",A[i]);
	}
	else{
		break;
	}
	
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
