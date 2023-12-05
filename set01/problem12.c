#include <stdio.h>

struct _complex {
    float r, im;
};
typedef struct _complex Complex;

int get_n() {
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() {
    Complex a;
    printf("Enter the real part: ");
    scanf("%f", &a.r);
    printf("Enter the imaginary part: ");
    scanf("%f", &a.im);
    return a;
}

void input_n_complex(int n, Complex c[n]) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter complex number %d:\n", i + 1);
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) {
    Complex sum;
    sum.r = a.r + b.r;
    sum.im = a.im + b.im;
    return sum;
}

Complex add_n_complex(int n, Complex c[n]) {
    Complex result = {0, 0};
    int i;
    for (i = 0; i < n; i++) {
        result = add(result, c[i]);
    }
    return result;
}

void output(Complex result) {
    printf("Sum: %f + %fi\n", result.r, result.im);
}

int main() {
    int n = get_n();
    Complex a[n];
    input_n_complex(n, a);
    Complex b = add_n_complex(n, a);
    output(b);
    return 0;
}
