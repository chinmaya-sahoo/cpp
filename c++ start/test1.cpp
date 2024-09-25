#include<iostream>                          
using namespace std;
int main(){
    if(0.1 + 0.2 == 0.3){   //  remember 0.1 = 0.100000000000065235
                            //  remember 0.2 = 0.200000000000063655
                            //  remember 0.3 = 0.300000000000021325
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}