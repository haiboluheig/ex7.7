//
// Created by czeller on 2/22/18.
//

#include "point.h"

Point::Point(int x, int y) : x(x), y(y) {}

void Point::deplacer(int dx, int dy) {
    x += dx;
    y += dy;

}

int Point::abscisse() const {
    return x;
}

int Point::oordonne() const {
    return y;
}

Point Point::operator+(const Point &point) const {
    return Point(x + point.x, y + point.y);
}
