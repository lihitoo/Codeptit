#include <stdio.h>

int main() {
    int soBoTest;
    scanf("%d", &soBoTest);

    while (soBoTest--) {
        long long soNguyen;
        scanf("%lld", &soNguyen);
            long long ketQua = 0;
            long long k=1;
            int check=0;
            long long temp = soNguyen;
            while(k<soNguyen) {
              k*=10;
            }
            k/=10;
            while (k > 0) {
                long long chuSo = temp / k;
                
                if (chuSo==0 || chuSo==1 || chuSo== 8|| chuSo== 9) {
                    if(chuSo!=1) {
                      chuSo=0;
                      
                    }
                    else {
                      
                     chuSo=1;
                    }
                    ketQua = chuSo + ketQua * 10;
               //     if(check==0) printf("%lld\n",ketQua);
                temp %= k;
                k/=10;
                }
                else {
                  
                  check =1;
                  
                  break;
                  
                }
                
            }
            if(check==0&&ketQua!=0) printf("%lld\n",ketQua);
            else printf("INVALID\n");

    }
    

    return 0;
}
