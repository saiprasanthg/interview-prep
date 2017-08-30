#include <stdio.h>

int main() {

   int sum = 1799, count = 5;
   double mean;

   mean = (double) sum / count; // as we used double before expression it gets typecasted to double
   printf("Value of mean : %f\n", mean );
   return 0;
}