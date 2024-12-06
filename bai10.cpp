#include<stdio.h>
int main(){
	int n;
	int i;
	int x; 
	int count= 0; 
	printf("Moi ban nhap so phan tu cho mang:");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++){
		printf("moi ban nhap gia tri cho array[%d]:",i);
		scanf("%d",&array[i]); 
}
for(x=0;x<n;x++){ 
count=0;
	for(i=1;i<=array[x];i++){
		 
		if(array[x]%i==0){
			count++; 
		}
	} 
	if(count==2){
			printf("Gia tri cua phan tu Nguyen to array[%d] la %d\n",x,array[x]); 
		} 
}

	
	return 0;
} 
