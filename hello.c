#include <stdio.h>

int main() {
    // Write C code here
    printf("Hello world\n");
    
    //C variables and print output
    int age;
    age = 34;
    printf("age\n");
    printf("%d\n", age);
    
    //Assigning one variable to another
    int height = 54;
    int width = 2;
    int area = height * width;
    printf("%d m2\n", area);
    
    //Declaring multiple variables at once
    int variable1=0, variable2 =2;
    int variable3=3, variable4= 4;
    printf ("%d, %d\n", variable1, variable2);
    printf ("%d, %d\n", variable3, variable4);
    
    //Playing with double and float
    double number1 = 78.43;
    float number2 = 34.90f; //the f is neccessary
    printf("%lf\n", number1);
    printf("%f\n", number2);
    printf("%.1f\n", number2);
    
    //Double and float with exponentials
    double expo = 3.5e2;
    printf("%.0lf\n", expo);

    //Getting user input 
    int user;
    printf("Input here: ");
    scanf("%d", &user);
    printf("Hi user%d\n", user);

    //Taking double user input
    char let;
    let = 'G';
    int passW;

    printf("Input pass; ");
    scanf("%d", &passW);
    
    //printf("Input Name; ");
   // scanf("%c", &let);

    printf("Your password; %d\n", passW); 
    printf("Hey, %c\n", let);

   //Taking multiple input
   int value1;
   double value2;

   printf("Input your values here; ");
   scanf("%d, %lf", &value1, &value2);
   printf("%d, %0.0lf", value1, value2);
    
    
    
    
    return 0;
}


