#include<iostream>
#include<map>
#include<queue>
using namespace std;
int main(){
    long long base = 1000000007;
    long long x_0,x,x1,x2;
    cin>>x_0;
    map<long long,int> cnt;
    queue<int> q;
    q.push(x_0);
    cnt[x_0] = 0;
    while(!q.empty()){
        x = q.front();
        q.pop();
        if(x == 0){
            cout<<cnt[x];
            break;
        }
        if(cnt[x]>100000){
            continue;
        }
        x1 = (x*4+3)%base;
        if(cnt.find(x1) == cnt.end()){
            cnt[x1] = cnt[x] +1;
            q.push(x1);
        }
        x2 = (x*8+7)%base;
        if(cnt.find(x2) == cnt.end()){
            cnt[x2] = cnt[x]+1;
            q.push(x2);

        }
    }
    if(q.empty())
        cout<<-1;
    return 0;
}
