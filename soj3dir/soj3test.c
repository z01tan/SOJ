#include <stdio.h>
#include <math.h>
short check(int n)
{
  int k;
  k=n%10;

  /*  if(k==2 || k==4 || k==6 || k==8)
      return 0;*/

  int i;
  for(i=2;i<=sqrt(n);++i)
    {
      
      if(n%i==0)
	return 0;
    }

  return 1;
}

int main()
{
  int i,n,N;
  n=1;N=10000000;
  for(i=n;i<N;i+=2)
    {
      if(check(i)==1)
	continue;

    }

  return 0;
}
