#include <stdio.h>
int main()
{
  int i = 100, j, count;
    while(i <= 200)
    {
      count = 0;
      j = 1;
        while(j <= i)
        {
          if(i % j == 0)
          count++;
          j++;
        }
        if(count == 2)
            printf("%d ", i);
            i++;
    }
        return 0;
}
-------------------------------------------
Output:
101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 
