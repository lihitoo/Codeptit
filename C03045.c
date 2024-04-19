#include <stdio.h>
#include <math.h>

int is_prime(long long num) {
    if (num < 2) {
        return 0;  
    }
    if (num == 2 || num == 3) {
        return 1;  
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;  
    }
    for (long long i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;  
        }
    }
    return 1;  
}
int main() {
  int N = 1000000;
  int check[N + 1];
  for (int i = 2; i <= N; i++) {
    check[i] = 1;
  }
  for (int i = 2; i <= N; i++) {
    if (check[i] == 1) {
      for (int j = 2 * i; j <= N; j += i) {
        check[j] = 0;
      }
    }
  }
    int soBoTest;
    scanf("%d", &soBoTest);
    while (soBoTest--) {
        long long n;
        scanf("%lld", &n);
        int dem = 0;
        int CHECK =0;
        for (long long num = 1; num <= (long long)sqrt(n); num++) {
            if(n%num == 0 && is_prime(n/num) ) {
                printf("%lld\n", n/num);
                CHECK =1;
                break;
            }
        }
        if(CHECK==0) for (long long num = (long long)sqrt(n); num >= 1 ; num--) {
            if(n%num == 0 && is_prime(num) ) {
                printf("%lld\n", num);
                CHECK =1;
                break;
            }
        }
        
    }
    return 0;
}
