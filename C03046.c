#include <stdio.h>

int is_lucky_number(int number) {
    while (number > 0) {
        if (number % 10 == 4) {
            return 0; 
        }
        number /= 10;
    }
    return 1; 
}
int laSoThuanNghich(int so) {
    int daoNguoc = 0;
    int original = so;

    while (so > 0) {
        int chuSo = so % 10;
        daoNguoc = daoNguoc * 10 + chuSo;
        so /= 10;
    }

    return original == daoNguoc;
}
void generate_lucky_numbers(int N) {
    int start = 1;
    for (int i = 1; i < N; i++) {
        start *= 10;
    }
    
    for (int i = start; i < start * 10; i++) {
        int sum = 0;
        int temp = i;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum % 10 == 0 && is_lucky_number(i) && laSoThuanNghich(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    int N ,t;
    scanf("%d",&t);
	while(t--) {
		scanf("%d",&N);
	    generate_lucky_numbers(N);
	    printf("\n");
	}


    return 0;
}
