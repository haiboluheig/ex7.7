
//
// Created by czeller on 2/22/18.
//

#ifndef EX7_5_POINT_H
#define EX7_5_POINT_H


class Point {
    int x;
    int y;

public:
    Point operator + (const Point& point) const;
    Point(int x=0, int y=0);
    void deplacer(int dx, int dy);
    int abscisse() const;
    int oordonne() const;
};


#endif //EX7_5_POINT_H
