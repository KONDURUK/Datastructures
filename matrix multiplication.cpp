#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,k;
	int a[10][10],b[10][10],multi[10][10];
	int r,c;
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	printf("Enter the number of colums: ");
	scanf("%d",&c);
	printf("Enter the first matrix : ");
	for(i=0;i<r;i++){
		for(j=0;i<c;j++){
		scanf("%d",&a[i][j]);	
		}
		}
		printf("Enter the second matrix : ");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				scanf("%d",&b[i][j]);
			}
		}
		printf("Multiplication of the matrix is : ");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++)
			{
				multi[i][j]=0;
				for(k=0;k<c;k++)
			{
				multi[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Multiplication of the matrix is %d/t : ",multi[i][j]);
		}
	}
			
		return 0;
}
