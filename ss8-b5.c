#include<stdio.h>
int main(){
	int i,j;
	int sum=0; 
	int arr[2][2]={{1,2}, 
	             {2,3}};
	for (i=0; i<2;i++){
		for(j=0;j<2;j++){
			sum=sum + arr[i][j]; 
		} 
	} 
		printf("Tong cac phan tu co trong mang la %d  ",sum);		 
	return 0; 
}
