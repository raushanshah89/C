# include <stdio.h>
int main (){
    int r,h;
    printf("Enter the Radius of the Cylinder: ");
    scanf("%d",&r);
    printf("Enter the Height of the Cylinder: ");
    scanf("%d",&h);
    printf("The Area of the Cylinder is: %.2f\n", 3.14159 * r * r*h);
    return 0;
}