#include <stdio.h>
#include <math.h>

struct Point 
{
    double x;
    double y;
};

double distance(struct Point p1, struct Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    struct Point p1 = {1, 1};
    struct Point p2 = {2, 2};
    double dist = distance(p1, p2);
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.2f\n", 
           p1.x, p1.y, p2.x, p2.y, dist);
    return 0;
}