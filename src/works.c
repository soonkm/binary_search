#include <stdio.h>

int n;
int k;
int A[100000];
int max;

int p(int x){
    i = 0;
    for( i = 0;i <=n;i = i + 1){
        if (A[i] < A[i+1])max = A[i+1];
        else max = A[i];
    }
    }

int main(){
  int i;
  int lb = 10000;
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
   printf("%d/n",lb); 
   return n;
}