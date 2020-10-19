/*Solve Me First
Complete the function solveMeFirst to compute the sum of two integers.
Function prototype:
int solveMeFirst(int a, int b);
where,
a is the first integer input.
b is the second integer input
Return values
sum of the above two integers
Sample Input
a = 2
b = 3
Sample Output
5
Explanation
The sum of the two integers a and b is computed as: 2+3 =5.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int a, int b) {
  return a+b;
}

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum; 
    sum = solveMeFirst(num1,num2);
    printf("%d",sum);
    return 0;
}
