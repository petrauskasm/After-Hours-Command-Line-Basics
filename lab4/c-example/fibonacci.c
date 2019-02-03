
//Fibonacci Series using Dynamic Programming 
#include<stdio.h>
#include<stdlib.h>
  
long fib(int n) 
{ 
  /* Declare an array to store Fibonacci numbers. */
  long f[n+2];   // 1 extra to handle case, n = 0 
  long i; 
  
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      /* Add the previous 2 numbers in the series and store it */
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 
  
int main (int argc, char* argv[]) { 
	if (argc != 2) {
		printf("Invalid number of arguments. Please ensure that you specificed the number.\n");
	}
	else {
		int number = atoi(argv[1]);
		if (number < 0 || number > 94) {
			printf("The number must be between 0 and 100.\n");
		}
		else {
			long result = fib(number);
			printf("The %dth fibonacci number is %ld.\n", number, result);
			return 0;
		}
	} 
} 

