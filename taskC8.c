// displaying multiplication table of a no.
#include<stdio.h>
int main(){
	int n,i=1 ;
	printf(" enter any no. ") ; 
	scanf("%d", &n) ; 
	
	while(i<=10){
		printf(" %d * %d = %d \n", n,i,n*i);
		i++ ; 
		 
	}
 	 
	return 0 ; 
}
