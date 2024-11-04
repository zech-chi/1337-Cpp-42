#include <string>
#include <iostream>
using namespace std;

class MathError
{
    private:
        string message;
    public:
        MathError( const string &s ) : message(s) {}
        const string &getMessage() const {
            return message;
        }
};


double calc( int a, int b ) throw(MathError) {
    if (b < 0) {
        throw MathError("Denominator is negative!");
    } else if (b == 0) {
        throw MathError("Division by 0!");
    }
    return ((double)a / b);
}

int main() {
    int x, y;
    bool flag = false;
    do {
        try {
            cout << "Enter two Positive Intergers: ";
            cin >> x >> y;
            cout << x << " / " << y << " = " << calc( x, y ) << "\n";
            flag = true;
        }
        catch ( MathError& err) {
            cerr << err.getMessage() << endl;
        }
    } while (!flag);

    return (0);
}