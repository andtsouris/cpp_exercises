#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    int arr_length;
    std::cin >> arr_length;
    int arr[arr_length];
    
    for (int i = 0; i < arr_length; i++) {
        std::cin >> arr[i];
    }

    for (int i = arr_length; i > 0; i--){
        std::cout << arr[i-1] << " ";
    }
    
    return 0;
}
