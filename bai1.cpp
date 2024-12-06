#include<stdio.h>
int main(){
	int number[] = {1,2,4,8,10,11};
	for(int i=0;i<sizeof(number)/sizeof(int);i++){
		
		printf("gia tri cua cac phan tu la %d\n",number[i] ); 
	} 
	 
} 
