#include <stdio.h>
#include <math.h>
int main() {
    int a,b,t;
    scanf("%d", &t);
    while(t--) {
    	scanf("%d%d", &a,&b);
    int count = 0,cur,check =1;
    for (int i = a; i <= b; i++) {
    	check = 1;
    	int x=i;
        int pre = x%10;
        x /=10;
        while(x>0) {
        	
        	cur = x%10;
        	if(cur <= pre) {
        		check = 0;
        		break;
			}
	//		printf("%d va %d",pre,cur);
			pre = cur;
			x /=10;
		}
		if(check == 1) count++;
		
    }
    printf("%d\n",count);
	}
    return 0;
}
