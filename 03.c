//Write a C Program to Delete an Element from an Array.
#include<stdio.h>
int main(){
	int n,i, position;
	
	printf("Enter the size of Array: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d element in the Array:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Original Array: ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	
	printf("\nEnter the position of the element to be delete(1 to %d): ",n);
	scanf("%d",&position);
	
	if(position<1 || position>n+1){
		printf("Invalid Position! Please enter Position between (1 to %d)\n");
	}
	else{
		for(i= position-1; i<n-1; i++){
			arr[i]=arr[i+1];
		}
	}
	n--;
	
	printf("Array after Deletion: ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	
	
}
