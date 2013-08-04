#include <iostream>
#include <cmath>
#include <cstdlib>

bool miller1(long long p, int iter)
{
  if(p<2)
    return false;
  if(p!=2 && p%2==0)
      return false;

  long long s = p-1;
  while(s%2==0)
    {
      s/=2;
    }
  for(int i=0; i<iter;++i)
    {
      long long a = rand()%(p-1)+1,temp=s;
      long long mod =(long long)pow(a,temp)%p;
      
      while(temp!=p-1 && mod!=1 && mod!=p-1)
	{
	  mod = (mod*mod)%p;
	  temp *= 2;
	}
      if(mod!=p-1 && temp%2==0)
	  return false;
    }
  
  return true;
}


int main()
{
  std::string s,s1;
  //  std::cout<<""<<std::cout;
  std::cin>>s;
  int count = atoi(s.c_str());
  int n[count],N[count];
  for(int i=0;i<count;++i)
    {
      std::cin>>s>>s1;
      n[i]=atoi(s.c_str());

      N[i]=atoi(s1.c_str());

      }
  
  for(int i=0;i<count;++i)
    {

      if(n[i]<=2)
	std::cout<<2<<std::endl;
      for(int j=n[i]%2!=0?n[i]:n[i]+1;j<=N[i];j+=2)
	{

	  if(miller1(j,50))
	    std::cout<<j<<std::endl;
	}
      std::cout<<"\n"<<std::endl;
    }

  return 0;
}
