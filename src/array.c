#include <stdio.h>

int n;
int k;
int m;
int A[100000];


int main(){
  int i;
 
  int lb = 0;
    scanf("%d%d", &n, &k);
  int ub = n;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  while (ub - lb > 1){
      int m = (lb +ub)/2;
      if (A[m] >= k) ub = m;
      else lb = m;
   }
   printf("%d\n",ub);
   return 0;
}