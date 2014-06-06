#include "stdio.h"
float sqrn(int x);
float absy(float a);
int main(int argc, char const *argv[])
{
  printf("整数入力して、どうぞ\n");
  int x;
  scanf("%d",&x);
  printf("√%dの値は%5.2f\n",x,sqrn(x));

	return 0;
}
float sqrn(int x)
{
  float a,b;
  a=1.0; b=x*1.0;
  while(absy(a-b)>1e-6){
    a=b;
    b=a-(a*a-x)/(x*a);
  }
  return b;
}
float absy(float a)
{
  if(a>0){
    return a;
  }
  return -a;
}
