#include<iostream>
#include<climits>
using namespace std;


int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    
    int size =  sizeof(arr)/sizeof(arr[0]);

    //linear search

    int maxNum = INT_MIN;  //INT_MIN is the smallest possible integer value (-2147483648 for 32-bit systems).

    for(int i=0; i <= size-1; i++){
      if(arr[i]>maxNum){
        maxNum = arr[i];
      }
    }

    cout<<"maximum number is in the array is "<<maxNum<<" ";
    
}

// Time & Space Complexity
// ✅ Time Complexity: O(n) (Iterates once through the array)
// ✅ Space Complexity: O(1) (Uses only a few variables)

