//Write a C Program to Print Even and Odd Numbers in an Array
#include<stdio.h>
int main(){
	int n,i;
	
	printf("Enter the size of Array: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d element in an Array: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Even number in the Array: ");
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		}
	}
	
	printf("\nOdd number in the Array: ");
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			printf("%d ",arr[i]);
		}
	}
	
}
