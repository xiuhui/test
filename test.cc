#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec(10,5);
    for(auto i:vec){
        cout<<i<<endl;
    }    
    // cout<<"aa"<<endl;
    return 0;
}