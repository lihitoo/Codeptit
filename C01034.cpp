#include<stdio.h>
#include<math.h>
//int check[10000007];
int main() {
  long long a,b;
  long long s=0;
  scanf("%lld%lld",&a,&b);
//  for(int i=1;i<=10000001;i++) check[i]=0;
//  for(int i=1;i<=sqrt(10000001);i++) check[i*i]=1;
//  for(int i=a ; i <=b ; i++) {
//  	if(check[i]==1) s++;
//  }
//  printf("%d\n",s);
//  for(int i=a ; i <=b ; i++) {
//  	if(check[i]==1) printf("%d\n",i);
//  }
   for(long long i=a; i <= b; i++) {
   	int x=(int)sqrt(i);
   	if(x*x == i) s++;
   }
   printf("%d\n",s);
   for(long long i=a; i <= b; i++) {
   	int x=(int)sqrt(i);
   	if(x*x == i) printf("%d\n",i);
   }
}
