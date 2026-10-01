#include <stdio.h>
int main(){ 
    int a;
    printf("enter marks(0-100)");
    scanf("%d",&a);
    a>30 && a<=100 ? printf("pass"):a>100 ? printf("not valid marks") : printf("fail");
    return 0;
}