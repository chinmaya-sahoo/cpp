#include<iostream>
using namespace std;

int main(){
    int a , b ;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<< a << " + " << b << " = " << a+b << endl;
    cout<< a << " - " << b << " = " << a-b << endl;
    cout<< a << " * " << b << " = " << a*b << endl;
    cout<< a << " / " << b << " = " << a/b << endl;
    cout<< a << " % " << b << " = " << a%b << endl;


    // Relational Opertors
    //Logical Operators
    cout<< !false << endl;

    //Bitwise operator
    // ~ Bitwise complement 
    // << left shift 
    // >> right shift 
    // | Bitwise OR
    // & Bitwise AND
    // ^ Bitwise XOR
    cout<< ( ~a )<< endl; // computer gives twos complement in short -(a+1)
    cout<< (a<<1) << endl;
    cout<< (a>>1) << endl;

    cout<< a << " | " << b << " = " << (a|b) << endl; //OR gate action at each digit
    cout<< a << " & " << b << " = " << (a&b) << endl; //AND gate action at each digit
    cout<< a << " ^ " << b << " = " << (a^b) << endl; //EXOR gate action at each digit

    cout<< sizeof(a);

    //comma operator 
    //int y = 3 , 4 ,5 ; // it means y= 5(last number)

    cout<< (&a);
}