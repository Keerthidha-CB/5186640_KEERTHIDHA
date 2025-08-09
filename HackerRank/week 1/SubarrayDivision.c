#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int s[100];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &s[i]);
    }

    int d, m;
    scanf("%d %d", &d, &m);

    int ways = 0;

    
    for (int i = 0; i <= n - m; i++) 
    {
        int sum = 0;

        
        for (int j = 0; j < m; j++) 
        {
            sum += s[i + j];
        }

        if (sum == d) 
        {
            ways++;
        }
    }

    printf("%d\n", ways);
    return 0;
}