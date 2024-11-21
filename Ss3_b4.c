#include <stdio.h>

int main(){
	float toan, van, anh, tongdiem, diemtb;
	printf("nhap diem toan : ");
	scanf("%f", &toan);
	printf("nhap diem van : ");
	scanf("%f", &van);
	printf("nhap diem anh : ");
	scanf("%f", &anh);
	tongdiem = toan + van + anh;
	diemtb = tongdiem/3;
	printf("tong diem la : %.2f/n", tongdiem);
	printf("diem trung binh la : %.2f/n", diemtb);
	
	return 0;
}
