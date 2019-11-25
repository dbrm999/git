#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double x;
    double result = 0;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter x:");
    scanf("%lf", &x);
    for(int i = 1; i <= n; i++)
    {
        double znam = 1;
        double chys = pow(x,i);
        for(int ii = i; ii > 1; ii--)
            znam *= ii;
        result += chys/znam;
    }
    printf("%d\n", result);
    return 0;
}
