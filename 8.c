#include <stdio.h>
#include <math.h>

int trigonomericRatios();
int main()
{

    trigonomericRatios();
    return 0;
}

int trigonomericRatios()
{

    double angle = 0;
    double sinValue = 0;
    double cosValue = 0;
    double tanValue = 0;

    printf("Enter Angle in Radians: ");
    scanf("%lf", &angle);
    sinValue = sin(angle);
    cosValue = cos(angle);
    tanValue = tan(angle);

    printf("Sin %.4lf : %.4lf\nCos %.4lf : %.4lf\nTan %.4lf : %.4lf\n", angle, sinValue, angle, cosValue, angle, tanValue);
    return 0;
}
