#include <stdio.h>

struct Point {
    double x;
    double y;
};

int samePoint(struct Point p1, struct Point p2) {
    return p1.x == p2.x && p1.y == p2.y;
}

int main() {
    struct Point p1 = {0, 0};
    struct Point p2 = {3, 4};
    struct Point p3 = {0, 0};
    if (samePoint(p1, p2)) {
        printf("p1 and p2 are the same point\n");
    } else {
        printf("p1 and p2 are different points\n");
    }
    if (samePoint(p1, p3)) {
        printf("p1 and p3 are the same point\n");
    } else {
        printf("p1 and p3 are different points\n");
    }
    return 0;
}