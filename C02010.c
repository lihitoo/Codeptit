#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int k=1;
    int check =0;
    for(int i=1; i <= a; i++) {
    	
    	for(int j=k; j <= b; j++) printf("%d",j);
    	for(int j=k-1; j>=1 ; j--) printf("%d",j);
    	k++;
    	printf("\n");
    	if(k==b+1) {
    		check = 1;
    	//	printf("fghfg");
    		break;
		}
	}
	if(check == 1) {
		for (int i=1; i<=a-b; i++) {
			printf("%d",k);
			k++;
			for(int j=b-1; j>=1 ; j--) printf("%d",j);
			printf("\n");
		}
	}
}
