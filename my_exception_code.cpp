#include<iostream>
using namespace std;
//基类
class Exception{
public:
    Exception(int errid,const string& errstr){
        _errid = errid;
        _errstr = errstr;
    }
    virtual const What(){};
private:
    int _errid;
    string _errstr;
}
