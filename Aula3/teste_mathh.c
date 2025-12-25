#include <stdio.h>
#include <math.h>

int main()
{
    float val1, res_ceil, res_floor;
    printf("Entre com valor float: ");
    scanf("%f", &val1);
    res_ceil = ceil(val1);
    res_floor = floor(val1);
    printf("val1 = %f\n", val1);
    printf("Resultado do ceil val1 %f\n", res_ceil);
    printf("Resultado do floor val1 %f\n", res_floor);
    printf("Resultado do round val1 %f\n", round(val1));

    return 0;
}
