#include <iostream>
int main()
{
  int inp = 0;
  while(inp!=42)
    {
      std::cin>>inp;
      if(inp==42) continue;
      std::cout<<inp<<std::endl;
    }
  return 0;
}
