// 2. Program to find largest number from 3 numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
    std::cout << "largest is" << a <<"\n" ;
    }
    else if (b >= a && b >= c) {
    std::cout << "largest is " << b << "\n";
    }
    else {
    std::cout << "largest is " << c <<"\n" ;
    }

    return 0;
}

