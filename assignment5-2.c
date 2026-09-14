#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, root1, root2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("Invalid! a cannot be 0.");
    }
    else
    {
        D = b * b - 4 * a * c;

        printf("Discriminant = %.2f\n", D);

        if (D > 0)
        {
            root1 = (-b + sqrt(D)) / (2 * a);
            root2 = (-b - sqrt(D)) / (2 * a);

            printf("Roots are real and distinct.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        }
        else if (D == 0)
        {
            root1 = -b / (2 * a);

            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
        }
        else
        {
            printf("Roots are imaginary.");
        }
    }

    return 0;
}