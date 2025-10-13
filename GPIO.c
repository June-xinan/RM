#include<stdio.h>
struct GPIO1{
    int GPIO_Speed;
};
enum GPIO2{
    GPIO_Speed_2MHz,
    GPIO_Speed_10MHz,
    GPIO_Speed_50MHz,
};
void  GPIO_StryctureInit(struct GPIO1*ptr){
    ptr->GPIO_Speed=GPIO_Speed_2MHz;
}
int main(){
    struct GPIO1 S;
    GPIO_StryctureInit(&S);
    
    printf("GPIO_Speed=%d",S.GPIO_Speed );

    return 0;
}