#include <stdio.h>
#include <string.h>

const char* tinhTong(const char* so1, const char* so2) {
    static char ketQua[102];  // Mảng tĩnh để lưu trữ kết quả, giả sử không quá 100 chữ số

    int doDai1 = strlen(so1), doDai2 = strlen(so2);
    int doDaiMax = (doDai1 > doDai2) ? doDai1 : doDai2;

    int nho = 0;
    int index = 0;

    for (int i = 0; i < doDaiMax || nho; ++i) {
        int chuSo1 = (i < doDai1) ? (so1[doDai1 - i - 1] - '0') : 0;
        int chuSo2 = (i < doDai2) ? (so2[doDai2 - i - 1] - '0') : 0;

        int tong = chuSo1 + chuSo2 + nho;
        nho = tong / 10;

        ketQua[index++] = (tong % 10) + '0';
    }

    ketQua[index] = '\0';

    // Đảo ngược chuỗi kết quả
    for (int j = 0; j < index / 2; ++j) {
        char temp = ketQua[j];
        ketQua[j] = ketQua[index - j - 1];
        ketQua[index - j - 1] = temp;
    }

    return ketQua;
}

void tinhTongNua(char num[]) {
    int length = strlen(num);
    while (length > 1) {
        int half_length = length/ 2;
        char first_half[half_length + 1];
        char second_half[half_length + 1];
        strncpy(first_half, num, half_length);
        first_half[half_length] = '\0';
//printf("%s ",first_half);
        strncpy(second_half, num + (half_length),length-half_length);
        second_half[length-half_length] = '\0';
//printf("%s ",second_half);
        // Tính tổng của hai nửa và in ra
        char ketQua[10000];
        char *sum = tinhTong(first_half,second_half);
        printf("%s\n", sum);
        // Chuyển kết quả thành chuỗi để xử lý cho vòng lặp tiếp theo

        length = strlen(sum);
    }
}
int main() {
    char num[201]; 
    gets(num);
    scanf("\n");
    tinhTongNua(num);
    return 0;
}
