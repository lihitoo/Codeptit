#include <stdio.h>

void in_phan_tu_va_so_lan_xuat_hien(int arr[], int n) {
    int dem[1000] = {0}; 
    int phan_tu_da_in[1000] = {0};  
    for (int i = 0; i < n; i++) {
        dem[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (!phan_tu_da_in[arr[i]]) {
            printf("%d xuat hien %d lan\n", arr[i], dem[arr[i]]);
            phan_tu_da_in[arr[i]] = 1;  
        }
    }
}
int main() {
    int n,t;
    scanf("%d", &t);
    int k=1;
    while(t--) {
    scanf("%d", &n);
    int arr[n+5];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Test %d:\n",k++);
    in_phan_tu_va_so_lan_xuat_hien(arr, n);    	
	}

    return 0;
}
