#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
    string des;
    string src;
    vector<char> vec;
    cin>>des;
    cin>>src;
    string ret;
    int dn =des.size();
    int sn = src.size();
    int i = 0;
    for(;i<dn;++i){
        int j = 0;
        for(;j<sn;++j){
            if(des[i] != src[j]){
                vec.push_back(des[i]);
            }
        }
    }
    int vs = vec.size();
    i = 0;
    for(;i<vs;++i){
        cout<<vec[i];
    }
    cout<<endl;
    return 0;
}
