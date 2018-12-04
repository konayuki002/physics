#include <stdio.h>
#include <math.h>

static double up = 3.14;
static double down = 0;

static double dx = 0.01;

double sin2(double x){
    return pow((sin(x)), 2);
}

int main(void){
    double ans;
    for(double x = 0; x <= up; x += dx){
        ans += sin2(x) * dx;
    }
    printf("answer: %lf", ans);
}