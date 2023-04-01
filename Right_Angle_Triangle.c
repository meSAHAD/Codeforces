#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);
        if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
