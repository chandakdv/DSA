/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the valu of n"<<endl;
    cin>>n;
    
    bool isPrime =1;
    
    for (int i=2;i<n;i++){
        //rem=0,not a proime number
        if(n%i==0){
            cout<<"not a prime number"<<endl;
            break;
        }
      
    }
    
    if(isPrime ==0){
        cout<<"not a prime number"<<endl;
        
    }
    else{
        cout<<"is a prime number"<<endl;
    }
    
    
    
    
    
    
    
    
}
