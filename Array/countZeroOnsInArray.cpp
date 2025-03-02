#include<iostream>
using namespace std;


int main(){

    int arr[] = { 0,1,0,1,0,1,0,1,0,0,1,1,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);


    int countZero = 0;
    int countOne = 0;

    //Iterate loop to find 0 and 1

    for(int num = 0; num < size; num++){
        if(arr[num] = 0){
          countZero = countZero + 1;
        }else{
            countOne = countOne + 1;
        }
    }

    cout<<"Count of zero's are"<<countZero<< "";
    cout<<"Count of One's are"<<countOne<< "";
    


return 0;
    
}


// Time Complexity (TC)	O(n) (Iterates through the array once)
// Space Complexity (SC)	O(1) (Uses a few integer variables)