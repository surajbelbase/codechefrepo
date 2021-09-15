//question source: codechef(practice and learn - beginners)
//question : 6 (find remainder)


// Write a program to find the remainder when an integer A is divided by an integer B.

// Input
// The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

// Output
// For each test case, find the remainder when A is divided by B, and display it in a new line.

//code:
#include<iostream>
using namespace std;

int main(){
    int n,a,b;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a>>b;
        int rem = a%b;
        cout<<rem<<endl;
    }
    return 0;
}
