#include<iostream>

using namespace std;

class Box{
    public:
    double l, b, h;

    void setDimensions(double length, double breadth, double height) {
        l = length;
        b = breadth;
        h = height;
    }

    double getvol() {
        return l * b * h;
    }
};

int main() {
    Box b1;
    b1.setDimensions(5.0, 3.0, 2.0);

    double volume = b1.getvol();
    cout << "Volume is: " << volume << endl;

    return 0;
    
}
