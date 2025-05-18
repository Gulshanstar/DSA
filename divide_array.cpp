#include<iostream>
#include<vector>

int main(){
    int n;
    std::cout << "Enter the array size:";
    std::cin >> n;
    std:: vector<int> v(n);

    // Input of the array
    for(int i=0; i<v.size(); i++){
        std:: cin>>v[i];
    }

    // Input -- {4,-6,2,8}
    
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        int prefix = 0;
        for(int j=i; j<n; j++){
            prefix += v[j];
            maxi = std::max(maxi, prefix);
        }

    }

    std:: cout<< "The max of all combination is :" << maxi <<"\n";

}