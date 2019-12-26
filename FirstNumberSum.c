#include <stdio.h>
int main()
{
    int number, counter, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // for loop terminates when num is less than count
    for(counter = 1; counter <= number; ++counter)
    {
        sum += counter;
    }

    printf("Sum = %d", sum);

    return 0;
}
