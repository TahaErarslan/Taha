#include <stdio.h>


int main() {
	
	
	int x;
	int y;
	int a;
	int b;
	int c;
	int d;
	
	printf(" ENTER THE FIRST NUMBER : ");
	scanf("%d" ,&x);
	printf(" ENTER THE SECOND NUMBER : ");
	scanf("%d", &y);
	
	a=x+y;
	b=x-y;
	c=x*y;
	d=x/y;
	
	printf("\n ADDITION OPERATION : %d\n ",a);
	printf("SUBTRACTION OPERATION : %d\n ",b);
	printf("MULTIPLICATION OPERATION : %d\n ",c);
	printf("DIVISION OPERATION : %d ",d);
	
	
	
	
	return(0);
}
