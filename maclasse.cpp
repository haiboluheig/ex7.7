#include"maclasse.h"
using namespace std;

C::C(int x) : x(x) {
}

C C::operator+(const C& a) const {
    C temp;
    temp.x = x + a.x;
    return temp;
}

C C::operator=(const C& a) {
    this->x = a.x;
}

C C::operator++() {
    this->x = this->x + 1;
    return *this;
}

C C::operator++(const int a) {
    C temp;
    temp.x = this->x;
    this->x = this->x + a + 1;
    return temp;
}

C operator+=(C& a, const C& b) {
    a = (a + b);
}

bool operator==(C& a, C& b) {
    if (a.x == b.x)
        return true;
    else
        return false;
}

bool operator!=(C& a, C& b) {
    if (a == b)
        return false;
    else
        return true;
}

ostream& operator<<(ostream& lhs, const C& rhs) {
    lhs << "n = " << rhs.x;
    return lhs;
}