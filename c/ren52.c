#include<stdio.h>
float sqrn(int x);
float absy(float a);
main()
{
  printf("整数入力して、どうぞ\n");
  int x;
  scanf("%d",&x);
  printf("%dの３乗根の値は%f\n",x,sqrn(x));
}
float sqrn(int x)
{
  float a,b;
  a=1.0; b=x*1.0;
  while(absy(a-b)>1e-8){
    a=b;
    b=a-(a*a*a-x)/(3*a*a);
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
