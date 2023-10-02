/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
char ch ='1';
int num =1;
cout<< endl;
switch(ch){
    case 1:cout<<"First"<<endl;
    cout<<"First again" <<endl;
    
    case '1' :switch(num){
        case 1:cout<<"value of num is"<<num<<endl;
        break;
    }
    break;

default: cout<<"it is default case"<<endl;
}
}
