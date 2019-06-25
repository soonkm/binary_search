#include <stdio.h>

int n;
int k;
int A[100000];
int i;
int sum;
int x;

int p(int x){
    i = 0;
    for( i = 0;i <=n;i = i + 1){
    sum = sum + A[i]/x;}
    return sum <= k;}



int main(){
  int i ;
  int ub = 0;
  int lb = 1000000000;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  while(lb - ub > 1){
      int m = (lb + ub)/2;
      if (p(m)) lb = m;
      else ub =m;    
   }
   printf("%d/n",lb); 
   return n;
}



