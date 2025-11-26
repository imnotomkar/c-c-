#include<stdio.h>
#include<math.h>
int main(){

int n;

printf("enter the number:");
scanf("%d",&n);

if(n % 2 == 0){
    printf("Number is even");
}
else{
    printf("Number is odd");
}

return 0;
}