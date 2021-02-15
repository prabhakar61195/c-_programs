#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int x;
    long y;
    char z;
    double k;
    float l; 
    scanf("%d %ld %c%f%lf",&x,&y,&z,&l,&k);
    // Complete the code.
printf("%d\n%ld\n%c\n%0.3f\n%0.9lf\n",x,y,z,l,k);

    return 0;
}
