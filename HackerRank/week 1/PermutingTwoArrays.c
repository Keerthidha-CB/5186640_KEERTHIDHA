#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    while (q--)
     {
        int n;
        long long k;
        scanf("%d %lld", &n, &k);

        int A[1000], B[1000];

        
        for (int i = 0; i < n; i++) scanf("%d", &A[i]);
        for (int i = 0; i < n; i++) scanf("%d", &B[i]);

      
        for (int i = 0; i < n - 1; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (A[i] > A[j]) {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }

        
        for (int i = 0; i < n - 1; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (B[i] < B[j]) 
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

       
        int ok = 1;
        for (int i = 0; i < n; i++) 
        {
            if ((long long)A[i] + B[i] < k) 
            {
                ok = 0;
                break;
            }
        }

        if (ok)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}