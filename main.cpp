#include <iostream>
#include <ctime>
using namespace std;

// Question 1.A: One-dimensional array
void q1a_1d_array(int m) {
    cout << "\nQuestion 1.A - 1D Array with m = " << m << endl;
    clock_t start = clock();
    int arr[1000]; // Max 1000, gerekirse artırılır
    for (int i = 0; i < m; ++i) {
        arr[i] = i;
    }
    cout << "Array contents:\n";
    for (int i = 0; i < m; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << "Complexity: O(m), Elapsed Time: " << elapsed << " seconds\n";