// checking for pallindrome string
#include<stdio.h>
int main(){
	char s[50] ; 
	char p[50] ; 
	printf( " enter the string " ); 
	gets(s) ; 
	int i,j,k=0;
	for(i=0 ; s[i]!='\0' ; i++) ;  
	for(j=i-1 ; j>=0 ; j--){
		p[k]=s[j] ; 
		k++ ;  
	}
	for(j=0 ; j<i ; j++){
		if(p[j]!=s[j])
			k=1 ; 
	}
	if(k==1)
		printf(" not pallindrome ");
	else
		printf(" pallindrome ");
	return 0 ; 
}
