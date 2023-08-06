#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,f,l,m,s,a[100];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s;
    f=0;
    l=n-1;
    m=(f+l)/2;
    while(f<=l){
        if(a[m]<s)
        f=m+1;
        else if(a[m]==s){
            cout<<"found at location"<<" "<<m+1<<endl;
            break;
        }
        else{
            l=m-1;
            m=(f+l)/2;
        }
        if(f<l){
            cout<<"Not Found"<<s<<endl;
        }
    }
    return 0;
}


