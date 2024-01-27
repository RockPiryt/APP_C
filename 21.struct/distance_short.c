#include <stdio.h>
#include <math.h>

typedef struct {
    double X;
    double Y;
} point;

point readPoint() {
    point p;
    scanf("%lf %lf", &p.X, &p.Y);
    return p;
}

double distance(point a, point b) {
    return sqrt((a.X - b.X) * (a.X - b.X) + (a.Y - b.Y) * (a.Y - b.Y));
}

int main() {
    point a = readPoint();
    point b = readPoint();

    printf("%.2f\n", distance(a, b));

    return 0;
}
