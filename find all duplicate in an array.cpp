#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> duplicate(vector<int> nums) {
    vector<int> duplicates;
    
        
        for(int i = 0; i < nums.size(); ++i) {
            int index = abs(nums[i]) - 1;
            if(nums[index] < 0) {
                duplicates.push_back(index + 1);
            } else {
                nums[index] = -nums[index];
            }
        }
        
        return duplicates;
        
}

int main() {
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> result = duplicate(arr);

    if (!result.empty()) {
        cout << "Duplicates: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No duplicates found" << endl;
    }

    return 0;
}
