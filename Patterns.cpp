//SquarePatterns

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     int num = 1;

//     for (int i=0;i<n;i++){
//         for(int j=1; j <= n; j++ ){
//             cout<< j;
//             // num++;

//         }
//         cout<< endl;
//     }
// }


// 2

// #include <iostream>
// using namespace std;
// class Pattern{
// public: 

//     void squarePatterns(int n){
//         for(int i =0; i < n; i++){
//             for(int j =0; j<n;j++){
//                 cout<<"*";
//             }
//             cout << endl;
//         }
//     }
// };

// int main(){
//     int n;
//     cout << "Enter number : ";
//     cin >> n;

//     Pattern kar;
//     kar.squarePatterns(n);

//     return 0;
// }



//3

// #include <iostream>
// using namespace std;

// class Pattern{
// public:
//     void alphaPatterns(int n){
//         for(int i = 0;i<n; i++){
//             char ch = 'A';
//             for(int j =0; j<n;j++){
//                 cout << ch;
//                 ch++;
//             }
//             cout<< endl;
//         }
//     }

// };

// int main(){
//     int n;
//     cout << "enter number:";
//     cin >> n;

//     Pattern kar;
//     kar.alphaPatterns(n);
// }


//4

// #include <iostream>
// using namespace std;

// class Pattern{
//     public:
//         void squarePatterns(int n,int num ){
//             for(int i =0; i <n;i++){
//                 for(int j = 0; j<n;j++){
//                     cout << num << " ";
//                     num++;
//                 }
//                 cout << endl;
//             }
//         }
// };

// int main(){
//     int n ;
//     int num = 1;
//     cout << "enter number:";
//     cin >> n;

//     Pattern kar;
//     kar.squarePatterns(n,num);

// }


// 5  Triangle

// #include <iostream>
// using namespace std;

// class Solution{
//     public:
//         void patterns(int n ){
//             for(int i = 1 ; i<=n ; i++){
//                 for(int j = 0;j<i ; j++ ){
//                     cout<<"*";

//                 }
//                 cout << endl;
//             }
//         }
// };

// int main(){
//     int n;
//     cout << "number:";
//     cin>> n;

//     Solution kar;
//     kar.patterns(n);
// }


// 6 

// #include <iostream>
// using namespace std;

// class Solution{
//     public:
//         void patterns (int n){
//             for(int i =1;i <= n; i++){
//                 for(int j = 1 ; j <= i; j++){
//                     cout << i;
//                 }
//                 cout << endl;

//             }
            
//         }
// };

// int main(){
//     int n;
//     cin >> n;

//     Solution kar;
//     kar.patterns(n);
// }

//7

// #include <iostream>
// using namespace std;

// class Solution{
//     public:
//         void patterns (int n){
//             for(int i = 1 ; i <= n; i++){
//                 for(int j = 1 ; j <= i; j++){
//                     cout << j << ' ';
//                 }
//                 cout << endl;
//             }

//         }};

// int main(){
//     int n;
//     cin >> n;

//     Solution kar;
//     kar.patterns(n);
// }


//8 reserve triangle


// #include <iostream>
// using namespace std;

// class Solution{
//     public:
//         void patterns (int n){
//             for(int i = 0 ; i < n; i++){
//                 for(int j = i +1 ; j >0; j--){
//                     cout << j << ' ';
//                 }
//                 cout << endl;
//             }

//         }};

// int main(){
//     int n;
//     cin >> n;

//     Solution kar;
//     kar.patterns(n);
// }


// 9 
// alphabet reverse triangle pattern.

// #include <iostream>
// using namespace std;

// class Solution{
//     public:
//         void patterns (int n){
//             for(int i = 0 ; i < n; i++){
//                 for(char ch = 'A' + i; ch >= 'A'; ch--){
//                     cout << ch << ' ';

//                 }
//                 cout << endl;
//             }

//         }};

// int main(){
//     char ch;
//     int n;
//     cin >> n;

//     Solution kar;
//     kar.patterns(n);
// }


//10 
// inverted triangle pattern 

#include <iostream>
using namespace std;

class Solution{
    public:
        void patterns (int n){
            for(int i = 0 ; i < n; i++){
               for(int j = 0; j <i; j++){  // space
                cout << " ";
               }
               for(int j = 0; j < n- i; j++){ // number
                cout << (i+1);
                
               }
               cout <<endl;
            }

        }};

int main(){
    
    int n;
    cin >> n;

    Solution kar;
    kar.patterns(n);
}

