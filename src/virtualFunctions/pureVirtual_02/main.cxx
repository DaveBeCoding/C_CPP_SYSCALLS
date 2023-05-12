#include <iostream>

class Shape {
public:
    virtual double area() const = 0;  // Pure virtual function
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14 * radius * radius;
    }
};

int main() {
    Shape* shape = new Circle(5.0);
    std::cout << "Area: " << shape->area(); 
    delete shape;
    return 0;
}

