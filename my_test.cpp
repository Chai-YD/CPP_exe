////******************************************
////三维点类
////******************************************
//# include<iostream>
//#include<stdio.h>
//using namespace std;
//
////模板
//template<class type>
//class point3d{
//public:
//    //构造函数
//    point3d(type x = 0.0,type y = 0.0,type z = 0.0):_x (x),_y(y),_z(z){}
//    //获取x坐标值
//    type x(){
//        return _x;
//    }
//    //对坐标X进行赋值
//    void x(type xval){
//        _x = xval;
//    }
//private:
//    type _x;
//    type _y;
//    type _z;
//};//类结束
//
////测试函数
//void Test(){
//    point3d<int> p(1,2,3);
//    int pval = p.x();
//    printf("X = %d\n",pval);
//}
//
//int main(){
//    Test();
//    return 0;
//}
//******************************************
//多维点类（三维点类的扩张版）
//******************************************

#include<iostream>
using namespace std;
#include<assert.h>
template <class type,int dim>

class point{
    public:
        //重载构造函数
        point(type coords[dim]){
            int index = 0;
            //初始化
            for(;index < dim;++index){
                _coords[index] = coords[index];
            }
        }
        type& operator[] (int index){
            assert( index < dim && index >= 0 );
            return _coords[index];
        }
        void print(){
            int i = 0;
            for(;i<dim;++i){
                cout<<_coords[i]<<" ";
            }
            cout<<endl;
        }
    private:
        type _coords[dim];
};
//inline 
//template<class type,int dim>
//ostream& operator<<(ostream &os,point<type,dim> &p){
//    int x = 0;
//    os<<"(";
//    for(;x<dim-1;++x){
//        os<<p[x]<<" ";
//    }
//    os<<p[dim-1];
//    os<<")";
//}
void Test1(){
    int coords[3] = {1,2,2};
    point<int,3> p(coords);
    cout<<p[1]<<endl;
    p.print();
}

int main(){
    Test1();
    return 0;
}





