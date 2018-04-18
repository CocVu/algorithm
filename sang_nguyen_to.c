#include <stdio.h>
#include <math.h>
/* Sieve of Eratosthenes */
#define BIL  (int) pow(10,8)
int *is_prime;
long i,j;
void sieve()
{
  for (i=1; i<=BIL; i++)
    is_prime[i]=1;
  is_prime[1]=0;
  i=2;
  while (i<=sqrt(BIL))
    {
      while (is_prime[i]==0)
        i++;
      for (j=2; j<=BIL/i; j++)
        is_prime[i*j]=0;
      i++;
    }
}
int main()
{
  is_prime = (int*) malloc((BIL+1) * sizeof(int));
  sieve();
  printf("%s\n", "sieved");
  for (i=BIL-10; i<=BIL ; i++)
    if (is_prime[i]) printf("%d \n",i );
  printf("%d \n", BIL );
  free(is_prime);

  return 0;
}
