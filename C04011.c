#include <stdio.h>

int dem_phan_tu_thoa_muc_tieu(int arr[], int n) {
    int count = 1;
    int check;
    for (int i = 1; i < n; i++) {
    	check = 0;
        for(int j=0 ; j< i;j++) {
        	if (arr[j] > arr[i]) {
            check = 1;
            break;
        }
		}
		if(check==0) count++;
    }
    return count;
}
int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int result = dem_phan_tu_thoa_muc_tieu(arr, n);
        printf("%d\n", result);
    }
    return 0;
}
