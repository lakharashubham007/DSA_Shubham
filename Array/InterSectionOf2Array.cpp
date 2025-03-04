#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersection(vector<int>& arr1, vector<int>& arr2) {
    vector<int> intersection_arr;
    
    // Check each element in arr1
    for(int i = 0; i < arr1.size(); i++) {
        bool isPresent = false;
        // Look for this element in arr2
        for(int j = 0; j < arr2.size(); j++) {
            if(arr1[i] == arr2[j]) {
                isPresent = true;
                break;
            }
        }
        
        // If element is present in arr2 and not already in intersection_arr
        if(isPresent) {
            bool isDuplicate = false;
            for(int k = 0; k < intersection_arr.size(); k++) {
                if(arr1[i] == intersection_arr[k]) {
                    isDuplicate = true;
                    break;
                }
            }
            if(!isDuplicate) {
                intersection_arr.push_back(arr1[i]);
            }
        }
    }
    
    return intersection_arr;
}

void printVector(const vector<int>& vec, const string& message) {
    cout << message;
    for(int i : vec) {
        cout << i << " ";
    }
    cout << endl;
}

void runTestCase(vector<int>& arr1, vector<int>& arr2, const string& testName) {
    cout << "\n" << testName << ":" << endl;
    cout << "Array 1: ";
    printVector(arr1, "");
    cout << "Array 2: ";
    printVector(arr2, "");
    
    vector<int> result = findIntersection(arr1, arr2);
    printVector(result, "Intersection: ");
}

int main() {
    // Test Case 1: Regular arrays with some common elements
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 3, 6, 7};
    runTestCase(arr1, arr2, "Test Case 1 - Some common elements");
    
    // Test Case 2: Arrays with no common elements
    vector<int> arr3 = {1, 2, 3};
    vector<int> arr4 = {4, 5, 6};
    runTestCase(arr3, arr4, "Test Case 2 - No common elements");
    
    // Test Case 3: Arrays with all common elements
    vector<int> arr5 = {1, 2, 3};
    vector<int> arr6 = {1, 2, 3};
    runTestCase(arr5, arr6, "Test Case 3 - All common elements");
    
    // Test Case 4: Arrays with duplicates
    vector<int> arr7 = {1, 1, 2, 2, 3};
    vector<int> arr8 = {1, 2, 2, 4};
    runTestCase(arr7, arr8, "Test Case 4 - Arrays with duplicates");
    
    // Test Case 5: Empty array
    vector<int> arr9 = {};
    vector<int> arr10 = {1, 2, 3};
    runTestCase(arr9, arr10, "Test Case 5 - One empty array");
    
    return 0;
}

/*
Approach:
1. Create an empty vector intersection_arr to store common elements
2. For each element in arr1:
   - Check if it exists in arr2
   - If present in arr2, check if it's already in intersection_arr
   - If not already present in intersection_arr, add it
3. Return the intersection_arr containing all common elements

Test Cases cover:
1. Regular case with some common elements
2. Arrays with no intersection
3. Arrays with complete intersection
4. Arrays containing duplicate elements
5. Edge case with empty array

Time Complexity:
- For each element in arr1 (n elements), we:
  * Check entire arr2 (m elements)
  * Check entire intersection_arr (up to min(n,m) elements)
- Overall time complexity: O(n*m*min(n,m)) where n and m are sizes of input arrays

Space Complexity:
- Extra space needed for intersection_arr which stores at most min(n,m) elements
  where n and m are sizes of input arrays
- Space Complexity: O(min(n,m))

Note: This is a basic solution. Using sorting or hash sets would give better 
time complexity but would either modify input arrays or use more space.
*/

