#include <stdio.h>
#include<math.h>
  int demSoLan[100005] = {0}; 
void demSoLanXuatHienCacChuSoNguyenTo(int n) {

    for(int i=2;i<100005;i++) {
      if(demSoLan[i]!=0) {
      	printf("%d xuat hien %d lan\n",i,demSoLan[i]);
      	demSoLan[i]=0;
	  }
    }
}
int laSoNguyenTo(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++) {
      int n,chuSo;
      scanf("%d", &n);
      printf("Test %d:\n",i);
      for(int i=1;i<=n;i++) {
        scanf("%d",&chuSo);
        if (laSoNguyenTo(chuSo)) {
            demSoLan[chuSo]++;
        }
      }
      demSoLanXuatHienCacChuSoNguyenTo(chuSo);
    }
    
    
    return 0;
}
