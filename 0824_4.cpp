#include <iostream>

using namespace std;

class cmyInterface
{
    public:
        cmyInterface()
        {
            cout << "cmyinterface()" << endl;
        }
        virtual int getdata() const = 0;
        virtual void setdata(int nparam) = 0;
};
class cmydata : public cmyInterface
{
    public:
        cmydata() 
        {
            cout << "cmydata()" << endl;
        }
        virtual int getdata() const 
        {
            return m_ndata;
        }
        virtual void setdata(int nparam) 
        {
            m_ndata = nparam;
        }
    private:
        int m_ndata = 0;
};
int main()
{
    cmydata a;
    a.setdata(5);
    cout << a.getdata() << endl;

    return 0;
}
/*
가상 클래스 또는 가상함수의 종류
1. 일반가상클래스
    : 자식 클래스에서 부모 클래스의 멤버함수를 재정의해서 사용할 수 있다.
2. 순수가상클래스
    : 자식 클래스에서 부모 클래스의 멤버함수를 꼭 재정의해서 사용해야 한다.
*/