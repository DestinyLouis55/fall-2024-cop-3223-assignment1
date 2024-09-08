#include <stdio.h>
#include <math.h>

#define PI 3.14159
double askForUserInput(const char *coordinate) {
    double value;
    printf("Enter %s: ", coordinate);
    scanf("%lf", &value);
    return value;
}

 double calculateDistance();
 double calculatePerimeter();
 double calculateArea();
 double calculateWidth();
 double calculateHeight();

int main(int argc, char **argv) {
 
 calculateDistance();
 calculatePerimeter();
 calculateArea();
 calculateWidth();
 calculateHeight();
 
 return 0;   
}

double calculateDistance() {
    double x1 = askForUserInput("x1");
    double y1 = askForUserInput("y1");
    double x2 = askForUserInput("x2");
    double y2 = askForUserInput("y2");
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    double distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    printf("The distance between the points is %lf\n", distance);
    return distance;
}

double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * (distance / 2);
    printf("The perimeter of the city encompassed is %lf\n", perimeter);
    return 2.0; // slightly difficult
}

double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * (radius * radius);
    printf("The area of the city encompassed is %lf\n", area);
    return 4.0; //difficult
}

double calculateWidth() {
    double x1 = askForUserInput("x1");
    double x2 = askForUserInput("x2");
    printf("Point #1 entered: x1 = %lf\n", x1);
    printf("Point #2 entered: x2 = %lf\n", x2);
    double width = x2 - x1;
    printf("The width of the city encompassed is %lf\n", width);
    return 2.0; // slightly difficult
}   

double calculateHeight() {
    double y1 = askForUserInput("y1");
    double y2 = askForUserInput("y2");
    printf("Point #1 entered: y1 = %lf\n", y1);
    printf("Point #2 entered: y2 = %lf\n", y2);
    double height = y2 - y1;
    printf("The height of the city encompassed is %lf\n", height);
    return 1.0; // not difficult
}
