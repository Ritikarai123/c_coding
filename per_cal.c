#include<stdio.h>

int main(){
    int s1,s2,s3,s4,s5=0;
    printf("Enter your 5 subjects marks: ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    printf("Total Marks obtained: %d\n",s1+s2+s3+s4+s5);
    float per=(s1+s2+s3+s4+s5)/5;
    printf("Percentage Obtained: %f\n",per);
    return 0;
}