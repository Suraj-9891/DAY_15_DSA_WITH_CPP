/*
Pattern Printing - 2
Lecture 08

Ques:01
Print the Following Pattern
    ****
   ****
  ****
 ****
 --->> Rhombus   
*/
#include<iostream>
using namespace std;
int main(){
    // cout<<"Enter a Row Number : "<<endl;
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     // Space 
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     // Star
    //     for(int k=1; k<=n; k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    /*
    Ques:02
    Print the Following Pattern
          *
         *** 
        ***** 
       ******* 
      ********* 

      --->> Star Pyramid
    */
    cout<<"Enter the Row Number : "<<endl;
    int n;
    cin>>n;
    int nsp = n-1;
    int nst = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        nsp--;
        for(int k=1; k<=nst; k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }

    /*
    Ques:
    Print the Given Pattern
           1
         1 2 1 
       1 2 3 2 1 
     1 2 3 4 3 2 1

     -->> Number Pyramid Palinndrome

    */



    return 0;
}