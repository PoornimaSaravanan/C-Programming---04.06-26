#include <stdio.h>
int main()
{
  int no = 145, temp, r, i, fact, sum = 0;
  temp = no;
    while(no > 0)
    {
      r = no % 10;
      fact = 1;
         for(i = 1; i <= r; i++)
         {
            fact = fact * i;
         }
         sum = sum + fact;
         no = no / 10;
    }
    if(sum == temp)
        printf("Strong Number");
    else
        printf("Not a Strong Number");
        return 0;
}
-----------------------------------------------
Output: Strong Number
