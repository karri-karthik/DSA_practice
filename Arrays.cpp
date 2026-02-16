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

// #include <bits/stdc++.h>
// using namespace std;

// class Slargest{
// public:
//     int secLargrstnum(int a[], int n){
//         int largest = a[0];
//         int seclargest = -1;
//         for(int i = 0; i < n; i++){
//             if(a[i] > largest){
//                 seclargest = largest;
//                 largest = a[i];
                
//             }
//             else if(largest > a[i] && a[i] > seclargest){
//                 seclargest = a[i];
//             }
//         }
//         return seclargest;

//     }
// };

// int main(){
//     int a[] = {4,5,6,8,9};
//     int n = 5;

//     Slargest obj;
//     cout << obj.secLargrstnum(a, n);

// }


// Linear Search 
//Time complexity: O(n)
//space complexity: O(1)

// #include <bits/stdc++.h>

// int linearSearch(int arr[], int n, int num){
//     for(int i = 0 ; i < n; i++){
//         if(arr[i] == num){
//             return i;
//         }
        
//     }
//     return -1;

// }

// int main(){
//     int arr[] = {7,8,9,5,6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int num = 0;
//     int val = linearSearch(arr, n, num);
//     printf("%d",val);
// }


// Remove dulipacrtes in array

#include <bits/stdc++.h>

