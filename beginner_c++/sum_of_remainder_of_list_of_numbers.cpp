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
