
#include <iostream>

using namespace std;


void printarray(){
    
}

int main()
{
//decklare
 int number[15];
 //accesing an array
 cout<<"Value at 0 index"<<number[14]<<endl;
 
//cout << "Value at 20 index" <<number[20] <<endl;


//initialising an array

int second[3]={5,7,11};
//accesing an element

cout<<"value at 2 index "<<second[2]<<endl;

int third[15]={2,7};
int n =15;
cout<<"printing the array"<<endl;



//print the array

for(int i =0; i<n;i++){
    cout <<third[i]<<" ";
}
cout<<endl<<"everything is fine"<<endl<<endl;
 return 0;
}

