// checking for armstrong no. 
#include<stdio.h>
#include<math.h>

int main(){
	int n,d,s=0,m,i;
	int p=0 ;
	printf(" enter ant no. ");
	scanf("%d",&n);
	m=n;
	d=n ; 
	while(d>0){
		
		d=d/10;
		++p ;  
	}
	while(n>0){
		d=n%10;
		n=n/10;
		s=s+pow(d,p) ; 
	} 
	if(m==s)
	printf( "\n armstrong no.") ; 
	else
	printf("\n not armstrong no.") ; 
	return 0 ; 
}
