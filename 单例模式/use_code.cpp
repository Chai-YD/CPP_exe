//懒汉模式
class Singleton{
private:
    static Singleton* m_instance;
    Singleton(){}
public:
    Static Singleton* GetInstance();
};
Singleton* Singleton::GetInstance(){
    if(NULL == m_instance){
        Lock();
        if(NULL == m_instance){
            m_instance = new Singleton();
        }
        UnLock();
    }
    return m_instance;
}


//饿汉模式
class SingletonStatic{
private:
    static const SingletonStatic* m_instance;
    SingletonStatic(){}
public:
    static const SingletonStatic* GetInstance(){
        return m_instance
    }
};
const SingletonStatic* SingletonStatic::m_instance = new SingletonStatic();

