#include<stdio.h>
int main(){
	int array[5]={5,6,10,13,25};
	int max = array[0];
	int min = array[0];
	for(int i =0;i<5;i++){
		if(max<array[i]){
			max = array[i]; 
		}if(min>array[i] ) {
			min=array[i]; 
		}
			
		}
		printf("So lon nhat trong day so la %d\n",max);
		printf("So be nhat trong day so la %d\n",min); 
		return 0; 
	} 
 

