#include<stdio.h>
int main(){
	int array[]={4,6,7,10,12};
	int count =0; 
	
	for(int i=0;i<5;i++){ 
		if(array[i]%2==0){
			count=0; 
			printf("Cac so chan cua array[%d] la %d\n",i,array[i]); 
			count++; 
		} 
		
		 
	}
	if(count == 0){
			printf("Mang khong co so chan"); 
		} 
	return 0; 
} 
