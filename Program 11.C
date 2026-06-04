#include <stdio.h>
int main()
{
  int no = 1729, sum = 0, r;
    while(no > 0)
    {
      r = no % 10;
      sum = sum + r;
      no = no / 10;
    }
    if(sum == 19)
        printf("Magic Number");
    else
        printf("Not a Magic Number");
        return 0;
}
--------------------------------------------
Output: Magic Number
