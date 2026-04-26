#include <stdio.h>

// Function prototypes
int add(int a, int b);
int greaterOfTwo(int a, int b);
int greaterOfThree(int a, int b, int c);
int factorial(int n);
int isEven(int n);
int isLeapYear(int year);

int main() {
    int choice, num1, num2, num3, result;
    
    printf("=== Sky Vision College - C Practical ===\n");
    printf("Student: Amara Kallon | ID: SVC-EBK-0080\n\n");
    
    do {
        printf("\n--- MENU ---\n");
        printf("1. Add two numbers\n");
        printf("2. Greater of two numbers\n");
        printf("3. Greater of three numbers\n");
        printf("4. Factorial of a number\n");
        printf("5. Check Even/Odd\n");
        printf("6. Check Leap Year\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = add(num1, num2);
                printf("Sum = %d\n", result);
                break;
                
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = greaterOfTwo(num1, num2);
                if(num1 == num2)
                    printf("Both numbers are equal\n");
                else
                    printf("Greater = %d\n", result);
                break;
                
            case 3:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &num1, &num2, &num3);
                result = greaterOfThree(num1, num2, num3);
                printf("Greatest = %d\n", result);
                break;
                
            case 4:
                printf("Enter a number: ");
                scanf("%d", &num1);
                if(num1 < 0)
                    printf("Factorial not defined for negative numbers\n");
                else {
                    result = factorial(num1);
                    printf("Factorial = %d\n", result);
                }
                break;
                
            case 5:
                printf("Enter a number: ");
                scanf("%d", &num1);
                if(isEven(num1))
                    printf("%d is Even\n", num1);
                else
                    printf("%d is Odd\n", num1);
                break;
                
            case 6:
                printf("Enter a year: ");
                scanf("%d", &num1);
                if(isLeapYear(num1))
                    printf("%d is a Leap Year\n", num1);
                else
                    printf("%d is NOT a Leap Year\n", num1);
                break;
                
            case 0:
                printf("Exiting practical...\n");
                break;
                
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 0);
    
    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int greaterOfTwo(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int greaterOfThree(int a, int b, int c) {
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int isEven(int n) {
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

int isLeapYear(int year) {
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}
