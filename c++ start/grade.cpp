#include<iostream>
using namespace std;
int main(){
    int mark;
    cin>>mark;
    if(mark>80){
        cout<<"Your Grade is : A";
    }
    else if(mark>60 && mark<=80){
        cout<<"Your Grade is : B";
    }
    else if(mark>50 && mark<=60){
        cout<<"Your Grade is : C";
    }
    else if(mark>45 && mark<=50){
        cout<<"Your Grade is : D";
    }
    else if(mark>25 && mark<=45){
        cout<<"Your Grade is : E";
    }
    else if(mark<=25){
        cout<<"Your Grade is : F";
    }
    else{
        cout<<"invalid input";
    }
    return 0;
}