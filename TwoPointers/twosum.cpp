#include<iostream>
#include<vector>
using namespace std;

// linear search T.C O(N*N),  S.C O(1)
bool twoSumLinear(vector<int> &twoSumVector, int target){
    for(int i=0; i<twoSumVector.size()-1; i++){
        for(int j=i+1; j<twoSumVector.size(); j++){
            if(twoSumVector[i]+twoSumVector[j] == target) return true;
            

        }
    }
    return false;
}

// Binary Search T.C O(log(base2)N) , S.C O(N)
// 2,3,4,5,6,9,10

vector<int> twoSumBinarySearch(vector<int>&nums, int target){
        vector<int> res(2,-1);
        for(int i=0; i<nums.size()-1; i++){
            int start = i+1, end = nums.size()-1;
            int x = target - nums[i];
            int mid = start + (end -start)/2;
            
            while(start <= end){
                if(nums[mid] == x){
                    res[0] = i;
                    res[1] = mid;
                    return res;
                }
                else if(nums[mid] > x){
                    end = mid -1 ;
                }else{
                    start = mid + 1;
                }
            }
        }
        return res;
    }

int main(){
    
    vector<int> twosum_arr;
    twosum_arr.push_back(2);
    twosum_arr.push_back(7);
    twosum_arr.push_back(10);
    twosum_arr.push_back(15);
    // twosum_arr.push_back(6);
    // twosum_arr.push_back(10);
    // twosum_arr.push_back(2);
    // sort(twosum_arr.begin(), twosum_arr.end());
    for(int i=0; i<twosum_arr.size(); i++){
        cout << "Two sum of the array : "<<twosum_arr[i] << endl;
    }

    // bool res = twoSumLinear(twosum_arr, 12);
    vector<int> res1 = twoSumBinarySearch(twosum_arr, 9);
    cout << "res:" << res1[0] << "," << res1[1];
    return 0;
}

// Linear search
