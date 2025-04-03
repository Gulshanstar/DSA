#include<iostream>
#include<vector>
#include<stack>
int main(){
    int arr[8] = {3,4,-2,5,8,20,-10,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::vector<int> prefix_sum,suffix_sum;
    prefix_sum.push_back(arr[0]);

    // this is for prefix sum
    for(int i=1; i<n; i++){
        prefix_sum[i] = prefix_sum[i-1]+arr[i];
        prefix_sum.push_back(prefix_sum[i]);
    }

    // this is for suffix sum
    std::stack<int> s;
    s.push(arr[n-1]);
    for(int j=n-2; j>=0; j--){
        int temp = s.top() + arr[j];
        s.push(temp);
    }

    // for empty the stack
    while(!s.empty()){
        suffix_sum.push_back(s.top());
        s.pop();
    }

    
    // for printing the prefix and suffix sum
    for(int k=0; k<prefix_sum.size(); k++){
        std::cout << prefix_sum[k] << ", ";
    }

    // for printing hte suffix sum
    std:: cout << "\n";
    for(int k=0; k<suffix_sum.size(); k++){
        std::cout << suffix_sum[k] << ", ";
    }



}