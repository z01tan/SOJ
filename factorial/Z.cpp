#include <iostream>
#include <cmath>

template <typename T>
long long numberDigits(T num)
{
  long long ndigits=0;
  while(num)
    {
      num /= 10;
      ++ndigits;
    }
  return ndigits;
}

long long factorial(long long N)
{
  if(N==1)
    return 1;
  if(N<0)
    return -1;
  long long acc=1;
  for(long long i=1;i<=N;++i)
    {
      acc*=i;
    }
  return acc;
}

long long Z(long long N)
{
  long long count = numberDigits<long long>(N);
  long long acc = 0;
  long long decs;
  for(long long i =1;i<=count;++i)
    {
      decs = pow(10,i);
      if(i==1)
	{
	  acc+=(N/decs);
	  if(N%10>=5)
	    ++acc;
	}
      acc += (N/decs);
    }
  
  return acc;
}

int main()
{
  long long N;
  std::cout<<"N :";
  std::cin>>N;
  for(int i=2;i<N;++i)
    std::cout<<"Z("<<i<<") = "<<Z(i)<<" fctrl = "<<factorial(i)<<std::endl;

  return 0;
}
