#include <stdio.h>
int demUoc(int n) {
    int dem = 0;
    while (n % 2 == 0) {
        dem++;
        n /= 2;
    }
    return dem;
}
char* check(int n, int k) {
    int dem2 = 0;
    for (int i = 2; i <= n; i += 2) {
        dem2 += demUoc(i);
    }
    if (dem2 >= k) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%s\n", check(n, k));
    return 0;
}
