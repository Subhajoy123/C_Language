// finding largest and smallest element in an array
#include<stdio.h>
int main(){
	int a[20];
	int n,i,min=999999,max=-1;
	printf(" enter the size ");
	scanf("%d", &n);
	printf("\n enter the elements\n ");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	for(i=0;i<n;i++){
		if(a[i]>max)
			max=a[i]; 
		}
	for(i=0;i<n;i++){
		if(a[i]<min)
			min=a[i]; 
		}
	printf("%d is the maximum element and %d is the minimum element ", max,min);
	
return 0 ; 
}
