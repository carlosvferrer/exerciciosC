#include <stdio.h>

float convert(float c);

int main() {
    float temp_f, temp_c;
    printf("Temperatura em Celsius: ");
    scanf("%f", &temp_c);
    temp_f = convert(temp_c);
    printf("%.1fC is %.1fF\n", temp_c, temp_f);
    return 0;
}

float convert(float c) {
    float t;

    t = (c * 1.8) + 32;
    return(t);
}
