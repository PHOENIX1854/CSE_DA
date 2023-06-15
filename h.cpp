#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    Complex(float r = 0, float i = 0) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(4.5, 2.5);
    Complex c2(3.5, 6.5);
    Complex c3 = c1 + c2;

    c3.display(); 

    return 0;
}