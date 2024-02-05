#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a "<<endl;
    cin>>a;
    int b;
    cout<<"Enter b"<<endl;
    cin>>b;
    char op;
    cout<<"enter op"<<endl;
    cin>>op;
    switch (op)
    {
        
    case '+' :
        cout<<"Adding a and b :" <<a+b<<endl;
        break;
    case '-' :
        cout<<"Subtracting  a and b :" <<a-b<<endl;
        break;    
    case '*' :
        cout<<"Mult a and b :" <<a*b<<endl;
        break;
    case '%' :
        cout<<"Mod of a and b :" <<a%b<<endl;
        break;    
    default:
    cout<<"Not Valid";
        break;
    }

return 0;
}