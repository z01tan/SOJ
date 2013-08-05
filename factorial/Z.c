#include <stdio.h>

int Z(int N)
{
  int acc = 0;
  int i;
  for(i =0;i<=N;i+=5)
    {
      int local = i;
      while((local%5)==0 && local!=0)
	{
	  ++acc;
	  local/=5;
	}

    }
  
  return acc;
}

int main()
{
  int count,N,i;
  scanf("%d",&count);
  for(i=0;i<count;++i){
    scanf("%d",&N);
    printf("%d\n",Z(N));
  }

  return 0;
}
