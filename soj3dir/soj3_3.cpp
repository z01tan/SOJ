#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>

int main()
{
  int n;
  //  std::cout<<""<<std::endl;
  //  std::cin>>n;
  n = 1000000;
  
  std::vector<int> primes;
  primes.push_back(2);
  int test;
  for(int i=2;i<n;++i)
    {
      test=0;
      for(std::vector<int>::iterator it=primes.begin();it!=primes.end();++it)
	{
	  if(i%*it==0)
	    {
	      test=1;
	      break;
	    }

	}
      
      if(test==0)
	{
	  primes.push_back(i);
	  // std::cout<<i<<std::endl;
	}

    }

  return 0;
}
