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
//		cout<<"Person::BuyTickets()->��Ʊ--ȫ��"<< endl;
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
//	string _name ;   // ����
//};
//
//
//class Student : public Person
//{
//
//	virtual Student* BuyTickets()
//	{
//		cout<<"Student::BuyTickets()->��Ʊ-��� "<<endl ;
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
//		// ��Դ�ͷ�
//		cout<<"~Student()"<<endl;
//	}
//
//protected :
//	int _num ;   //ѧ��
//};
//
//void Fun(Person& p)
////void Fun(Person& p)
//{
//	p.BuyTickets ();
//}
//// ������̬ -- ����ͬ�ĺ�������ɲ�ͬ����
//// ��̬��������1.�麯������д�� 2.�����ָ�������
//
//// ��ͨ���ã��������й�
//// ��̬���ã��������й�
//
//// 1.Э�䡣��д������ֵ���Բ�ͬ���ֱ��Ǹ��ӹ�ϵ���͵�ָ������� ��
//// 2.�������麯���������м������֡� ��
//// 3.(��Ҫ)�ĸ�Ĭ�ϳ�Ա��������������������Ҫ������麯���������������鶨����麯���������������ɶ�̬���ܱ�֤��ȷ���ö�Ӧ�麯����
//// 4.(��Ҫ)���ء���д(����)���ض���(����)
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
//	Person* p = new Student; // ���ռ� call ����
//	delete p;	//  call ���� �ͷſռ� p->~Person();
//
//	return 0;
//}

/*
class Person
{
	virtual void Display () = 0;   // ���麯��
public:
	void f()
	{
		cout<<"f()"<<endl;
	}
protected :
	string _name ;          // ����
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
