//#pragma once
//
//class CoutedBase{
//public:
//    //构造函数
//    CoutedBase(long count = 1):_count(count){}
//    //析垢函数
//    virtual ~CoutedBase(){}
//
//    //删除引用计数
//    virtual void Destroy() = 0;
//    //释放管理对象
//    virtual void Dispose() = 0;
//    //增加引用计数
//    void Add_count(){
//        ++_count;
//    }
//    //减引用计数
//    void Release(){
//        if(--_count == 0){
//            Dispose();
//        }
//    }
//    //获取计数
//    long Getcount(){
//        return _count;
//    }
//    //防止拷贝构造与赋值运算符重载
//    CoutedBase(const CoutedBase&);
//    CoutedBase& operator=(const CoutedBase&);
//private:
//    long _count;
//};
//
////CoutedBase类是一个抽象类，不能实例化出对象，需要继承实现纯虚函数
//template<class T>
//class CountedImpl:public CoutedBase{
//public:
//    //构造函数
//    CountedImpl(T* ptr):CoutedBase(),_px(ptr){}
//    //析垢函数
//    ~CountedImpl(){}
//    virtual void Destroy(){
//        delete this;
//    }
//    virtual void Dispose(){
//        if(_px){
//            delete(_px);
//        }
//    }
//private:
//    //拷贝构造函数、赋值运算符重载不应该实现
//    CountedImpl(const CountedImpl&);
//    CountedImpl& operator=(const CountedImpl&);
//private:
//    T* _px;
//};
//int main(){
//    CountedImpl<char> pa(new char("hello"));
//    return 0;
//}

////////////////////////////////////////////////////////////
//scoped_ptr的实现
////////////////////////////////////////////////////////////

//#include<iostream>
//using namespace std;
////scoped_ptr的出现是为量改进auto_ptr;
////auto_ptr在赋值、拷贝构造时通过 权限的转移来完成的；
////scoped_ptr为了不使用权限的转移，直接不允许进行拷贝和赋值操作。
//template<class T>
//class scoped_ptr{
//public:
//    //构造函数
//    scoped_ptr(T* ptr = new(T))
//        :_ptr(ptr){}
//    //析垢函数
//    ~scoped_ptr(){
//        if(_ptr){
//            delete _ptr;
//            _ptr = NULL;
//        }
//    }
//    T scoped_ptr*(){
//        return *_ptr;
//    }
//    T* scoped_ptr->(){
//        return _ptr;
//    }
//private:
//    //拷贝构造函数
//    scoped_ptr(scoped_ptr<T>& sp);
//    scoped_ptr<T>& operator=(scoped_ptr<T>& sp);
//    T* _ptr;
//}

/////////////////////////////////////////////////////////////////
//share_ptr的实现
/////////////////////////////////////////////////////////////////

//#include<iostream>
//using namespace std;
////允许赋值、拷贝的执行
////但又不允许权限的转移
////引入计数器
//template<class T>
//class share_ptr{
//public:
//    //构造函数
//    share_ptr(T* ptr = new(T))
//        :_ptr(ptr),_count(new(int(1))){}
//
//    //拷贝构造函数
//    share_ptr(share_ptr<T>& ptr)
//        :_ptr(ptr._ptr),_count(ptr._count){}
//    //赋值运算符重载
//    share_ptr<T>& operator=(const share_ptr<T>& ptr){
//        if(_ptr != ptr){
//            if(--(*_count) == 0){
//                delete _ptr;
//                _ptr = NULL;
//            }
//            _ptr = ptr._ptr;
//            _count = ptr._count;
//        }
//        (*_count)++;
//        return *this;
//    }
//    share_ptr<T>& operator= (share_ptr<T> ptr){
//        swap(_ptr ,ptr->_ptr);
//
//        swap(_count,ptr._count);
//        return *this;
//    }
//    T& operator*(){
//        return *_ptr;
//    }
//    T*  operator->(){
//        return _ptr;
//    }
//    //析垢函数
//    ~share_ptr(){
//        if(--(*_count) == 0){
//            delete _ptr;
//            _ptr = NULL;
//        }
//        delete _count;
//    }
//private:
//    //指针
//    T* _ptr;
//    //计数器
//    int* _count;
//    *_count = 0;
//}

















