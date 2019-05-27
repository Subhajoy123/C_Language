// displaying full name from first and last name 
#include<stdio.h>
#include<string.h>
int main(){
	 
	char s[50] ;
	char p[25] ; 
	int i,j ;
	printf(" enter the first name :") ; 
	gets(s) ;   
	printf(" enter the second name :") ;
	gets(p) ;
	for(i = 0; s[i]!= '\0'; i++);

    for(j = 0; p[j]!= '\0'; j++)
    {
        s[i] = p[j];
        i++ ; 
    }
	s[i]='\0';
	printf(" the full name :") ;
	puts(s) ; 
	
	

	return 0 ; 
	    
	
}
