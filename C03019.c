#include <stdio.h>
#include <math.h>
int la_thuan_nghich(int num) {
    int so_goc = num;
    int so_dao_nguoc = 0;
    while (num > 0) {
        int chu_so = num % 10;
        so_dao_nguoc = so_dao_nguoc * 10 + chu_so;
        num /= 10;
    }

    return (so_goc == so_dao_nguoc) ? 1 : 0;
}
int tong(int num) {
    int tong_chu_so = 0;
    while (num > 0) {
        tong_chu_so += num % 10;
        num /= 10;
    }
    return tong_chu_so;
}
int main() {
    int T;
    int count;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int n;
        count =0;
        scanf("%d", &n);
        int start=1,end;
        while(n--) {
          start*=10;
        }
        for(int i=start/10; i <= start-1; i++) {
          if(la_thuan_nghich(i) && tong(i) %10 == 0) count++;
        }
       // printf("%d\n",start);
        printf("%d\n",count);
    }
    return 0;
}
