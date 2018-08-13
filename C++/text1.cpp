#include<iostream>
#include<vector>
using namespace std;
int n,sum,count = 0;
void help(vector<int>&a,int pos,int part){
    if(part == sum){
        count++;
    }
    if(part >sum){
        return;
    }
    int i = pos;
    for(;i<n;i++){
        part += a[i];
        help(a,i+1,part);
        part -= a[i];
    }
}
int main(){
    cin>>n>>sum;
    if(n < 0){
        return 0;
    }
    vector<int> a(n);
    int i = 0;
    //int num;
    for(;i<n;i++){    
        //cin>>num;
        //a[i] = num;
        cin>>a[i];
    }
    help(a,0,0);
    cout<<count<<endl;
    return 0;
}

