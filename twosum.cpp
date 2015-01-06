// my second program in C++
#include <iostream>
#include <vector>
#include <string>

using namespace std;
/*
    Input: numbers={2, 7, 11, 15}, target=9
    Output: index1=1, index2=2
*/

// g++ twosum.cpp -o twosum.exe -std=c++0x

class Solution {

public:

    int firstInstance;
    int secondInstance;

    bool isGood(int value1, int value2, int target){

        if ((value1 + value2) == target){
            return true;
        }else {
            return false;
        }        
    }

    vector<int> twoSum(vector<int> &numbers, int target) {
    // search for 
    // 
            for (size_t i=0; i < numbers.size(); i++){

                //cout << "Current Position: " << i << " " << numbers[i] << "\n";         

                if (isGood(numbers[0],numbers[i + 1],target) == true){                    
                    cout << "found a true";
                    break;
                }else {
                  
                  cout << "Not a match: " << numbers[0] << " " << numbers[i] << "\n";
                }
            }

    }
};

int main ()
{
    Solution ourSolution;
    std::vector<int> inputValues { 2, 7, 11, 15 };
    
    ourSolution.twoSum(inputValues, 18);

    return 0;
}
