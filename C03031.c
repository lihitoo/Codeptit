#include <stdio.h>
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
char* kiemTraUCLNGiongNhau(int a, int b, int c, int d) {
    int ucln_ab = ucln(a, b);
    int ucln_cd = ucln(c, d);

    return (ucln_ab == ucln_cd) ? "YES" : "NO";
}
int main() {
    int t; 
    scanf("%d", &t);

    for (int test_case = 0; test_case < t; test_case++) {
        int a, b, c, d; 
        scanf("%d %d %d %d", &a, &b, &c, &d);

        printf("%s\n", kiemTraUCLNGiongNhau(a, b, c, d));
    }
    return 0;
}
