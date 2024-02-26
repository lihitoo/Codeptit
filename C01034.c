#include<stdio.h>
#include<math.h>
int check[10000007];
int main() {
  int a,b;
  int s=0;
  scanf("%d%d",&a,&b);
  for(int i=1;i<=10000001;i++) check[i]=0;
  for(int i=1;i<=sqrt(10000001);i++) check[i*i]=1;
  for(int i=a ; i <=b ; i++) {
  	if(check[i]==1) s++;
  }
  for(int i=a ; i <=b ; i++) {
  	if(check[i]==1) printf("%d\n",i);
  }
 
}
