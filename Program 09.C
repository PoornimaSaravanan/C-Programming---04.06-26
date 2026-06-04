#include <stdio.h>
int main()
{
  int no = 18, temp, r, sum = 0;
  temp = no;
    while(no != 0)
    {
      r = no % 10;
      sum = sum + r;
      no = no / 10;
    }
    if(temp % sum == 0)
        printf("Harshad Number");
    else
        printf("Not a Harshad Number");
        return 0;
}
----------------------------------------------
Output: Harshad Number
