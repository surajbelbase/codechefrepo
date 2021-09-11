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
