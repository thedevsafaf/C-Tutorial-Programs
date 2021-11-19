// convert binary to decimal

#include <stdio.h>
#include <math.h>

// function prototype
int convert(long long);

int main() {
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  printf("%lld in binary = %d in decimal", n, convert(n));
  return 0;
}

// function definition
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

/*

Tracing 

Binary -> Decimal
1101   -> 13


n != 0	          rem = n % 10	            n /= 10        	  i	             dec += rem * pow(2, i)
1101 != 0	        1101 % 10 = 1	           1101 / 10 = 110	  0               0 + 1 * pow (2, 0) = 1
110 != 0	        110 % 10 = 0	           110 / 10 = 11	    1               1 + 0 * pow (2, 1) = 1
10 != 0	          11 % 10 = 1	             11 /10 = 1	        2               1 + 1 * pow (2, 2) = 5
1 != 0	          1 % 10 = 1               1 / 10 = 0		      3               5 + 1 * pow (2, 3) = 13
0 != 0	          -	                       -	                 -	            Loop terminates

*/