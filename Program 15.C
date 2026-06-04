#include <stdio.h>
int main()
{
  int no = 12, i = 1, count = 0;
    while(i <= no)
    {
      if(no % i == 0)
        count++;
        i++;
    }
    if(count > 2)
        printf("Composite Number");
    else
        printf("Not a Composite Number");
        return 0;
}
---------------------------------------------------
Output: Composite Number
