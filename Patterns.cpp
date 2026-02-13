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

#include <iostream>
using namespace std;

class Pattern{
    public:
        void squarePatterns(int n,int num ){
            for(int i =0; i <n;i++){
                for(int j = 0; j<n;j++){
                    cout << num << " ";
                    num++;
                }
                cout << endl;
            }
        }
};

int main(){
    int n ;
    int num = 1;
    cout << "enter number:";
    cin >> n;

    Pattern kar;
    kar.squarePatterns(n,num);

}