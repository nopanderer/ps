/**
 * Star 16
 * 10991
 */
#include <cstdio>

int main(){
  int n;
  int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n-1-i;j++) printf(" ");
    for(j=0;j<i+1;j++) printf("* ");
    printf("\n");
  }
  return 0;
}
