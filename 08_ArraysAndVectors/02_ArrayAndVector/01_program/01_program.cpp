#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;  //You need not mention the size
    //Inserting / input do not use []
    v.push_back(9); 
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    //if you want to update / access
    v[0]=12;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}