#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	char ch;
    int temp_int;
    std::vector <int> a;
    
    stringstream ss(str);
    while (ss >> temp_int) {
        a.push_back(temp_int);
        if (ss.peek() == ',') {
            ss.ignore();
        }
    }
    return a;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}