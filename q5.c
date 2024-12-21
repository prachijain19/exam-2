#include<stdio.h>

  int cube(int num){
    return(num);
  }
  void main(){
    int num,total;
    printf("enter the number:");
    scanf("%d",&num);
    total=num*num*num;
    printf("cube = %d",total);
    return 0;
  }
