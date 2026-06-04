#include<stdio.h>
int main()
{
  int no = 1234, r, sum = 0;
    while(no != 0)
    {
      r = no % 10;
      sum = sum + r;
      no = no / 10;
    }
      printf("Sum of digits = %d", sum);
      return 0;
}
---------------------------------------------------
Output: sum of degits=10
