#include <iostream>
#include <cmath>
#include <cstdlib>

bool check(int n)
{
  if(n==1)
    return false;
  if(n==2)
    return true;
  
  for(int i=3;i<=sqrt(n);i+=2)
    {
      
      if(n%i==0)
	return false;
    }

  return true;
}

int main()
{
  std::string s,s1;
  //  std::cin>>s;
  int count = atoi(s.c_str());
  count = 1;
  int n[count],N[count];
  n[0]=0;
  N[0]=1000000;
  /* for(int i=0;i<count;++i)
    {
      std::cin>>s>>s1;
      n[i]=atoi(s.c_str());

      N[i]=atoi(s1.c_str());

      }*/
  
  


  for(int i=0;i<count;++i)
    {

      
      for(int j=n[i]%2==0?n[i]+1:n[i];j<=N[i];j+=2)
      
	{
	  if(check(j))
	    continue;
	    //std::cout<<j<<std::endl;
	}
      
      std::cout<<"\n"<<std::endl;
    }

  return 0;
}
