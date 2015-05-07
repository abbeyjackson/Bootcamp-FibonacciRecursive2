//
//  main.c
//  FibonacciRecursive1
//
//  Created by Abegael Jackson on 2015-05-06.
//  Copyright (c) 2015 Abegael Jackson. All rights reserved.
//

#include <stdio.h>


int recursiveValueFibonacci(int remainingSteps, int *previousNumber, int *previousPreviousNumber);

int n = 7; // n is the nth digit in the series.


int main(int argc, const char * argv[]) {
    
    int x = 1;
    int y = 0;
    
    int *preNum = &x;
    int *prePreNum = &y;
    
    int result = recursiveValueFibonacci(n,preNum,prePreNum);
    printf("Fibonacci number at index %d is: %d, \n", n, result);

    
    
    return 0;
}



int recursiveValueFibonacci(int remainingSteps, int *previousNumber, int *previousPreviousNumber){
    
    int nthNum = 0;
    
    if (remainingSteps > 0) {
        
        nthNum = *previousNumber + *previousPreviousNumber;
        *previousPreviousNumber = *previousNumber;
        *previousNumber = nthNum;
        remainingSteps--;
        
        return recursiveValueFibonacci(remainingSteps, previousNumber, previousPreviousNumber);
        
    }
    return *previousNumber;
    
    
}



