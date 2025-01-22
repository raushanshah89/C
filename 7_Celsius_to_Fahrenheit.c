#include <stdio.h>
int main(){
    int c;
    printf("Enter Celsius: ");
    scanf("%d", &c);
    printf("\n Fahrenheit: %f",c*1.8+32);
    return 0;
}