#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // #1
    std::cout << "Hello! Type x: ";
    int x;
    std::cin >> x;
    long int output1 = pow(x, 2) + pow(3 * x, 3) - 4;
    std::cout << "x^2 + (3x)^3 - 4 = " << std::showpos << output1 << std::endl;
    // #2
    std::cout << "Hello! Type a: ";
    unsigned int a;
    std::cin >> a;
    double output2 = 2 * abs(a - 3) - sqrt(a + 8);
    std::cout << std::fixed;
    std::cout.precision(3);
    std::cout << "2 * |a - 3| - sqrt(a + 8) = " << std::noshowpos << output2 << std::endl;
    // #3
    std::cout << "Hello! Type k: ";
    bool k;
    std::cin >> k;
    std::cout << "Hello! Type l: ";
    bool l;
    std::cin >> l;
    std::cout << "Hello! Type m: ";
    bool m;
    std::cin >> m;
    std::cout << "Hello! Type n: ";
    bool n;
    std::cin >> n;
    bool output3 = m != !(k || n) && !l;
    std::cout << "m xor not(k or n) and not l = " << std::boolalpha << output3 << std::endl;
    // #4
    std::cout << "Hello! Type b: ";
    unsigned short int b;
    std::cin >> b;
    unsigned short int output4 = 1 << b;
    std::cout << "(2 ^ b) in dec = " << output4 << " in oct = " << std::oct << output4 << std::endl;
    // #5
    std::cout << "Hello! Type c: ";
    unsigned short int c;
    std::cin >> c;
    std::cout << "Hello! Type d: ";
    unsigned short int d;
    std::cin >> d;
    std::cout << "Hello! Type e: ";
    unsigned short int e;
    std::cin >> e;
    std::cout << "Hello! Type f: ";
    unsigned short int f;
    std::cin >> f;
    short int output5 = ~f & ~(c ^ d) | e;
    std::cout << "not f and not(c xor d) or e = " << std::internal << std::setw(6) << std::setfill('0') << std::hex << std::showbase << std::uppercase << output5 << std::endl;
    return 0;
}
