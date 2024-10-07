//Write a C Program to Find the Largest Element in an Array
#include<stdio.h>
int main(){
	int n,i;
	
	printf("Enter the size of an Array: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d element in an Array:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int largest = arr[0];
	
	for(i=0;i<n;i++){
		if(arr[i]>largest){
			largest = arr[i];
		}
	}
//	printf("Largest Element in the Array is: ");
		printf("Largest Element in the Array is: %d",largest);
}
