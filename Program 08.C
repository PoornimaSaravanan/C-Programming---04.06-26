#include <stdio.h>
int main()
{
  int no = 28, i = 1, sum = 0;
    while(i < no)
    {
      if(no % i == 0)
      {
        sum = sum + i;
      }
        i++;
    }
    if(sum == no)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
        return 0;
}
-------------------------------------------------
Output: Perfect number
