#include<stdio.h>

int main() {
int m1,m2,m3,m4,m5,total;
float percentage;

printf("Enter the marks 1:");
scanf("%d",&m1);
printf("Enter the marks 2:");
scanf("%d",&m2);
printf("Enter the marks 3:");
scanf("%d",&m3);
printf("Enter the marks 4:");
scanf("%d",&m4);
printf("Enter the marks 5:");
scanf("%d",&m5);

total=m1+m2+m3+m4+m5;

printf("the total marks out of 500 is :%d\n",total);

percentage=(total*100.0)/500;

printf("the percentage is:%.1f\n",percentage);

if(percentage>=75){

    printf("grade:first class\n");
}
else if(percentage>=60){
    
    printf("grade:second class\n");
}
else if(percentage>=40){
    
    printf("grade: third class\n");
}
else if (percentage>=35){
    
    printf("grade:fail\n");
}

return 0;
}