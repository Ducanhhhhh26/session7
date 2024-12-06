#include<stdio.h>
int main (){
	int i;
	int n; 
	printf("Moi ban nhap so phan tu cua mang:");
	scanf("%d",&n); 
	int array[n];
	for(i=0;i<n;i++){
			printf("Moi ban nhap gia tri cho array[%d]:",i);
			scanf("%d",&array[i]);
	 		 	} 
	for(i=0;i<n;i++){
		printf("gia tri cua array[%d] la %d\n",i,array[i]); 
	} 
	return 0; 
} 
