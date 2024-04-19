#include <stdio.h>
int arr[1000007];
void in_phan_tu_va_so_lan_xuat_hien(int arr[], int n) {
    int dem[1000007] = {0}; 
    int phan_tu_da_in[1000007] = {0};  
    for (int i = 0; i < n; i++) {
        dem[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (dem[arr[i]]) {
            printf("%d xuat hien %d lan \n", arr[i], dem[arr[i]]);
            dem[arr[i]] = 0;  
        }
    }
}
int main() {
    int n,t;
    scanf("%d", &t);
    int k=1;
    while(t--) {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Test %d:\n",k);
    k++;
    in_phan_tu_va_so_lan_xuat_hien(arr, n);    	
	}

    return 0;
}
