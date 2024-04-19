#include <stdio.h>
#include <math.h>
int main() {
    int N,t;
    scanf("%d", &t);
    
    while(t--) {
    	scanf("%d", &N);
    int count = 0;
    for (int i = 1; i <= sqrt(N); i++) {
        if (N % i == 0 && i % 2 == 0 ) {
            count++;
            
        }
        if(i != N/i && (N/i) %2 ==0 && N %i==0) count++; 
    }
    printf("%d\n",count);
	}
    return 0;
}
