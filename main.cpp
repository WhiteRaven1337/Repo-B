#include<iostream>
#include<std.h>
using namespace std;
    int main() {
      int a, b;
      cout << "Enter two numbers A and B: \n";
      cin >> a >> b;
      cout << "A + B = " << (a+b) << "\n";
      cout << "A - B = " << (a-b) << "\n";
      cout << "A * B = " << (a*b) << "\n";
      cout << "A / B = " << (a/b) << "\n";
      cout << "A % B = " << (a%b) << "\n";
      cout << "A | B = " << (a|b) << "\n";
      cout << "A ^ B = " << (a^b) << "\n";
      cout << "A & B = " << (a&b) << "\n";
      cout << "A << B = " << (a<<b) << "\n";
      cout << "A >> B = " << (a>>b) << "\n";

      cin.get();
    }
