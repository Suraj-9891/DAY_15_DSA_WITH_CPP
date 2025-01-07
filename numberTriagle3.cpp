/*
Ques:
Print the Following Pattern
1
21
321
4321
--> Reverse
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
}