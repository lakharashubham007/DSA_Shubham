#include<iostream>
using namespace std;


int main () {
    int arr[8] = {1,2,3,4,5,6,7,8};
    int size = 8;

    int start = 0;
    int end = size - 1;

    //while loop
    // while(start<=end){
    //     cout<<arr[start]<<" ";
    //     cout<<arr[end]<<" ";
        
    //     start++;
    //     end--;
    // }

    //For Loop
    for(int start = 0, end = size-1; start<=end; start++, end--){
        cout << arr[start] << " "; // Print start element
        if(start!=end){
            cout<<arr[end]<<" ";
        }
    }
    return 0;
}