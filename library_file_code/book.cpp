#include "book.h"
Book::Book(const char* s){
    no = no_total;
    borrowed = 0;
    strcpy(name,s);
}
void Book::borrow(int readerno){
    if(borrowed == 0){
        cerr<<"此书已被借\n";
    }else{
        borrowed = readerno;
    }
}
void Book::Return(){
    if(borrowed == 0){
        cerr<<"此书没有被借出去\n";
    }else{
        borrowed = 0;
    }
}
void Book::display(){
    cout<<setw(10)<<no<<setw(20)<<name<<setw(10)<<borrowed<<endl;
}
void Book::resetTotal(){
    no_total = 0;
}
void Book::addTotal(){
    ++no_total;
}
int Book::no_total = 0;



