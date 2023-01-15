#include<bits/stdc++.h>
using namespace as;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        string b;
        string str={"abcdefghijklmnopqrstuvwxyz"};
        for (int i=0;i<n-2;i++){
            if (a[i]!=0 &&  a[i+2]==0){
                int j=10*a[i]+a[i+1];
                b+=str[j+1];
                i+=3;
            }
            else {
                int j=a[i];
                b+=str[j+1];
            }
        }
        cout<<b<<endl;
    }
    return 0;
}