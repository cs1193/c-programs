#include <stdio.h>

int main() {
    int celsius;

    printf("Celsius\tFarenheit\n\n");
    for(celsius = 0; celsius <= 300; celsius = celsius + 20)
        printf("%6d\t%3d\n", celsius, ((celsius * 9)/5) + 32);
}
