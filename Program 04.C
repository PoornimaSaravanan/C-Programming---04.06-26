#include<stdio.h>
int main()
{
  int num = 121, temp, rev = 0, rem;
  temp = num;
    while(num != 0)
    {
      rem = num % 10;
      rev = rev * 10 + rem;
      num = num / 10;
    }
    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
-----------------------------------------
Output: Palindrome
