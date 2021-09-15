//question source: codechef(practice and learn - beginners)
//problem : 3 (Add two numbers)

// Problem Statement:
// Every problem starts with a Problem Statement. It tells you in detail about the task to be solved. Usually, although not necessarily, it is accompanied with a story. As a competitive programmer, it is your job to break the problem statement and figure out exactly what it is asking.
// Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.

// The task is very simple: given two integers A and B, write a program to add these two numbers and output it.

// Input
// This section tells you the format in which your program should receive the input.
// The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains two Integers A and B.

// Output
// This section tells us the format in which your program should give the output
// For each test case, add A and B and display the sum in a new line
#include<iostream>
using namespace std;

int main(){
    int T;
    int a,b;
    int c[T];
    cin>>T;
    for(int i = 0;i<T;i++){
        cin>>a>>b;
        cout<<a+b<<endl;
        
    }
    return 0;
}
