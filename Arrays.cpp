// Arrays find largest number in arr

// #include <iostream>
// using namespace std;

// class Arrays{
//     public:
//         void largestNum(int arr[] , int n){
//             int max = arr[0];
//             for(int i = 0; i < n; i++){
//                 if(arr[i] > max){
//                     max = arr[i];
//                 }
                
//             }
//             cout << max;
//         }
// };

// int main(){
//     int arr[] = {4,-5,0,59,-89};
//     int n = 5;

//     Arrays obj;
    

//     int max = obj.largestNum(arr, n);
//     cout << max;

// }


// 2 ) find least number in arr
// Time complexity is O(N)

// #include <iostream>
// using namespace std;

// class Arrays{
// public:
//     void largestNum(int arr[] , int n){
//         int max = arr[0];
//         for(int i = 1; i < n; i++){
//             if(arr[i] < max){
//                 max = arr[i];
//             }
//         }
//         cout << max;
//     }
// };

// int main(){
//     int arr[] = {4,-5,0,59,-89};
//     int n = 5;

//     Arrays obj;
//     obj.largestNum(arr, n);   // Just call it

// }

// 3. check array is sorrted 

// #include <iostream>
// using namespace std;

// class Arrays{
// public:
//     bool sortedArr(int arr[] , int n){
//         for(int i = 1; i < n; i++){
//             if(arr[i] >= arr[i-1]) {


//             }
//             else{
//                 return false;
//             }

//     }
//     return true;
// }
// };

// int main(){
//     int arr[] = {4,-5,0,59,-89};
//     int n = 5;

//     Arrays obj;
//     if(obj.sortedArr(arr, n))
//         cout << "Sorted";
//     else
//         cout << "Not Sorted";

// }

// find second largest element 
// brute Froce

// #include <bits/stdc++.h>
// using namespace std;

// class Slargest{
// public:
//     bool secLargrstnum(int arr[] , int n){
//         if (n < 2){
//             return -1;

//         }
//         sort(arr , arr +n);
//         int large = arr[n-2];
        
//         cout << large << endl;
// }
// };

// int main(){
//     int arr[] = {4,-5,0,59,-89};
//     int n = 5;

//     Slargest obj;
//     obj.secLargrstnum(arr, n);


// }
 
// optimal apporach for second largest element 

// time complexity O(N)

#include <bits/stdc++.h>
using namespace std;

class Slargest{
public:
    void secLargrstnum(int arr[], int n){
        

    }
}