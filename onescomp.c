#include <stdio.h>
#include<math.h>

unsigned int onesComplement(unsigned int n) 
{ 
   // Find number of bits in the given integer 
   int number_of_bits = floor(log2(n))+1; 
  
   // XOR the given integer with poe(2,  
   // number_of_bits-1 and print the result  
   return ((1 << number_of_bits) - 1) ^ n; //XOR the given integer with 2^number_of_bits-1
} 
  
int main() 
{ 
  unsigned int n;
  printf("Value:");
  scanf("%lu",&n);
  printf("%d", onesComplement(n)); 
  return 0; 
}  