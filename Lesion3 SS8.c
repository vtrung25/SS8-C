#include<stdio.h>

int main(){

	int a;
	printf("Moi nhap 1 so nguyen ");
	scanf("%d",&a);


	int arr[a][a];
	printf("Nhap cac phan tu phan cua mang co %d hang va %d cot\n",a,a);
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			printf("Nhap phan tu arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			printf(" %d",arr[i][j]);
		}
	printf("\n");	
	}
return 0;	
}
