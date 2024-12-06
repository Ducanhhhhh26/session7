#include<stdio.h>
int main(){
	int array[5]={3,7,3,12,13} ;
	int i;
	for(i=0;i<5;i++){
		if(array[i]%2==0){
		
		printf("%d\n",array[i]+3); 
		}if(array[i]%2!=0){
		
		 
		printf("%d\n",array[i]+2); 
	}
}

	return 0; 
} 
