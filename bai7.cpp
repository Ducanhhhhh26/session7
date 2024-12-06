#include<stdio.h>
int main (){
	int i;
	int n; 
	printf("Moi ban nhap so phan tu cua mang:");
	scanf("%d",&n); 
	int array[n];
	
	for(i=0;i<n;i++){
	
			printf("Moi ban nhap gia tri array[%d] :",i);
			scanf("%d",&array[i]);
	while(array[i]%2==0){
	printf("Ban da nhap so chan, Moi ban nhap gia tri le  cho array mang[%d] :",i);
	scanf("%d",&array[i]);
	 		 	}
			}
		printf("\n Mang da nhap la:\n");	
		for(i=0;i<n;i++){	
		printf("%d\n",array[i]);}	
	 		return 0;
		}
