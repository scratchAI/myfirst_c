#include <stdio.h>
#include <math.h>
int main() {
    int count = 0;
    while (count < 5) {
        printf("計數：%f\n", sqrt(count));
        count++;
    }
    return 0;
}