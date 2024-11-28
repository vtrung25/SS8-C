#include<stdio.h>
int main(){
	int arr[] = {1,2,3,4,5,6};
	int a;
	printf("Yeu cau nhap 1 phan tu trong mang ");
	scanf("%d", &a);
		for(int i = 0; i<6;i++){
			if(a == arr[i]){
				printf("Vi tri phan tu trong mang la %d  ", i);
				break;
			}else{
				printf("Khong ton tai ");
				break;
			}
		}
	
	return 0;
	
}