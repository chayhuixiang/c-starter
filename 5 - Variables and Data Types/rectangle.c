#include <stdio.h>

int main(){
    double width;
    double height;
    double perimeter;
    double area;

    printf("Enter the width of the rectangle: ");
    scanf("%lf",&width);
    printf("Enter the height of the rectangle: ");
    scanf("%lf",&height);

    perimeter = 2*(width+height);
    area = width*height;
    printf("Height: %lf, Width: %lf, Perimeter: %lf\n",height,width,perimeter);
    printf("Height: %lf, Width: %lf, Area: %lf\n",height,width,area);
}