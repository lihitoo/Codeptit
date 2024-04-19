#include <stdio.h>
void in_phan_tu_xuat_hien_nhieu_lan(int arr[], int n) {
    int count[1000] = {0};  
    int xuat_hien_mot_lan = 0;
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
      //  	printf("%d ",arr[i]);
            xuat_hien_mot_lan ++;
        }
    }
    printf("%d\n",xuat_hien_mot_lan);
    for (int i = 0; i < n; i++) {
        if (count[arr[i]] == 1) {
        	printf("%d ",arr[i]);
            count[arr[i]] = 0;  
        }
    }
    
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    in_phan_tu_xuat_hien_nhieu_lan(arr, n);
    return 0;
}
