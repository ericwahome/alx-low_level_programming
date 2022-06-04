#include <stdlib.h>
#include <time.h>

/**
 * main -This is the  Execution starting point
 *
 * Return: Always o when the running suceeds
 */

int main()
{
     int n;
     printf("Enter Value of n: ");
     scanf("%d", &n); 
	if(n<0) {
  printf("%d is negative",n);
}
 else if ( n==0 ) { 
printf("%d is Zero",n);

}
else{
printf("%d is positive",n);
}
return 0;
}
