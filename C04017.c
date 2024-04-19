#include <stdio.h>

int is_prime(int num) {
    if (num < 2) {
        return 0; // False
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // False
        }
    }
    return 1; // True
}

void count_and_list_primes(int arr[], int n) {
    int primes[1005]={0};
    int count = 0;

    // Lặp qua mảng và lọc số nguyên tố
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
          count++;
            primes[arr[i]]++ ;
        }
    }

    // In số lượng các số nguyên tố
    
    // for (int i = 0; i < 1005; i++) {
    //     if(primes[i]!=0) {
    //       count++;
    //     }
        
    // }
    printf("%d ", count);
    // In lần lượt các số nguyên tố theo thứ tự xuất hiện
    for (int i = 0; i < n; i++) {
        if(primes[arr[i]]!=0) {
          printf("%d ", arr[i]);
        //  primes[arr[i]]=0;
        }
        
    }
}

int main() {
    int n;

    // Đọc số phần tử của mảng
    scanf("%d", &n);

    int array[n];

    // Đọc mảng số nguyên
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Đếm và in số lượng và lần lượt các số nguyên tố
    count_and_list_primes(array, n);

    return 0;
}
