#include <stdio.h>
int main()
{
  int no = 19, r, sum = 0;
    while(no > 0)
    {
      r = no % 10;
      sum = sum + (r * r);
      no = no / 10;
    }
    if(sum == 1)
        printf("Happy Number");
    else
        printf("Not a Happy Number");
        return 0;
}
------------------------------------------------
Output: Happy Number
