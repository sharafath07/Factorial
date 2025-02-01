#include <iostream>
using namespace std;

int fact(int n)
{
    int i, fact=1;

    for(i=1;i<=n;i++)
    {
        fact*=i;
    }

    return fact;
}

int main(){
    int num;

    cout<<"Enter a number : ";
    cin>>num;

    cout<<"The factorial of "<<num<<" is : "<<fact(num);

    return 0;
}