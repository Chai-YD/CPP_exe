//map类的简单使用
//
//#include<iostream>
//#include<map>
//using  namespace std;
//
//int main(){
//    map<string,string> writer;
//    writer["1"] = "one";
//    writer["2"] = "two";
//    writer["3"] = "three";
//    writer["4"] = "fore";
//    cout<<writer.size()<<endl<<endl;
//    int i = 1;
//    //遍历
//    map<string,string>::iterator it = writer.begin();//迭代器
//    for(;it != writer.end();++it){
//        cout<<it->first<<":"<<it->second<<endl;
//    }
//    cout<<endl;
//    cout<<(writer.find("1"))->second<<endl<<endl;
//    writer.erase(writer.find("1"));
//    cout<<writer.size()<<endl<<endl;
//    writer.clear();
//    cout<<writer.size()<<endl<<endl;
//    return 0;
//}

/*************************************************
 * CVTE笔试编程题
 * **********************************************/
//输出数组中元素个数等于一半的元素和四分之一的元素
#include<iostream>
#include<map>
using namespace std;
int main(){
    int output1;
    int output2;
    map<int ,int > select;
    int arr[10] ={2,2,3,1,2,6,2,2,1,5};//出现次数等于一半的元素为2、出现次数等于四分之一的元素为1
    int i = 0;
    for(;i<10;i++){
        int tmp = arr[i];
        if(select.find(arr[i]) ==select.end()){
            select[tmp] = 1;
        }else{
            select.find(tmp)->second++;
        }
    }
    map<int,int>::iterator it = select.begin();
    for(;it != select.end();++it){
        cout<<it->first<<";"<<it->second<<endl;
    }
    cout<<endl;
    it= select.begin();
    for(;it!=select.end();++it){
        if(it->second == 5){
            output1 = it->first;
        }else if(it->second == 2){
            output2 = it->first;
        }
    }
    cout<<"output1 = "<<output1<<endl;
    cout<<"output2 = "<<output2<<endl;
    return 0;
}
