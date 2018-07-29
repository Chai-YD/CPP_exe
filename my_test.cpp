# include<iostream>
#include<stdio.h>
using namespace std;

//模板
template<class type>
class point3d{
public:
    //构造函数
    point3d(type x = 0.0,type y = 0.0,type z = 0.0):_x (x),_y(y),_z(z){}
    //获取x坐标值
    type x(){
        return _x;
    }
    //对坐标X进行赋值
    void x(type xval){
        _x = xval;
    }
private:
    type _x;
    type _y;
    type _z;
};//类结束

//测试函数
void Test(){
    point3d<int> p(1,2,3);
    int pval = p.x();
    printf("X = %d\n",pval);
}

int main(){
    Test();
    return 0;
}







