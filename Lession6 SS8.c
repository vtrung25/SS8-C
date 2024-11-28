#include<stdio.h>
int main(){
	int a = 3;
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int total;
	printf("Cac phan tu tren duong cheo chinh la \n");
	for(int i = 0; i<a; i++){
		printf("%d\n", arr[i][i]);
	}
	for(int i = 0; i<a; i++){
		total+=arr[i][i];
		
	}
	printf("Tong cac phan tu tren duong cheo chinh la %d", total);
	return 0;
}