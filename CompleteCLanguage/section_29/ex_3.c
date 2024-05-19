#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    float x;
    float y;
}Point;


void printPoint(Point p0)
{
    printf("Your x and y coordinate: (%.2f, %.2f)\n", p0.x, p0.y);

}

Point getPointInput()
{
    Point p1;
    printf("Enter coordinate x: ");
    scanf("%f", &p1.x);
    printf("Enter coordinate y: ");
    scanf("%f", &p1.y);
    return p1;
}

int main()
{
    Point house_coordinate;
    house_coordinate = getPointInput();
    printPoint(house_coordinate);

    return 0;
}