#include <iostream>
#include <cmath>
#include <cstdlib>

bool check(int n)
{
  if(n==1)
    return false;

  if(n==2 or n==3 or n==5 or n==7)
    return true;

  int k = n%10;

  if(k==5 or k%2==0)
    {
      return false;
    }
  int lim = (int) sqrt(n);
  for(int i=3;i<=lim;i+=2)
    {
      
      if(n%i==0)
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

	  if(check(j))
	    
	    std::cout<<j<<std::endl;
	}
      std::cout<<"\n"<<std::endl;
    }

  return 0;
}
