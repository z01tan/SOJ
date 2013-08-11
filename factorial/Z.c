#include <stdio.h>


int Z(int N)
{
  int acc = 0;

  while(N>=5)
    {
      N/=5;
      acc+=N;
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
