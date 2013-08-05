#include <iostream>
#include <sstream>
#include <cmath>

template <typename T>
unsigned long long numberDigits(T num)
{
  unsigned long long ndigits=0;
  while(num)
    {
      num /= 10;
      ++ndigits;
    }
  return ndigits;
}

int stupidZerosCount(unsigned long long a)
{
  std::stringstream ss;
  ss<<a;
  std::string str = ss.str();
  int count=0;
  for(int i = str.size()-1;i>=0;--i){
    if(str[i]=='0')
      ++count;
    else
      return count;
  }
  return count;
}

unsigned long long factorial(unsigned long long N)
{
  if(N==1)
    return 1;
  if(N<0)
    return -1;
  unsigned long long acc=1;
  for(unsigned long long i=1;i<=N;++i)
    {
      std::cout<<i<<" "<<acc<<std::endl;
      acc*=i;
    }

  return acc;
}

unsigned long long Z(unsigned long long N)
{
  unsigned long long count = numberDigits<unsigned long long>(N);
  unsigned long long acc = 0;
  unsigned long long decs;
  for(unsigned long long i =1;i<=count;++i)
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
  unsigned long long N;
  std::cout<<"N :";
  std::cin>>N;
  /*  for(int i=2;i<N;++i)
      std::cout<<"Z("<<i<<") = "<<Z(i)<<" fctrl = "<<factorial(i)<<std::endl;*/
  std::cout<<"fctrl = "<<factorial(N)<<" Z(N) = "<<stupidZerosCount(factorial(N))<<std::endl;
  //  std::cout<<"Z(60) = "<<Z(60)<<"; fctrl 60 = "<<factorial(60)<<std::endl;
  return 0;
}
