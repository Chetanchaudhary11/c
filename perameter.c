#include <stdio.h>
 
int main(){
    float length, width, area;
    printf("Enter length of Rectangle\n");
    scanf("%f", &length);
    printf("Enter width of Rectangle\n");
    scanf("%f", &width);
    area = length * width;
    printf("Area of Rectangle : %0.4f\n", area);
    return 0;
}
