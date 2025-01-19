#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;
    
    //user to key in 
    printf("User enter a number= ");
    scanf("%d", &num);
    
    //validate input
    if(num < 0){
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        for(int i = 1; i <= num; i++){
            factorial *= i;
        }
        printf("The factorial of %d is %llu.\n", num, factorial);
    }
    
    
    

    return 0;
}