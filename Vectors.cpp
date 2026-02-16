// // create vector function 

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int> karthik;  
//     vector <char> string = {'a','b','c'};
//     vector <int> nums(3,0);      // 3 is size & 0 value of indedx 

//     for(int i : nums){
//         cout << i <<endl;   // 0 0 0 
//     }

//     for(char i : string){   // a b c 
//         cout << i << endl;

//     }


// }


// Functions mainly used in vectors 
// 1. size
// 2. push_back
// 3. pop_back
// 4. front
// 5. back 
// 6. at

// size

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> karthik;       //size of array
//     karthik = {0,2,5,6,7};
    
//     int n = karthik.size();
//     cout << n;
// }

// Push_back 

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> kar;       // adding element
//     kar.push_back(25);
//     kar.push_back(35);
//     kar.push_back(45);
//     cout << kar.size() << endl;
//     cout << kar.capacity() << endl;  // add double size if it full
//     for (int i : kar){
//         cout << i << " ";
//     }
// }

// pop_back 

