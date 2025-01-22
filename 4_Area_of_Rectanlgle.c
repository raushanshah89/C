# include <stdio.h>
int main(){
    int l, b;
    printf("Enter the length of rectangle\n");
    scanf("%d", &l);
    printf("Enter the breadth of rectangle\n"); 
    scanf("%d", &b);
    printf("Area of rectangle is %d\n", l*b);
    return 0;  
    // Add your code here to calculate and display the area of a rectangle using the given length and breadth.
    // Example:
    // Enter the length of rectangle: 5
    // Enter the breadth of rectangle: 3
    // Area of rectangle is 15
    // Output: Area of rectangle is 15
    // Note: You can use printf() function to display the result.
    // You should also handle the case when the user enters invalid input (non-integer values) using scanf() function.
    // Example:
    // Enter the length of rectangle: 5.5
    // Enter the breadth of rectangle: 3
    // Invalid input. Please enter integer values.
    // Output: Invalid input. Please enter integer values.
    // Note: You can use a loop or conditional statement to handle this scenario.
    // You can add any additional requirements or constraints as per your project requirements.
}