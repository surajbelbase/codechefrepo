//question
//Chef is currently facing the north direction. Each second he rotates exactly 90 degrees in clockwise direction.
//Find the direction in which Chef is facing after exactly X seconds

#include<iostream>
using namespace std;

int main(){
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        if(x%4==1){
            cout<<"EAST\n";
        }
        else if(x%2==0 && x%4==0){
            cout<<"NORTH\n";
        }
        else if(x%2==0){
            cout<<"SOUTH\n";
        }
        else{
            cout<<"WEST\n";
        }
    }
    return 0;
}
