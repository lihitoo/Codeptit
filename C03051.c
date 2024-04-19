#include <stdio.h>
#include <math.h>
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
        long long L, R;
        scanf("%lld %lld", &L, &R);
        int dem = 0;
        for (long long num = (long long)sqrt(L); num <= (long long)sqrt(R); num++) {
            if(check[num] ) {
                dem++;
            }
        }
        printf("%d\n", dem);
    }
    return 0;
}
