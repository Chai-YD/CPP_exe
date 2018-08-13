#pragma once

class CoutedBase{
public:
    //构造函数
    CoutedBase(long count = 1):_count(count){}
    //析垢函数
    virtual ~CoutedBase(){}

    //删除引用计数
    virtual void Destroy() = 0;
    //释放管理对象
    virtual void Dispose() = 0;
    //增加引用计数
    void Add_count(){
        ++_count;
    }
    //减引用计数
    void Release(){
        if(--_count == 0){
            Dispose();
        }
    }
    //获取计数
    long Getcount(){
        return _count;
    }
    //防止拷贝构造与赋值运算符重载
    CoutedBase(const CoutedBase&);
    CoutedBase& operator=(const CoutedBase&);
private:
    long _count;
};

//CoutedBase类是一个抽象类，不能实例化出对象，需要继承实现纯虚函数
template<class T>
class CountedImpl:public CoutedBase{
public:
    //构造函数
    CountedImpl(T* ptr):CoutedBase(),_px(ptr){}
    //析垢函数
    ~CountedImpl(){}
    virtual void Destroy(){
        delete this;
    }
    virtual void Dispose(){
        if(_px){
            delete(_px);
        }
    }
private:
    //拷贝构造函数、赋值运算符重载不应该实现
    CountedImpl(const CountedImpl&);
    CountedImpl& operator=(const CountedImpl&);
private:
    T* _px;
};
int main(){
    CountedImpl<char> pa(new char("hello"));
    return 0;
}
