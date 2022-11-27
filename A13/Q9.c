#include <stdio.h>
int main()
{
    float a, b, c;
    float root1, root2, imaginary, discr;
    printf("Enter value of 'a' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &a);
    printf("Enter value of 'b' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f",&b);
    printf("Enter values of 'c' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f",&c);

    
    discr = (b * b) - (4 * a * c);
    switch(discr > 0)
    {
    case 1:
        //discriminent +
        root1 = (-b + sqrt(discr)) / (2 * a);
        root2 = (-b - sqrt(discr)) / (2 * a);
        printf("Two distinct and real roots exists: %.2f and %.2f",
               root1, root2);
        break;
    case 0:
        // If discr - or 0
        switch(discr < 0)
        {
        case 1:
            // If discr is -
            root1 = root2 = -b / (2 * a);
            imaginary = sqrt(-discr) / (2 * a);
            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                   root1, imaginary, root2, imaginary);
            break;
        case 0:
            // If discr is 0
            root1 = root2 = -b / (2 * a);
            printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
            break;
        }
    }
    return 0;
}

