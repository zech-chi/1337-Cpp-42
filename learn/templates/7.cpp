#include <iostream>

/*
    Specializing Templates for classes
*/

using namespace std;

template <typename T>
class Test {
  private:
    T var;
  public:
    Test(T value) : var(value) {}
    void printValue() const {
      std::cout << "Value: " << var << std::endl;
    }
    T getValue() const {
      return var;
    }
};

template <>
class Test<int> {
  private:
    int var;
  public:
    Test(int value) : var(value) {}
    void printValue() const {
      std::cout << "Value: " << var << std::endl;
    }
    int getValue() const {
      return var;
    }

    void nextInt() {
      std::cout << "The next greatest integer of " << var << " is " << var + 1 << "\n";
    }

};

int main(){

    Test<int> integer(7);
    integer.printValue();
    integer.nextInt();

    Test<string> str("zech-chi");
    str.printValue();
    // str.nextInt();

    return 0;
}