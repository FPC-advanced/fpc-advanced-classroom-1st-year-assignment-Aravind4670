#include<stdio.h>

void input(float *base, float *height) {
    printf("Enter height and base: ");
    scanf("%f %f", base, height);
}

void find_area(float base, float height, float *area) {
    *area = 0.5 * base * height;
}

void output(float base, float height, float area) {
    printf("Area of the triangle with base %.2f and height %.2f is %.2f\n", base, height, area);
}

int main() {
    float h, b, area;
    input(&h, &b);
    find_area(b, h, &area);
    output(h, b, area);
    return 0;
}
