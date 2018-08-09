#include <iostream>
using namespace std;

//class Person
//{
//public :
//	/*virtual Person()
//	{}*/
//
//	/*virtual Person& operator=(const Person& p)
//	{
//		return *this;
//	}*/
//
//	virtual Person* BuyTickets()
//	{
//		cout<<"Person::BuyTickets()->买票--全价"<< endl;
//
//		return this;
//	}
//
//	Person()
//	{
//		cout<<"Person()"<<endl;
//	}
//
//	virtual ~Person()
//	{
//		cout<<"~Person()"<<endl;
//	}
//
//protected :
//	string _name ;   // 姓名
//};
//
//
//class Student : public Person
//{
//
//	virtual Student* BuyTickets()
//	{
//		cout<<"Student::BuyTickets()->买票-半价 "<<endl ;
//		return this;
//	}
//public:
//	Student()
//	{
//		cout<<"Student()"<<endl;
//	}
//
//	virtual ~Student()
//	{
//		// 资源释放
//		cout<<"~Student()"<<endl;
//	}
//
//protected :
//	int _num ;   //学号
//};
//
//void Fun(Person& p)
////void Fun(Person& p)
//{
//	p.BuyTickets ();
//}
//// 多种形态 -- 调不同的函数，完成不同功能
//// 多态的条件：1.虚函数的重写。 2.父类的指针和引用
//
//// 普通调用：跟类型有关
//// 多态调用：跟对象有关
//
//// 1.协变。重写，返回值可以不同。分别是父子关系类型的指针和引用 坑
//// 2.父类是虚函数，子类中继续保持。 坑
//// 3.(重要)四个默认成员函数，除了析构，都不要定义成虚函数。析构函数建议定义成虚函数，析构函数构成多态，能保证正确调用对应虚函数。
//// 4.(重要)重载、重写(覆盖)、重定义(隐藏)
//
//void Test ()
//{
//	Person p;
//	Student s;
//	Fun(p );
//	Fun(s );
//}
//
//int main()
//{
//	Test();
//
//	Person* p = new Student; // 开空间 call 构造
//	delete p;	//  call 析构 释放空间 p->~Person();
//
//	return 0;
//}

/*
class Person
{
	virtual void Display () = 0;   // 纯虚函数
public:
	void f()
	{
		cout<<"f()"<<endl;
	}
protected :
	string _name ;          // 姓名
};

class Student : public Person
{
public:
	virtual void Display ()
	{
		cout<<"Student::Display()"<<endl;
	}
};
*/
/*
int main()
{
	Student s;
	s.Display();
	s.f();

	return 0;
}
*/

//class A
//{
//public:
//	virtual void f1()
//	{
//		cout<<"A::f1()"<<endl;
//	}
//
//	virtual void f2()
//	{
//		cout<<"A::f2()"<<endl;
//	}
//
//	void f3()
//	{
//		cout<<"A::f3()"<<endl;
//	}
//
//int _a;
//};
//
//class B : public A
//{
//public:
//	virtual void f1()
//	{
//		cout<<"B::f1()"<<endl;
//	}
//
//public:
//	int _b;
//};
//
//int main()
//{
//	A a;
//	B b;
//
//	A* p = &a;
//	p->f1();
//	a.f1();
//	p->f2();
//	a.f2();
//	p->f3();
//
//	p = &b;
//	p->f1();
//	p->f2();
//	p->f3();
//
//	return 0;
//}

class Base
{
public :
	virtual void func1()
	{
		cout<<"Base::func1" <<endl;
	}

	virtual void func2()
	{
		cout<<"Base::func2" <<endl;
	}

private :
	int a ;
};

class Derive :public Base
{
public :
	virtual void func1()
	{
		cout<<"Derive::func1" <<endl;
	}

	virtual void func3()
	{
		cout<<"Derive::func3" <<endl;
	}

	virtual void func4()
	{
		cout<<"Derive::func4" <<endl;
	}

private :
	int b ;
};

typedef void (*VFUNC)();

void PrintVFTable(int* table)
{
	printf("vftbale:%p\n", table);
	for (size_t i = 0; 0 != table[i]; ++i)
	{
		printf("vftbale[%d]:%p->", i, table[i]);
		VFUNC f = (VFUNC)table[i];
		f();
	}
	cout<<endl;
}

class A
{
public:
	virtual void f1()
	{
		
	}

	void f2()
	{
		cout<<"f2()"<<endl;
	}

	void f3()
	{
		cout<<this->_a<<endl;
	}

	int _a;
};


int main()
{
	A* p = NULL;
	p->f1();
	p->f2();
	p->f3();

	/*Base b;
	Derive d;

	PrintVFTable((int*)(*(int*)&b));
	PrintVFTable((int*)(*(int*)&d));*/

	return 0;
}
