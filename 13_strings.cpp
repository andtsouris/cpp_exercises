#include <iostream>
#include <string>
using namespace std;

int main() {
	std::string a;
    std::string b;
    char tmp_char;
    
    std::cin >> a;
    std::cin >> b;
    
    std::cout << a.size() << " " << b.size() << "\n";
    std::cout << a+b << "\n";
    
    tmp_char = a[0];
    a[0] = b[0];
    b[0]=tmp_char;
    std::cout << a << " " << b;
  
    return 0;
}