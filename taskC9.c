// finding factorial of a no.
#include<stdio.h>
int main(){
	int n,s=1,i ;
	printf(" enter any no. ") ; 
	scanf("%d", &n) ; 
	
	while(i<=n){
		s=s*i;
		i++;
		 
	}
 	printf(" the factorial of %d is %d ",n,s) ; 
	return 0 ; 
}
