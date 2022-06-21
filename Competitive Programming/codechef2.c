//SASTA SHARK TANK
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int A, B, Na, Nb;
    while(t > 0)
    {
        Na = 0, Nb = 0;
        scanf("%d %d", &A, &B);
        Na = (A/10) * 100;
        Nb = (B/20)*100;
        if(Na == Nb)
        {
            printf("ANY\n");
        }
        else if(Na > Nb)
        {
            printf("FIRST\n");
        }
        else
        {
            printf("SECOND\n");
        }

        t--;
    }
    return 0;
}