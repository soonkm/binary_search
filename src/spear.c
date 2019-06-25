#include <stdio.h>

int n;
int k;
int A[100000];
int i;
int sum;

int p(int x){
    for( i = 0;i <=n;i = i + 1){
    sum = sum + A[i]/x;}
    return sum <=
    k;}

int main(){
  int i;
  int lb  = 1000000000;
  int ub = 0;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
   while(lb - ub > 1){
      int m = (lb + ub)/2;
      if (p(m)) lb = m;
      else ub =m;    
   }
   printf("%d/n",ub); 
  return n;
}
