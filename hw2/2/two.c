#include <stdio.h>

int main(){
	int x, y, z; //x and y are mins, z is hours
#define MINS 60
	printf("number of minutes: \n");
	scanf("%d", &x);
	z = x/MINS;
	y= x%MINS;
	printf("%d", z);
	printf(" hours and %d", y);
	printf(" mins\n");
}

