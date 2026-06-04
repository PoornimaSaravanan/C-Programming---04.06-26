#include <stdio.h>
int main()
{
  int no = 7, i = 1, count = 0;
    while(i <= no)
    {
      if(no % i == 0)
      {
        count++;
      }
        i++;
    }
    if(count == 2)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
    return 0;
}
-----------------------------------------
Output: Prime Number
