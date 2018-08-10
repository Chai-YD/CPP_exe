#include<iostream>
#include<cstdlib>
using std::endl;
using std::cout;

template <class T>
class Array{
    int low;
    int high;
    T* storage;
public:
    //构造函数
    Array(int l = 0,int h = 0):low(l),high(h){
        storage = new T[high - low +1];
    }
    //复制构造函数
    Array(const Array & a);
    //赋值运算符重载
    Array &operator=(const Array & a);
    //下标运算符重载
    T& operator[](int index);
    //析垢函数
    ~Array(){
        delete[] storage;
    }
};
//复制构造函数实现
template<class T>
Array<T>::Array(const Array<T> &a){
    low = a.low;
    high = a.high;
    storage = new T[high - low + 1];
    int i = 0;
    for(;i < high-low +1;++i){
        storage[i] = a.storage[i];
    }
}

//赋值运算符重载
template<class T>
Array<T> & Array<T>::operator=(const Array<T> &a){
    if(&a == this){
        return *this;//防止自己拷贝自己
    }
    delete[] storage;
    low = a.low;
    high = a.high;
    storage = new T[high - low +1];
    int i = 0;
    for (;i<high - low +1;++i){
        storage[i] = a.storage[i];
    }
    return *this;
} 

//下标运算符重载函数
template <class T>
T& Array<T>::operator[](int index){
    if(index<low || index > high){
        cout<<"下标越界"<<endl;
        exit(-1);
    }
    return storage[index-low];
}

int main(){
    Array<int> array(10,20);
    int i = 0;
    for(i = 10;i < 20;i++){
        array[i] = i;
    }
    for(i = 10;i< 20;++i){
        cout<<array[i]<< " ";
    }
    cout<<endl;
    return 0;
}





