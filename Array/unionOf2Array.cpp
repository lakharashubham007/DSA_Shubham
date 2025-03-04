#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(vector<int>& arr1, vector<int>& arr2) {
    vector<int> union_arr;
    
    // Insert all elements from arr1
    for(int i = 0; i < arr1.size(); i++) {
        bool isDuplicate = false;
        // Check if element already exists in union_arr
        for(int j = 0; j < union_arr.size(); j++) {
            if(arr1[i] == union_arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate) {
            union_arr.push_back(arr1[i]);
        }
    }
    
    // Insert all elements from arr2
    for(int i = 0; i < arr2.size(); i++) {
        bool isDuplicate = false;
        // Check if element already exists in union_arr
        for(int j = 0; j < union_arr.size(); j++) {
            if(arr2[i] == union_arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate) {
            union_arr.push_back(arr2[i]);
        }
    }
    
    return union_arr;
}

int main() {
    // Example arrays
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 3, 6, 7};
    
    vector<int> union_result = findUnion(arr1, arr2);
    
    cout << "Union of two arrays is: ";
    for(int i : union_result) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}

/*
Approach:
1. Create an empty vector union_arr to store unique elements
2. Iterate through first array (arr1):
   - For each element, check if it already exists in union_arr
   - If not present, add it to union_arr
3. Iterate through second array (arr2):
   - For each element, check if it already exists in union_arr  
   - If not present, add it to union_arr
4. Return the union_arr containing all unique elements

Time Complexity:
- For each element in arr1 (n elements), we check entire union_arr (up to n elements)
- For each element in arr2 (m elements), we check entire union_arr (up to n+m elements)
- Overall time complexity: O(n^2 + m^2) where n and m are sizes of input arrays

Space Complexity:
- Extra space needed for union_arr which can store at most (n+m) elements
  where n and m are sizes of input arrays
- Space Complexity: O(n+m)

Note: This is not the most efficient solution. Using a Set data structure would 
give better time complexity of O(n+m) but would require additional space.
*/


