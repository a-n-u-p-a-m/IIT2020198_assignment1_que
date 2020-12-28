/*Finding arithmetic mean and harmonic mean of five numbers*/

#include <stdio.h>

int main(void)
{
   float a,b,c,d,e,AM,HM;
   scanf("%f,%f,%f,%f,%f",&a,&b,&c,&d,&e);
   
   AM=(a+b+c+d+e/5.0);  /*Formula for arithmetic mean*/
   
   HM=5.0/((1/a)+(1/b)+(1/c)+(1/d)+(1/e));  /*Formula for harmonic mean*/
   
   printf("Arithmetic mean is %f and harmonic mean is %f\n",AM,HM);
}   
