#include <iostream>

using namespace std;
void vote(int r){
    if(r>=18){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

int main()
{
    
    int  r;
    cin>>r;
    vote(r);

    return 0;
}