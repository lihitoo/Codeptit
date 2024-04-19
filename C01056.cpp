#include <stdio.h>

int main() {
    int t;
	scanf("%d",&t);
    while(t--) {
    	long long n;
    scanf("%lld", &n);
    long long p = n % 10;
    n /= 10;
    int l = 1;
    while (n > 0) {
        long long c = n % 10;
        if (c > p) {
            l = 0;  
            break; 
        }
        p = c;
        n /= 10;
    }

    if (l) {
        printf("YES\n");
    } else {
        printf("NO\n");
	}
	}
}
