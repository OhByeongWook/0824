#include <iostream>

using namespace std;

class  cmydata
{
    public:
        virtual void printdata()
        {
            cout << "cmydata: " << m_ndata << endl;
        }
        void testfunc()
        {
            cout <<" ***testfunc()***" << endl;
            printdata();
            cout << "**********" << endl;
        }
    protected:
        int m_ndata = 10;
};
class cmydataex : public cmydata
{
    public:
        virtual void printdata()
        {
            cout << "cmydataex: " << m_ndata * 2 << endl;    
        }  
};
int main()
{
    cmydataex a;
    a.printdata();
    
    cmydata &b = a;
    b.printdata();

    a.testfunc();

    return 0;
}

/* 파생 형식에서 메서드를 재정의 하면 과거의 정의가 완전히 무시된다.
----------------------------------------------------
자식 클래스에서 멤버함수를 오버로딩하면 부모클래스의 멤버함수는 완전히 무시된다.
*/