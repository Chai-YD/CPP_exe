#include "book.h"

void initialize();
void addBook();
void borrowBook();
void returnBook();
void displayBook();

int main(){
    int selector;
    while(1){
        cout<<"0--退出\n";
        cout<<"1--初始化文件\n";
        cout<<"2--添加书籍\n";
        cout<<"3--借书\n";
        cout<<"4--还书\n";
        cout<<"5--显示所有书目信息\n";
        cout<<"请选择（0-5）：\n";
        cin>>selector;
        if(selector == 0){
            break;
        }
        switch(selector){
            case 1:
                initialize();break;
            case 2:
                addBook();break;
            case 3:
                borrowBook();break;
            case 4:
                returnBook();break;
            case 5:
                displayBook();break;
        }
    }
    return 0;
}
//函数的实现
void initialize(){
    ofstream outfile("book");
    Book::resetTotal();
    outfile.close();
}

void addBook(){
    char ch[20];
    Book *bp;
    ofstream outfile("book",ofstream::app);//以app方式打开，调至文件尾
    Book::addTotal();
    cout<<"请输入书名：";cin>>ch;
    bp = new Book(ch);
    outfile.write(reinterpret_cast<const char*>(bp),sizeof(*bp));
    delete bp;
    outfile.close();
}

void borrowBook(){
    int bookNo,readerNo;
    fstream iofile("book");
    Book bk;
    cout<<"请输入书号和读者号：";cin>>bookNo>>readerNo;
    iofile.seekg((bookNo - 1)*sizeof(Book));
    iofile.read(reinterpret_cast<char*>(&bk),sizeof(Book));
    bk.borrow(readerNo);
    iofile.seekp((bookNo-1)*sizeof(Book));

    iofile.write(reinterpret_cast<char*>(&bk),sizeof(Book));
    iofile.close();
}

void returnBook(){
    int bookNo;
    fstream iofile("book");
    Book bk;
    cout<<"请输入书号：";cin>>bookNo;
    iofile.seekg((bookNo-1)*sizeof(Book));
    bk.Return();
    iofile.seekp((bookNo-1)*sizeof(Book));
    iofile.write(reinterpret_cast<char*>(&bk),sizeof(Book));
    iofile.close();
}

void displayBook(){
    ifstream infile("book");
    Book bk;
    infile.read(reinterpret_cast<char*>(&bk),sizeof(Book));
    while(!infile.eof()){
        bk.display();
        infile.read(reinterpret_cast<char*>(&bk),sizeof(Book));
    }
    infile.close();
}



