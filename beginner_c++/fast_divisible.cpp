//question source: codechef(practice and learn - beginners)
//question 2

// The purpose of this problem is to verify whether the method you are using to read input data is sufficiently 
// fast to handle problems branded with the enormous Input/Output warning. You are expected to be able to process 
// at least 2.5MB of input data per second at runtime.

#include<iostream>
using namespace std;

int main(){
    int n,k,a,count=0;
    cin>>n>>k;
    for(int i = 0;i<n;i++){
        cin>>a;
        if(a%k==0){
            count++;
        }
        
    }
    cout<<count;
    return 0;
}
