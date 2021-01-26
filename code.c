#include <math.h>
int binaryToDecimal(int n)
{
  int sum=0,i=0;
  while(n>0)
  {
    sum=sum+(n%10)*pow(2,i);
    n=n/10;
    i++;
  }
  return sum;
}
