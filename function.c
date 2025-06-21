
#include<stdio.h>sss
void add(int a,int b){
  printf("%d\n",a+b);
}
void sub(int a,int b){
    printf("%d\n",a-b);
}
void gh(int p){
    for(int i=1;i<=10;i++){
        printf("%d \n",i*p);
    }
}
void h(int f){
    for(int i=10;i>=1;i--){
        printf("%d \n",i*f);
    }
}
void mult(int a,int b){
    printf("%d\n",a*b);
    gh(a);
    h(a);
}


int main(){
    int a,b; 
      printf("enter first your no");
    scanf("%d",&a);
    printf("enter second your no");
    scanf("%d",&b);
    add(a,b);
    sub(a,b);
    mult(a,b);
   // gh(a);
//     for(int i=1;i<=10;i++){
//        printf("%d\n",i*a);
//   }
  
}