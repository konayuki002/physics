#include <stdio.h>
#include <math.h>

static int N = 1;
static int MAX = 100;

double tailor_atan(double x){
    double ret = 0;
    for(int i = 0; i <= N; i++){
        ret += (i & 0x1 == 0x1 ? -1: 1) / (double)(2*i+1) * pow(x, 2*i+1);
    }
    return ret;
}

int main(void){
    double pi = atan(1.0) * 4;
    //printf("math.h atan(1.0) = %lf\n", pi);
    //printf("N: difference\n");
    for(N = 1; N<=MAX; N++){
        double pi_ = tailor_atan(1) * 4;
        printf("%d %lf\n", N, pi_ - pi);
    }
}