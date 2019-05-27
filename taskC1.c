// storing and displaying name, age and phone no.
#include<stdio.h>
int main(){
	char s[50] ; 
	int a ;
	char p[25] ;
	printf(" enter the name :") ; 
	scanf("%s", &s) ; 
	printf(" enter the age :") ; 
	scanf("%d", &a) ; 
	printf(" enter the phone no. :") ; 
	scanf("%s", &p) ;
	printf(" the name : %s \n the age : %d \n the phone no. : %s ", s,a,p) ;
	return 0 ; 
	    
	
}
