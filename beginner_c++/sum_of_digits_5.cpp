//question source: codechef(practice and learn - beginners)
//question : 5 (sum of digits)

// You're given an integer N. Write a program to calculate the sum of all the digits of N.

// Input
// The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

//output:
//For each test case, calculate the sum of digits of N, and display it in a new line.

//code

#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int i = 0; i<t; i++){
        int sum = 0;
        cin>>n;
        while (n!=0){
            int m = n%10;
            sum = sum + m;
            n=n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
