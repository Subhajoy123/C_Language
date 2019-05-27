// displaying sum and average of marks in 3 subjects
#include<stdio.h>
int main(){
	 
	float x,y,z ;
	printf(" enter the marks in first subjest :") ; 
	scanf("%f", &x) ; 
	printf(" enter the marks in second subjest :") ; 
	scanf("%f", &y) ;
	printf(" enter the marks in third subjest :") ; 
	scanf("%f", &z) ;
	printf(" The total marks : %f \n The average is : %f", x+y+z, (x+y+z)/3) ; 
	
	return 0 ; 
	    
	
}
