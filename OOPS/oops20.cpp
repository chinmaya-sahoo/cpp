#include<iostream>
#include<string>
using namespace std;
class ABC{
    public:
    ABC(){
        cout<<"Constructor called \n";
    }
    
    ~ABC(){
        cout<<"Destructor called  \n";
    }
};

int main(){
    if (true) {
    // ABC obj ;
    }
    static ABC obj ;
    
    cout<<"main function ends\n";
    return 0;
}