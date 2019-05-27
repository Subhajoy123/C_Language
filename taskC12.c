// celsius to fahrenheit conversions using switch case
#include<stdio.h>
int main(){
	int s;
	float t;
	do{
	printf("\n 1.Celsius to Fahrenheit \n 2.Fahrenheit to Celsius \n 3.Exit") ; 
	printf("\n enter your choice ") ;
	scanf("%d",&s) ; 
	switch(s){
		case 1:{
			printf("\n enter the temp. in Celsius " ) ;
			scanf("%f",&t) ;
			printf(" the temp. in Fahrenheit %f \n", (1.8*t)+32 ) ;
			break;
		}
		case 2:{
		  	printf("\n enter the temp. in Fahrenheit " ) ;
			scanf("%f",&t) ;
			printf("\n the temp. in Celsius %f \n", 0.555555555555*(t-32)) ;
			break;
		}
		case 3:{
			break;
		}	
		default:{
			printf("\n INVALID \n" ) ;
			break;
		}	
	}
	}while(s!=3) ; 
	return 0 ; 
	
	
}

