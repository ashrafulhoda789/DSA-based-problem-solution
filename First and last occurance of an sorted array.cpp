#include <iostream>
#include <vector>
using namespace std;


int firstOcc(vector<int> arr, int x){
	int n = arr.size();
	int start = 0;
	int end = n - 1;
	 
	int ans = -1;

	while(start<=end){
		int mid = start + (end - start)/2;
		if(arr[mid]==x){
			ans = mid;
			end = mid - 1;
		}else if(arr[mid] > x){
			end = mid - 1;
		}else{
			start = mid + 1;
		}

	}
	return ans;
}

int lastOcc(vector<int> arr, int x){
	int n = arr.size();
	int start = 0;
	int end = n - 1;
	 
	int ans = -1;

	while(start<=end){
		int mid = start + (end - start)/2;
		if(arr[mid]==x){
			ans = mid;
			start = mid + 1;
		}else if(arr[mid] > x){
			end = mid - 1;
		}else{
			start = mid + 1;
		}

	}
	return ans;
}

vector<int> searchRange(vector<int> &arr, int x)
{
	vector<int> result;

	result.push_back(firstOcc(arr,x));
	result.push_back(lastOcc(arr,x));

	return result;
}



int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};

    

    vector<int> r = searchRange(arr, 3);

    for (auto i : r) {
        cout << i << " ";
    }

    return 0;
}