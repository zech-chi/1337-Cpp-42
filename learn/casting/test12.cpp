#include <iostream>

class B {
public:
    virtual ~B() {}  // Make B polymorphic by adding a virtual destructor
};

class D : public B {
public:
    // Additional functionality for D can go here
};

void f(B* pb, D* pd) {
   // Safe downcast using dynamic_cast
   D* pd2 = dynamic_cast<D*>(pb);   // Checks at runtime if pb is of type D
   if (pd2) {
       std::cout << "pb is a pointer to D" << std::endl;
   } else {
       std::cout << "pb is not a pointer to D" << std::endl;
   }

   // Safe conversion, B* can always point to D, so static_cast is fine
   B* pb2 = static_cast<B*>(pd);   // Safe because D is a subclass of B
}

int main() {
    B *pb = new B;
    D *pd = new D;

    // Call function with B and D pointers
    f(pb, pd);

    // Properly delete objects
    delete pb;  // Delete the B object
    delete pd;  // Delete the D object

    return 0;
}
