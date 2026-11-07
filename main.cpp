#include <stdio.h>
int main(){
  char arr[10];
  for(int i=0;i<10;i++){
    scanf("%c",&arr[i]);
    fflush(stdin);
  }
  for(int i=0;i<10;i++){
    printf("%c",arr[i]);
  }
}