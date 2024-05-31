

/*
Generate all binary strings of length n without 
consecutive 1’s
*/

#include<iostream>
using namespace std;
void generateBinary(int n,string ans){
    if(ans.length()==n){
        cout<<ans<<endl;
        return;
    }
    generateBinary(n,ans+'0');
    if(ans.length()==0 || ans[ans.size()-1]=='0'){ 
         generateBinary(n,ans+'1');
    }
    
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    generateBinary(n,"");
}