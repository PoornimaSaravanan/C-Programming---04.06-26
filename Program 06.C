#include <stdio.h>
int main()
{
  int no = 153, temp, r, sum = 0;
  temp = no;
    while(no != 0)
    {
      r = no % 10;
      sum = sum + (r * r * r);
      no = no / 10;
    }
    if(temp == sum)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
        return 0;
}
------------------------------------------------------
Output: Amstrong number
