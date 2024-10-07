//Write a C Program to insert an element into an array.

#include<stdio.h>
int main(){
	int n,i;
	int position,element;
	
	printf("Enter the size of an Array: ");
	scanf("%d",&n);
	
	int arr[n+1];
	
	printf("Enter %d Elements in an Array\n ",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
//	Display Original Array
	printf("Original Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
//	Input the position where the element to be inserted
	printf("\nEnter the position where the element to be inserted: ");
	scanf("%d",&position);
	
	if(position<1 || position>n+1){
		printf("Invalid Position! Please enter a valid Position.....");
	}
	
//	Enter element to be inserted
	printf("Enter element to be inserted: ");
	scanf("%d",&element);
	
//		Element shift to the right position
	for(i=n;i>=position;i--){
		arr[i]=arr[i-1];
	}
	arr[position-1]=element;
//  print Updated Array
	printf("After insertion: ");
	for(i=0;i<=n;i++){
		printf("%d ", arr[i]);
	}
}
