/*
Ques:
Print the Following Pattern
    *
   ***
  *****
 *******
  *****
   ***
    *
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a Row Number "<<endl;
    int n;
    cin>>n;
    int nsp = n-1;
    int nst = 1;
    for(int i=1; i<=2*n-1; i++){
        // Space
        for(int j=1; j<=nsp; j++){
            cout<<" "<<" ";
        }
        if(i<=n-1){
            nsp--;
        }
        else{
            nsp++;
        }
        // Star
        for(int k=1; k<=nst; k++){
            cout<<"Jay"<<" "<<"Shree"<<" "<<"Ram"<<" "<<" "<<" "<<" ";
        }
        if(i<=n-1){
            nst+=2;
        }
        else{
            nst-=2;
        }
        cout<<endl;
    }
    return 0;
}