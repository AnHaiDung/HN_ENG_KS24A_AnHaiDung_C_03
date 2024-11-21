#include <stdio.h>
 int main(){
 	int number, st1, st2, st3, st4;
 	printf("nhap so nguyen co bon chu so : ");
 	scanf("%d", &number);
 	st1 = number/1000;
 	st2 = number%1000/100;
 	st3 = number%100/10;
 	st4 = number%10;
 	printf("so dao nguoc la : %d%d%d%d", st4,st3,st2,st1);
 	
 	return 0;
 }
