#include<stdio.h>
int main(){
	int arr[2][3] = {{1,2,3},{4,5,6}};
	for(int i = 1; i>=0; i--){
		for(int j = 2; j >=0; j--){
			printf("%d\n", arr[i][j]);
		}
	}
	return 0;
}