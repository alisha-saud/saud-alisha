#include<iostream>
using namespace std;
int main()
{
    int a, result;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    int sum(int);
    result = sum(a);
    cout<<"sum = "<< result;

}
int sum(int n)
{
    if(n != 0)
        return n + sum(n-1);
    else
        return n;
}