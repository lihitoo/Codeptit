#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
      long long a[1000005],n;
      scanf("%lld",&n);
      long long best=-100000000000000000, sum =0;
      for(int i=1 ; i <= n; i++) {
        scanf("%lld",&a[i]);
      }
      for(int i=1 ; i <= n; i++) {
        if(a[i]+sum >= a[i] ) sum = a[i] + sum;
        else sum = a[i];
        if(sum >= best ) best = sum;
        //else sum = a[i];
      }
      printf("%lld\n",best);
    }
    
}