#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<string>

using namespace std;

class Exception{
public:
    Exception(int errid,const string& errmsg)
        :_errid(errid)
         ,_errmsg(errmsg){}
    virtual const char* What(){
        return _errmsg.c_str();
    }
    virtual ~Exception(){}
protected:
    int _errid;
    string _errmsg;
};
class SqlException : public Exception{
public:
    SqlException(int errid,const string& errmsg):Exception(errid,errmsg){}
    virtual const char*What(){
        cout<<"SQL Error:";
        return _errmsg.c_str();
    }
};
void Sql(){
    try{
        if(rand()%4 == 0){
            char* p = new char[0x7fffffff];
        }
    }
    catch(exception& e){
        throw SqlException(1,"内存不足");
    }
}
int main(){
    srand(time(0));
    while(1){
        try{
            Sql();
        }
        catch(Exception& e){
            cout<<e.What()<<endl;
        }
        catch(...){
            cout<<"未知异常"<<endl;
        }
        sleep(1);
    }
    return 0;
}
