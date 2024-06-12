#include<iostream>
using namespace std;
int main(){
    char vowel[5];
    // i/p with for loop 
    // for(int i=0;i<5;i++){
    //     cin>>vowel[i];
    // }

    //i/p with for each loop
    // for(char ele:vowel) this won't work you have to use '&'
    // for(char &ele:vowel){
    //     cin>>ele;
    // }
    
    // i/p wuth while loop 
    int idx =0;
    while(idx<5){
        cin>>vowel[idx];
        idx++;
    }
    for(int i=0;i<5;i++){
        cout<<vowel[i]<<" ";
    }
}