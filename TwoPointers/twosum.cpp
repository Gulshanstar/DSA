#include<iostream>
#include<vector>
using namespace std;

bool twoSumLinear(vector<int> &twoSumVector, int target){
    for(int i=0; i<twoSumVector.size()-1; i++){
        for(int j=i+1; j<twoSumVector.size(); j++){
            if(twoSumVector[i]+twoSumVector[j] == target) return true;
            

        }
    }
    return false;
}

int main(){
    
    vector<int> twosum_arr;
    twosum_arr.push_back(9);
    twosum_arr.push_back(5);
    twosum_arr.push_back(4);
    twosum_arr.push_back(3);
    twosum_arr.push_back(6);
    twosum_arr.push_back(10);
    twosum_arr.push_back(2);
    for(int i=0; i<twosum_arr.size(); i++){
        cout << "Two sum of the array : "<<twosum_arr[i] << endl;
    }

    bool res = twoSumLinear(twosum_arr, 12);
    cout << res << endl;
    return 0;
}

// Linear search
