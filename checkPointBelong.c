#include <stdio.h>

struct Point {
    double x;
    double y;
};

struct Line {
    struct Point start;
    struct Point end;
};

int point_on_line(struct Point p, struct Line line) {
    double slope = (line.end.y - line.start.y) / (line.end.x - line.start.x);
    double y_intercept = line.start.y - slope * line.start.x;
    double expected_y = slope * p.x + y_intercept;
    return p.y == expected_y;
}

int main() {
    struct Line line = {{0, 0}, {3, 4}};
    struct Point p;
    printf("Enter a point in the form x,y: ");
    scanf("%lf,%lf", &p.x, &p.y);
    if (point_on_line(p, line)) {
        printf("Point (%.1f, %.1f) belongs to the line from (%.1f, %.1f) to (%.1f, %.1f)\n", 
               p.x, p.y, line.start.x, line.start.y, line.end.x, line.end.y);
    } else {
        printf("Point (%.1f, %.1f) does not belong to the line from (%.1f, %.1f) to (%.1f, %.1f)\n", 
               p.x, p.y, line.start.x, line.start.y, line.end.x, line.end.y);
    }
    return 0;
}