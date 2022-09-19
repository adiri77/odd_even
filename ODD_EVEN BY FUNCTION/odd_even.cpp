#include<iostream>
using namespace std;
bool odd_even(int n){
    if(n%2==0){
        return 1;
    }
    else
    {return 0;}}

int main(){
    int m;
    cout<<"ENTER NUMBER"<<" ";
    cin>>m;
bool t= odd_even(m);
if(t==1){
    cout<<"EVEN NUMBER"<<endl;
}
else{
    cout<<"ODD NUMBER"<<endl;
}

return 0;
}