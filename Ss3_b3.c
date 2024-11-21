#include <stdio.h>

int main(){
	float bankinh;
	float Pi=3.14;
	printf("nhap ban kinh hinh tron : ");
	scanf("%f", &bankinh);
	float chuvi = 2*Pi*bankinh;
	printf("chu vi hinh tron la : %.2f\n ", chuvi);
	float dientich = chuvi*chuvi/(4*Pi);
	printf("dien tich hinh tron la : %.2f\n", dientich);
	
    return 0;
}
