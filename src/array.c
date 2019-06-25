#include <stdio.h>

int n;
int k;
int m;
int A[100000];


int main(){
  int i;
 
  int ub = 0;
    scanf("%d%d", &n, &k);
   int lb = n;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  while (lb - ub > 1){
      int m = (lb +ub)/2;
      if (A[m] >= k) lb = m;
      else ub = m;
   }
   printf("%d/n",lb);
   return n;
}