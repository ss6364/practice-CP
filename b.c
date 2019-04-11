#include <stdio.h>

int main(void) {
	int x=10 , y=25,z;
	z = y++ + x++  ;
	printf("%d",z);
	printf("%d",y);
	y = ++x + ++y  ;
	printf( " %d  %d  ",x,y) ;

	printf( " %d   ",sizeof(10.245f)) ;

	return 0;
}
