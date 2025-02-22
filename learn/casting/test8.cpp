// dynamic_cast_8.cpp
// compile with: /GR /EHsc
#include <stdio.h>
#include <iostream>

struct A {
    virtual void test() {
        std::cout << ("in A\n");
   }
};

struct B : A {
    virtual void test() {
        std::cout << ("in B\n");
    }

    void test2() {
        std::cout << ("test2 in B\n");
    }
};

struct C : B {
    virtual void test() {
        std::cout << ("in C\n");
    }

    void test2() {
        std::cout << ("test2 in C\n");
    }
};

void Globaltest(A& a) {
    try {
        C &c = dynamic_cast<C&>(a);
        std::cout << ("in GlobalTest\n");
    }
    catch(std::bad_cast) {
        std::cout << ("Can't cast to C\n");
    }
}

int main() {
    A *pa = new C;
    A *pa2 = new B;

    pa->test();

    B * pb = dynamic_cast<B *>(pa);
    if (pb)
        pb->test2();

    C * pc = dynamic_cast<C *>(pa2);
    if (pc)
        pc->test2();
    else {
        std::cerr << "C * pc = dynamic_cast<C *>(pa2) failed\n";
    }

    C ConStack;
    Globaltest(ConStack);

   // fails because B knows nothing about C
    B BonStack;
    Globaltest(BonStack);
}