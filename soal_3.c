#include <stdio.h>

int main() {
    int a;
    int b;
    int hasil;
    scanf("%d", &a);
    scanf("%d", &b);

    for(size_t i=a; i<=b; i++){

        hasil+=i;

    };

    printf("%d", hasil);

    return 0;
}