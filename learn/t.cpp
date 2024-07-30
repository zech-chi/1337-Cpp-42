
#include <iostream>

class A {
  public:
    const int a;

    A(int aa);
};

A::A(int aa) : a(aa)
{

}

int main() {
  A   a1(4);

  std::cout << a1.a << std::endl;
}
