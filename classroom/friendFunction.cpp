#include<iostream>
using namespace std;

class Box {
    double width, length, height;

public:
    friend void setWidth(Box& box, double w);
    friend void setLength(Box& box, double l);
    friend void setHeight(Box& box, double h);
    friend void print(Box box);
    friend double calculateVolume(Box box);
};

void setWidth(Box& box, double w) {
    box.width = w;
}

void setLength(Box& box, double l) {
    box.length = l;
}

void setHeight(Box& box, double h) {
    box.height = h;
}

void print(Box box) {
    cout << "Width: " << box.width << endl;
    cout << "Length: " << box.length << endl;
    cout << "Height: " << box.height << endl;
}

double calculateVolume(Box box) {
    return box.width * box.length * box.height;
}

int main() {
    Box box;
    setWidth(box, 10.5);
    setLength(box, 5.0);
    setHeight(box, 3.0);
    print(box);
    double volume = calculateVolume(box);
    cout << "Volume of the box: " << volume << endl;
    return 0;
}
