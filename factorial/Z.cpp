#include <iostream>

int Z(int N)
{
  int acc = 0;
  for(int i =0;i<=N;i+=5)
    {
      int local = i;
      while((local%5)==0 and local!=0)
	{
	  ++acc;
	  local/=5;
	}

    }
  
  return acc;
}

int main()
{
  int count,N;
  std::cin>>count;
  for(int i=0;i<count;++i){
    std::cin>>N;
    std::cout<<Z(N)<<std::endl;
  }

  return 0;
}
