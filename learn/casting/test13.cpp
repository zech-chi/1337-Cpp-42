#include <iostream>
using namespace std;

int main() {
    int n = 10;
  
    // Store the address of number in nptr
    int* nptr = &n;

    // Reinterpreting the pointer as a char pointer
    double* doubleptr = reinterpret_cast<double*>(nptr);

    // Printing the memory addresses and values
    cout << "Integer Address: " << nptr << endl;
    cout << "double Address : " << doubleptr << endl;

    return 0;
}
