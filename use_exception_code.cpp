// #include<iostream>
// #include<time.h>
// #include<stdlib.h>
// #include<string>
// 
// using namespace std;
// 
// class Exception{
// public:
//     Exception(int errid,const string& errmsg)
//         :_errid(errid)
//          ,_errmsg(errmsg){}
//     virtual const char* What(){
//         return _errmsg.c_str();
//     }
//     virtual ~Exception(){}
// protected:
//     int _errid;
//     string _errmsg;
// };
// class SqlException : public Exception{
// public:
//     SqlException(int errid,const string& errmsg):Exception(errid,errmsg){}
//     virtual const char*What(){
//         cout<<"SQL Error:";
//         return _errmsg.c_str();
//     }
// };
// void Sql(){
//     try{
//         if(rand()%4 == 0){
//             char* p = new char[0x7fffffff];
//         }
//     }
//     catch(exception& e){
//         throw SqlException(1,"内存不足");
//     }
// }
// int main(){
//     srand(time(0));
//     while(1){
//         try{
//             Sql();
//         }
//         catch(Exception& e){
//             cout<<e.What()<<endl;
//         }
//         catch(...){
//             cout<<"未知异常"<<endl;
//         }
//         sleep(1);
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// 
// class DivideByZeroException{
// public:
//     DivideByZeroException():message("attempted to divide by zero"){}
//     const char *What()const{
//         return message;
//     }
// private:
//     const char* message;
// };
// int main(){
//      int number1,number2;
//      double result;
//      cout<<"enter two intergers(end_of_file to end): ";
//      while(cin>>number1>>number2){
//          try{
//              if(number2 == 0){
//                  throw DivideByZeroException();
//              }
//              result = static_cast<double>(number1)/number2;
// 
//              cout<<"result = "<<result<<endl;
//          }
//          catch(DivideByZeroException ex){
//              cout<<"Exception occurred: "<<ex.What()<<'\n';
//          }
//          cout<<"\nEnter two intergers (end_of_file to end): ";
//      }
//      cout<<endl;
//      return 0;
// }


//#include<iostream>
//using namespace std;
//
//class DivideByZeroException{
//public:
//    DivideByZeroException():message("divide by zero"){}
//    const char* What()const{
//        return message;
//    }
//private:
//    char* message;
//};
//
//double div(int x,int y){
//    if(y == 0){
//        throw DivideByZeroException();
//    }
//    return static_cast<double>(x)/y;
//}
//
//int main(){
//    int number1;
//    int number2;
//    int result;
//    while(cin>>number1>>number2){
//        try{
//            result = div(number1,number2);
//            cout<<"result = "<<result<<endl;
//        }
//        catch(DivideByZeroException ex){
//            cout<<"Exception occurred: "<<ex.What()<<endl;
//        }
//        cout<<"\nEnter two intergers (end_of_file): ";
//    }
//    cout<<endl;
//    return 0;
//}

/////////////////////////////////////////////////////////
//异常的抛出
/////////////////////////////////////////////////////////

//#include<iostream>
//using namespace std;
//
//void fun(int i){
//    throw 1;
//}
//
//int main(){
//    try{
//        fun(1);
//    }catch(int i){
//        cout<<"error code: "<<i<<endl;
//    }
//    return 0;
//}


////////////////////////////////////////////////////////
//异常的重新抛出
////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void fun1(int i){
    throw 1;
}

void fun(int i){
    try{
        fun1(i);
    }catch(int i){
        throw "内存不足";
    }
}

int main(){
    try{
        fun(1);
    }catch( const char* s ){
        cout<<"error code: "<<s<<endl;
    }
    return 0;
}









