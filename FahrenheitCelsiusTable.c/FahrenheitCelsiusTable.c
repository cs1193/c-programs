#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Farenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main() {

    /* While Statement */
    int fahr, celsius;
    float f_fahr, f_celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    f_fahr = lower;


    printf("\n\n While Statement \n\n");
    printf("Type\tFahrenheit\tCelsius\n");
    while(fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        f_celsius = 5 * (f_fahr-32) / 9;
        printf("Integer\t%d\t%d\n", fahr, celsius);
        printf("Float\t%3.1f\t%6.1f\n", f_fahr, f_celsius);
        printf("\n\n");
        fahr = fahr + step;
        f_fahr = f_fahr + step;
    }

    /* For Statement */
    printf("\n\n For Statement \n\n");
    int for_fahr;

    for (for_fahr = 0; for_fahr <= 300; for_fahr = for_fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (for_fahr-32));

    /* Symbolic Constants */
    printf("\n\n Symbolic Constants For Statement \n\n");
    int scfor_fahr;
    for (scfor_fahr = LOWER; scfor_fahr <= UPPER; scfor_fahr = scfor_fahr + STEP)
        printf("%3d %6.1f\n", scfor_fahr, (5.0/9.0) * (scfor_fahr-32));
}
