#include <stdio.h>
int i = 1;
void fizzBizz(int start, int end)
{
    printf("\nFizzBizz::START: %d, %d\n", start, end);
    
    for (i = start; i <= end;i++){
    	if ((i % 3 == 0) && (i % 5 != 0)){
    		printf("Fizz\n");
    	}
    	else if((i % 3 != 0) && (i % 5 == 0)){
    		printf("Buzz\n");
     	}
     	else if ((i % 3 == 0) && (i % 5 == 0)){
     		printf("FizzBizz \n");
     	}
     	else { 
     		printf("%d \n",i); 
     	}	
	}
	
	printf("\nFizzBizz::END\n");
    
}
int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: FizzBizz ###\n");
    
    fizzBizz(1, 6);
    fizzBizz(1, 16);
    fizzBizz(1, 100);
    
    return 0;
}
