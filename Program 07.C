#include <stdio.h>
int main()
{
  int no = 12, i = 1, count = 0;
  while(i <= no)
  {
    if(no % i == 0)
    {
      count++;
    }
      i++;
    }
      printf("Number of factors = %d", count);
      return 0;
}
-------------------------------------------------------
Output: Number of factors=6
