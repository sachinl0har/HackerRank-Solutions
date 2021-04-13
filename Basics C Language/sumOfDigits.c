// Objective

// The modulo operator, %, returns the remainder of a division. For example, 4 % 3 = 1 and 12 % 10 = 2. The ordinary division operator, /, returns a truncated integer value when performed on integers. For example, 5 / 3 = 1. To get the last digit of a number in base 10, use  as the modulo divisor.

// Task

// Given a five digit integer, print the sum of its digits.

// Input Format

// The input contains a single five digit number, .

// Constraints


// Output Format

// Print the sum of the digits of the five digit number.

// Sample Input 0

// 10564
// Sample Output 0

// 16

// -- CODE HERE -- 


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum = 0, m;
    scanf("%d", &n);
    while(n>0){
        m = n % 10;
        sum = sum + m;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
};
