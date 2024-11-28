#include<stdio.h>
int main(){
	int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	int m = 3, n = 3;
	int total;
	
	
	for( int i = 0; i<m; i++){
	    total+=arr[i][0];
		total+=arr[i][n - 1];
	}
	for( int j = 0; j<n; j++){
		if(j!=0&&j!=n - 1){
		
		total+=arr[0][j];
		total+=arr[m-1][j];
	}
	}

	printf("%d", total);

	return 0;
	
}

