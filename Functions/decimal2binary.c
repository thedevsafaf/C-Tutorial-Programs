// convert decimal to binary

#include <stdio.h>
#include <math.h>

long long convert(int);

int main() {
  int n, bin;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  bin = convert(n);
  printf("%d in decimal =  %lld in binary", n, bin);
  return 0;
}

long long convert(int n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}


/*

decimal = 13 -------> binary = 1101

n != 0  	rem = n % 2	    n /= 2	      i	      bin += rem * i	           i * = 10
13 != 0  	13 % 2 = 1	    13 / 2 = 6	  1       0 + 1 * 1 = 1	               1 * 10 = 10
6 != 0  	6 % 2 = 0	    6 / 2 = 3	  10	  1 + 0 * 10 = 1	           10 * 10 = 100
3 != 0  	3 % 2 = 1	    3 / 2 = 1	  100	  1 + 1 * 100 = 101	           100 * 10 = 1000
1 != 0  	1 % 2 = 1	    1 / 2 = 0	  1000	  101 + 1 * 1000 = 1101	       1000 * 10 = 10000
0 != 0  	-	            -		      -	      Loop terminates

*/