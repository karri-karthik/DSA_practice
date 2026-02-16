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

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> kar;       // delete last element
    
//     kar.push_back(35);
//     kar.push_back(45);
//     kar.pop_back();      // it deletes last element 45
//     cout << kar.size() << endl;
//     cout << kar.capacity() << endl;  // add double size if it full
//     for (int i : kar){
//         cout << i << " ";
//     }
// }

// // Front 

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> kar;       // delete last element
    
//     kar.push_back(35);
//     kar.push_back(45);
//     kar.push_back(105);
//     kar.push_back(4);
//     kar.pop_back();      // it deletes last element 45

    
//     cout << kar.size() << endl;
//     cout << kar.capacity() << endl;  // add double size if it full
//     cout << kar.front() << endl;   // print first element
//     cout << kar.back() << endl;  // print last element
//     cout << kar.at(2) << endl;  // index value
// }



// ** Pair Sum

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums,int target){
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n-1;
    while(i < j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }
    return ans;
}

int main(){
    vector<int> nums = {2,54,65,89,91};
    int target = 180;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " " << ans[1] <<endl;

}