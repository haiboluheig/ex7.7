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

C& C::operator++() {
   //this->x = this->x + 1;
    x++;
    return *this;
}

C C::operator++(const int a) {
    C temp=*this;
    x++;
    return temp;
}

C& C::operator+=(const C& rhs) {
    x = x + rhs.x;
    return *this;
}

bool operator==(const C& a,const C& b) {
  /*  if (a.x == b.x)
        return true;
    else
        return false;*/
    return a.x==b.x;
}

bool operator!=(const C& a,const C& b) {

        return !(a.x==b.x);
}

ostream& operator<<(ostream& lhs, const C& rhs) {
    lhs << "n = " << rhs.x;
    return lhs;
}
