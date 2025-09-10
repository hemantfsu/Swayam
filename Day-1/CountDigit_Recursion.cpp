#include<bits/stdc++.h>
using namespace std;

int countdigit(int n){
    if(n==0) return 0;
    return 1+countdigit(n/10);
}
int main(){
    int n;
    cin>>n;
    if(n==0) cout<<1<<endl;
    else cout<<countdigit(n)<<endl;
    return 0;
}