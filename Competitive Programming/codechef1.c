#include <stdio.h>

int main()
{
    
    int N, time_required, time_have;
    scanf("%d %d %d", &N, &time_required, &time_have);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    int flag = 0;
   for (int i = 0; i < N; i++)
    {
        if(time_required == time_have + a[i])
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    
    return 0;
}