#include<stdio.h>
int main (){
	int m,n;
	printf("Moi nhap so hang va cot: ");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for(int i = 0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap phan tu trong hang %d va cot %d:",i+1,j+1);
			scanf("%d",&arr[i][j]);			 
	} 
}
	for(int i =0;i<n;i++){
		printf("bien tren cung %d");#include <stdio.h>

int main() {
    int n;
    printf("Moi ban nhap kich thuoc cua ma tran vuong (n): ");
    scanf("%d", &n);

    int arr[n][n];

    // Nh?p giá tr? cho ma tr?n vuông
    printf("Nhap cac gia tri cho ma tran vuong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // In giá tr? c?a ma tr?n vuông
    printf("Ma tran vuong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 
	}
	return 0;
}
