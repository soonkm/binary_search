#include <stdio.h>

int n;
int k;
int A[100000];
int i;
int x;

int p(int m){
  int i, sum;
  sum = 0;
  for(i = 0; i < n; i++){
    sum += (A[i] + m - 1) / m;
  }
  return sum <= k;
}



int main(){
  int i ;
  int lb = 0;
  int ub = 1000000000;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  while(ub - lb > 1){
      int m = (lb + ub)/2;
      if (p(m)) ub = m;
      else lb =m;    
   }
   printf("%d/n",ub); 
   return n;
}



