#include<stdio.h>

int main(){
    int marks[4] = {1, 2, 3, 5};
    int i; // Declare the variable i
    for(i = 0; i < 4; i++){ // Loop should run from 0 to 3
        printf("Marks[%d] = %d\n", i, marks[i]);
    }
    return 0;
}
