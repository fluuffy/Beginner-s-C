#include <stdio.h>

void main() {
// initialize your variables
	int i, j, a, n, number[30];
	
// prompt for entry. We want to know how long the array is and what it will contain
	printf("Enter the value of N \n");
	scanf("%d", &n);
	printf("Enter the numbers \n");
	
// input all the numbers
	for(i=0; i<n; i++)
	{
	    scanf("%d", &number[i]);
	}
	
// For all the numbers we have, we look at the next value and if that value is greater than the previous value, we swap the values and
// 'push' it back. Like { 2, 1, 3}. In this test, we know that 2>1, so we 'push' 1 to take the value of 2, and assign 2 to 1.
	for (i = 0; i < n; i++){
	    for(j = i+1; j < n; ++j){
	        if(number[i] > number[j]){
	            a = number[i];
	            number[i] = number [j];
	            number[j] = a;
	        }
	    }
	}
	printf("The numbers arein ascending order are:");
	for(i = 0; i < n; i++){
	    printf("%d\n", number[i]);
	}
}
