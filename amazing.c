#include<stdio.h>
int main(){
    int firstNumber=100;
    int secondNumber=20;
    int add;
    int sub;
    int mul;
    float div;
    int mod;

    add=firstNumber+secondNumber;
    sub=firstNumber-secondNumber;
    mul=firstNumber*secondNumber;
    div=firstNumber/secondNumber;
    mod=firstNumber%secondNumber;

    printf("The sum is %d\n", add);
    printf("The sub is %d\n", sub);
    printf("The mul is %d\n",mul);
    printf("The div is %f\n",div);
    printf("The mod is %d\n",mod);
    return 0;
}