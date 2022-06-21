// Program to predict best time to - 
// To Buy a Stock or to sell a stock
// To buy - price should be low ....... To sell - Price should be high


#include <stdio.h>

void max_profit(int a[], int n)
{
    int max_pro = 0;
    int min_ele = a[0], profit = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] < min_ele)
        {
            min_ele = a[i];
        }
        profit = a[i] - min_ele;
        if(profit > max_pro)
        {
            max_pro = profit;
        }
    }
    printf("Maximum Profit is %d", max_pro);

    
}

int main()
{
    int a[] = {3, 2, 1, 8, 9, 2, 1};
    int n = sizeof(a)/sizeof(a[0]);

    max_profit(a, n);

    return 0;
}