/*
Q5. Print the following pattern:
   *
  **
 ***
****
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a row no. : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
             if(i+j>=n+1){
                cout<<"* ";
             } else{
                cout<<"  ";
             }
        }
       
        cout<<endl;
    }

    
}