#include<stdio.h>
#include<math.h>

int main(){
	int i,n; //assign integer
	float s; //assign float
	s=0.00;  //giving value of s
	printf("Enter value of n " ); //ask input from user
	scanf("%d", &n); //scan user input

//for loop
	for( i=0; i<=n; i++ ){
		s=s+(1.00/pow(2,i));
		
	}
	printf("The Sum is %f",s);
	
}
