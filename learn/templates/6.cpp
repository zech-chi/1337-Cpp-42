#include <iostream>

/*
    Specializing Templates for functions
*/

using namespace std;

template<typename T>
void compare(T val1, T val2) {
  if (val1 == val2) {
    cout << "Values are equal!" << endl;
  } else {
    cout << "Values are not equal!" << endl;
  }
}

template<>
void compare(double val1, double val2) {
  if (val1 > val2) {
    cout << "Value 1 is greater than value 2!" << endl;
  } else {
    cout << "Value 1 is not greater than value 2!" << endl;
  }
}


int main() {
    compare(3, 5);
    compare(4.7, 4.2);
    compare("zech", "zech-chi");
    compare("zech-chi", "zech-chi");
    
    return 0;
}
