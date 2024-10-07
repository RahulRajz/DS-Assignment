//Write a program in C to read n number of values in an array and  display it in reverse order

#include<stdio.h> 
int main(){
	int n,i;
	
	printf("Enter the size of an Array: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d element in an Array\n",n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);	
	}
	
	printf("Original Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\nArray in Reverse Order: ");
	for(i=n-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
}
