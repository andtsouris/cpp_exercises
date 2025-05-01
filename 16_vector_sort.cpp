#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    std::vector<int> v;
    int size=v.size();
    
    std::cin >> size;
    for (int i = 0; i < size; i++) {
        int temp;
        std::cin >> temp;
        v.push_back(temp);
    }
    std::sort(v.begin(), v.end());
    for (int i = 0; i < size; i++) {
        std::cout << v[i] << " ";
    }
    return 0;
}