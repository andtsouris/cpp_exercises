#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int q;
    std::cin >> n >> q;
    
    int** a = new int*[n]();
    
    for (int i = 0; i<n; i++){
        int k;
		cin >> k;
        int* i_arr = new int[k]();
        for (int j = 0; j < k; j++) {
			cin >> i_arr[j];
		}
        a[i] = i_arr;
    }


    for (int q_num = 0; q_num < q; q_num++) {
		int i, j;
		cin >> i >> j;
		cout << a[i][j] << endl;
	}

    for (int i = 0; i < n; i++) {
		delete[] a[i];
	}
	delete[] a;


    return 0;
}
