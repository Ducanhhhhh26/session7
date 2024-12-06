#include<stdio.h>
int main(){
	int array[4];
	int i;
	for(i=0;i<sizeof(array)/sizeof(int);i++){
		printf("MOi ban nhap gia tri thu %d: ",i+1);
		scanf("%d",&array[i]);}
		printf("Mang da nhap la:\n"); 
	for(i=0;i<sizeof(array)/sizeof(int);i++){
		printf("Gia tri array[%d] la %d\n",i,array[i]); 
	}
	return 0; 
}
