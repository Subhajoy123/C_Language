// finding reverse of a given no.
#include<stdio.h>
int main(){
	int n,r,p ;
	int d;
	printf(" enter any no. ") ; 
	scanf("%d", &n) ; 
	p=n ; 
	
	while(n>0){
		d=n%10 ; 
		n=n/10 ;  
		r=r*10 +d ; 
	}
 	printf(" the reverse no. is %d ", r) ; 
	return 0 ; 
}
