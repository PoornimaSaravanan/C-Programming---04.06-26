#include <stdio.h>
int main()
{
  int no = 25,sq;
  sq = no * no;
  if(sq % 100 == no)
        printf("Automorphic Number");
  else
        printf("Not an Automorphic Number");
        return 0;
}
---------------------------------------------------
Output: Automorphic Number
