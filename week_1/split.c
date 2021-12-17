#include <stdio.h>

int main()
{
    double num;
    printf("Please enter a real number: ");
    scanf("%lf", &num);
    printf("The integer part is %d\n", (int)num );
    printf("The remaining fraction is %lf\n", (num-(int)num));
    return 0;
}