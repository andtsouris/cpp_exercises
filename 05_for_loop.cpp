#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    cin >> a >> b;

    for (int n=a; n <= b; n++){
        if (n == 1){
            std::cout << "one";
        } 
        else if (n == 2){
            std::cout << "two";
        }
        else if (n == 3){
            std::cout << "three";
        }
        else if (n == 4){
            std::cout << "four";
        }
        else if (n == 5){
            std::cout << "five";
        }
        else if (n == 6){
            std::cout << "six";
        }
        else if (n == 7){
            std::cout << "seven";
        }
        else if (n == 8){
            std::cout << "eight";
        }
        else if (n == 9){
            std::cout << "nine";
        }
        else if (n % 2 ==0){
            std::cout << "even";
        } else {
            std::cout << "odd";
        }
        std::cout << "\n";
    }
    return 0;
}