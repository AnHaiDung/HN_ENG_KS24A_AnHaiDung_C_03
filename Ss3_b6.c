#include <stdio.h>

int main(){
	int canh, chieucao, dientich;
	printf("nhap do dai canh : ");
	scanf("%d", &canh);
	printf("nhap chieu cao : ");
	scanf("%d", &chieucao);
	dientich = (canh*chieucao)/2;
	printf("dien tich hinh tam giac la : %d", dientich);
	
	return 0;
}
