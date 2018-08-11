#ifndef __book_h__
#define __book_h__
#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstring>

using namespace std;

class Book{
    int no;
    char name[20];
    int borrowed;
    static int no_total;
public:
    //构造函数
    Book(const char* s = "");
    void borrow(int readerno);
    void Return();
    void display();
    static void resetTotal();
    static void addTotal();
};
#endif
