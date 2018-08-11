////标准输出示例程序
//#include<iostream>
//using std::cout;
//using std::endl;
//
//int main(){
//    int a = 5,*p = &a ;
//    double x = 3.1415926;
//    char ch = 'a';
//    cout<<"a = "<< a <<endl;
//    cout<<"x = "<< x <<endl;
//    cout<<" ch = "<<ch<<endl;
//    cout<<"p = "<<p<<endl;
//    cout<<"*p = "<<*p<<endl;
//    return 0;
//}

////指向字符的指针输出示例程序
//#include<iostream>
//using std::endl;
//using std::cout;
//
//int main(){
//    char* ptr = "abcdef";
//    cout<<"ptr指向的内容是： "<<ptr<<endl;
//    cout<<"ptr中保存的地址是："<<(void *)ptr<<endl;
//    return 0;
//}


////通过put成员函数进行字符的输出
//#include<iostream>
//using std::endl;
//using std::cout;
//
//int main(){
//    cout.put('A');
//    cout.put(65);
//    cout.put('A').put('\n');
//}


////通过write成员函数进行无格式的输出
//#include<iostream>
//using std::cout;
//
//int main(){
//    char buf[] = "HAPPY BIRTHDAY";
//    cout.write(buf,10);
//}


////标准输入示例程序
//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//
//int main(){
//    int grade,highestGrade = -1;
//    cout<<"Enter grade(enter end-of-file to end):";
//    while(cin>>grade){
//        if(grade > highestGrade){
//            highestGrade = grade;
//        }
//        cout<<"Enter grade(enter end-of-file to end):";
//    }
//    cout<<"\n highestGrade is :"<<highestGrade<<endl;
//    return 0;
//}


////通过get和getline成员函数进行字符和字符串的输入
//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int main(){
//    char ch;
//    while((ch = cin.get()) != EOF){
//        cout<<ch;
//    }
//    return 0;
//}


// #include<iostream>
// using namespace std;
// 
// int main(){
//     string str;
//     //getline(cin,str);
//     //cout<<str;
//     //cout<<str.size()<<endl;
//     char ch;
//     cin.get(ch);
//     cout<<ch;
//     return 0; 
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// 
// int main(){
//     char ch[20];
//     cin.get(ch[0]);
//     int i = 0;
//     for(;i < 20 && ch[i] != '\n';++i){
//         cin.get(ch[i + 1]);
//     }
//     cout<<i<<endl;
//     return 0;
// }


// //通过read函数进行无格式的输入
// #include<iostream>
// using namespace std;
// int main(){
//     char buf[80];
//     cin.read(buf,20);
// 
//     cout.write(buf,cin.gcount());
//     cout<<endl;
//     cout<<"总数："<<cin.gcount()<<endl;
//     return 0;
// }


// //文件的顺序读写
// #include<iostream>
// #include<fstream>
// using namespace std;
// 
// int main(){
//     ofstream out("file");
//     ifstream in;
//     int  i;
//     if(!out){
//         cerr<<"create file error\n";
//         return 1;
//     }
//     for(i = 1;i<= 10;++i){
//         out<<i<<' ';
//     }
//     out.close();
//     in.open("file");
//     if(!in){
//         cerr<<"open file error\n";
//         return 1;
//     }
//     while(in>>i){
//         cout<<i<<' ';
//     }
//     return 0;
// }


// #include<iostream>
// #include<fstream>
// using namespace std;
// 
// int main(){
//     fstream in("file");
//     int i;
//     if(!in){
//         cerr<<"open file error\n";
//         return 1;
//     }
//     in.seekp(10);//重新定位写文件指针
//     in<<20;
//     in.seekg(0);//读文件指针移到文件起始位置
//     while(in>>i){
//         cout<<i<< ' ';
//     }
//     in.close();
//     return 0;
// }




