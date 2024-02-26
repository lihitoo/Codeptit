#include <stdio.h>
#include<math.h>
int main() {
    int T;
    long long N;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        scanf("%lld", &N);
        int count = 0;
        for (long long i = 1; i*i <= (N); i++) {
            if (N % i == 0)  {
                if(i % 2 == 0) count++;
                if((N/i)%2==0&& i*i!= N) count++;
                
            }
        }
        printf("%d\n",count);
    }

    return 0;
}