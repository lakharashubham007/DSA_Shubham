#include <iostream>
#include <vector>
using namespace std;

int findUnique(const vector<int>& arr) {
    int unique = 0;
    for (int num : arr) {
        unique ^= num;  // XOR cancels out duplicates
    }
    return unique;
}

int main() {
    vector<int> arr = {1, 2, 1};  
    cout << "Unique element: " << findUnique(arr) << endl;
    return 0;
}


// ✅ O(N) Time Complexity – We traverse the array once.
// ✅ O(1) Space Complexity – We use only a single integer variable.
// ✅ No Extra Data Structures – XOR does the job in constant space.