#include<stdio.h>
int main(){
	int n;
	printf("Moi nhap so nguyen (kich thuoc ma tran vuong): ");
	scanf("%d",&n);
	int i,j;
	
	int arr[n][n];
	for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
		    printf("Moi nhap phan tu cho arr[%d][%d]: ",i,j);
    		scanf("%d",&arr[i][j]);
    	}
    }
    printf("Ma tran vuong vua nhap:\n");
    for (i= 0;i<n;i++) {
        for (j= 0;j<n;j++){
            printf("%5d", arr[i][j]); 
        }
        printf("\n");
    }
	return 0;
}
