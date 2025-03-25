#include<stdio.h>

int main(){
    int sal=0;
    printf("Enter your salary: ");
    scanf("%d",&sal);
    int allow= (40*sal)/100;
    int rent =(20*sal)/100;
    printf("This is your salary: %d\n ",sal+allow+rent);

return 0;
}