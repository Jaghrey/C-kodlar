#include <stdio.h>
int main(){
	
	int sayac,son;
	sayac=1000;
	son=2000;
	while(sayac<=son){
		if(sayac %2 ==0){
			printf("%d\n", sayac);
		}
		sayac=sayac+1;
	}
	return 0;
}
