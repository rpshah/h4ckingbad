//[20,10]
/*Tuco is recruiting his army of hackers. He does not want more brainless idiots like him. Prove you aren't an idiot.*/

#include <stdio.h>
void rotate(char *str,int n) 
{
  int i =0;
  for(i=0;str && str[i]; ++i) 
  {
    if(str[i] >= 'a' && (str[i]+n) <='z')
    {
      str[i] = str[i]+n;       
    }
  }
}
int add (int num1, int num2)
{return (num1 + num2);}
int subtract (int num1, int num2)
{return (num1 - num2);}
int do_math (int (*math_fn_ptr) (int, int), int num1, int num2)
{return (*math_fn_ptr) (num1, num2);}
int main()
{
  int result;
  int a,b;
  printf("enter value of a");
  scanf("%d",&a);
  printf("enter value of b");
  scanf("%d",&b);
  char f[] = "plteqsxujm";
  rotate(f,12);
  if(do_math (add, 10, a)+do_math (subtract, 40, b) == 50) printf(f);
  return 0;
}

