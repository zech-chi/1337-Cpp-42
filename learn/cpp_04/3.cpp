#include <iostream>

// Abstract base class
class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual double area() const = 0; // Another pure virtual function
};

// Derived class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() const {
        std::cout << "Drawing a circle" << std::endl;
    }

    double area() const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape* myShape = new Circle(5.0);
    myShape->draw(); // Output: Drawing a circle
    std::cout << "Area: " << myShape->area() << std::endl; // Output: Area: 78.53975

    delete myShape;
    return 0;
}
