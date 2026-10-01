// #include <stdio.h>
// int main(){
//     int a;
//     printf("enter marks");
//     scanf("%d",&a);
//     if(a>30 && a<=100){
//         printf("pass");
//     }
//     else if(a>100){
//         printf("wrong input plz enter correct marks");
//     }
//     else{
//         printf("fail");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){ 
    int a;
    printf("enter marks(0-100)");
    scanf("%d",&a);
    a>30 && a<=100 ? printf("pass"):a>100 ? printf("not valid marks") : printf("fail");
    return 0;
}