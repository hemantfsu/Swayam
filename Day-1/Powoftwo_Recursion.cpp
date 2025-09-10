#include<bits/stdc++.h>
using namespace std;

int Powoftwo(int n){
    if(n==0) return 1; // Base-Case
    return 2 * Powoftwo(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<Powoftwo(n)<<endl;
    return 0;
}