// printing a pyramid pattern
#include<stdio.h>
int main(){
	int i,j,k=1,n;
	printf( " enter the no. of rows " ); 
	scanf("%d",&n) ;
	
	for(i=5 ; i>0 ; i--){
	  for(j=0 ; j<i ; j++){
	  	printf( "%d",k ); 
	  	k++;
		}
	printf( "\n");
	k=1;
	}
	
	return 0 ; 
}
