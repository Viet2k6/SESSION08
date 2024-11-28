#include<stdio.h>
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	int max;
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		if (max<arr[i][j]){
    			max = arr[i][j];
			}
    	}
    }	
	printf("Phan tu lon nhat trong mang la %d ",max);
    return 0;
}
