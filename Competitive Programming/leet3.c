/*
Input: x = 123
Output: 321

Input: x = 120
Output: 21
*/
#include <stdio.h>

int reverse(int n)
{
    int rem = 0;
    int rev_num = 0;
   
    while (n!= 0)
    {
        rem = n%10;
        rev_num = rev_num*10 + rem;
        n = n/10;
    }
    
   return rev_num;    
    
}
int main()
{
    signed int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    int rev_num = reverse(n);
    printf("%d", rev_num);
    return 0;

}