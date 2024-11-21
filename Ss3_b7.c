#include <stdio.h>
 int main(){
 	int number, total;
 	printf("nhap so nguyen co bon chu so : ");
 	scanf("%d", &number);
 	total = number/1000 + number%1000/100 + number%100/10 + number%10;
 	printf("tong : %d", total);
 	
 	return 0;
 }
