# include <stdio.h>
int main (){
    int P,R ,T;
    float SI;
    printf("enter the principle:");
    scanf("%d",&P);
    printf("enter the rate of interest:");
    scanf("%d",&R);
    printf("enter the time in years:");
    scanf("%d",&T);
    SI = float(P*R*T)/100;
    printf("Simple Interest = %.2f",SI);
    return 0;

}