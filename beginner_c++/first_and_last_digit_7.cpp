//question source: codechef(practice and learn - beginners)
//program : 7 (first and last digit)

// If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.


// Input
// The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

// Output
// For each test case, display the sum of first and last digits of N in a new line.

#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int i = 0; i<t; i++){
        cin>>n;
        int sum;
        int d = n;
        while(d>9){
            d/=10;
        }
        sum = (n%10) + d;
        cout<<sum<<endl;
    }
    return 0;
}
