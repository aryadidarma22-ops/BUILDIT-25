#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
     float jarak, waktu, kecepatan;
    scanf("%f %f", &jarak, &waktu);
    kecepatan = jarak / waktu;
    printf("%.3f\n", kecepatan);

    return 0;
}
