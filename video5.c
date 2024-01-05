#include <stdio.h>

int main() {
	
	int x =5;
	int y=7;
	int z=2;
	
	x=y;
	y=x+z+1;
	printf("x:%d y:%d z:%d\n", x,y,z);
	

	
	
	
	x=4;
	y=5;
	z=6;
	printf("x:%d y:%d z:%d\n", --x,++y,z++);
	printf("x:%d y:%d z:%d\n", ++x,--y,z);
	printf("x:%d y:%d z:%d\n", x,y--,z);
	
	x  += z+1;
	printf("x:%d\n",x);

	
	x= y =z+4;
	printf("x:%d y:%d z:%d \n" ,x,y,z) ;
	
	
 return 0;
	
}
