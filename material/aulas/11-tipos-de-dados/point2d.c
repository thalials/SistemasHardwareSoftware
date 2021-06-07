#include "point2d.h"
#include <stdlib.h>

struct _p {
    double x, y;
};

typedef struct _p Point2D;


Point2D *point2D_new(double x, double y) {
    Point2D *p = malloc(sizeof(Point2D));
    p->x = x;
    p->y = y;
    return p;
}


void point2D_destroy(Point2D *p) {
    free(p);
}

double point2D_get_x(Point2D *p) {
    return p->x; 
}

double point2D_get_y(Point2D *p) {
    return p->y;
}

Point2D *point2D_add(Point2D *p1, Point2D *p2) {
    Point2D *new_point = point2D_new(0, 0);
    new_point->x = p1->x + p2->x;
    new_point->y = p1->y + p2->y;

    return new_point;
}

double point2D_theta(Point2D *p1, Point2D *p2) {
    double theta = (p1->y - p2->y)/(p1->x - p2->x);
    return theta;
}

Point2D *point2D_scale(Point2D *p, double s) {
    Point2D *scale = point2D_new(0,0);

    scale->x = p->x * s;
    scale->y = p->y * s;

    return scale;
}

