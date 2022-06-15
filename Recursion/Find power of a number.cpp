# 1 program 
long long Pow(int X, int N)
{  
    if(N==0)return 1;
    long long partialans = Pow(X,N-1);
    return X * partialans;
    // Write your code here. 
}


#===================2 progaem ========================


#include <iostream>
using namespace std;
int Pow(int x, int n)
{
    if(n==0) return 1;
    int partialans = Pow(x,n-1);
    return partialans * x;
}
int main() {
   
    int n,x;
    cin>>x>>n;
    cout<<Pow(x,n);

    return 0;
}
