#include <stdio.h>

struct Point {
    double x;
    double y;
};

struct Line {
    struct Point start;
    struct Point end;
};

struct Point midpoint(struct Line line) {
    double x_mid = (line.start.x + line.end.x) / 2;
    double y_mid = (line.start.y + line.end.y) / 2;
    struct Point mid = {x_mid, y_mid};
    return mid;
}

int main() {
    struct Line line = {{0, 0}, {3, 4}};
    struct Point mid = midpoint(line);
    printf("Midpoint of line from (%.1f, %.1f) to (%.1f, %.1f) is (%.1f, %.1f)\n", 
           line.start.x, line.start.y, line.end.x, line.end.y, mid.x, mid.y);
    return 0;
}