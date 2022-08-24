#include <iostream>

using namespace std;

#define default_fare 1000

class cperson
{
    public:
        cperson(){}
        virtual ~cperson()
        {
            cout << "virtual ~cperson()" << endl;
        }
        virtual void calcfare() = 0;

        virtual unsigned int getfare()
        {
            return m_nfare;
        }
    protected:
        unsigned int m_nfare = 0;
};
class cbaby : public cperson
{
    public:
        virtual void calcfare()
        {
            m_nfare = 0;
        }
};
class cchild : public cperson
{
    public:
        virtual void calcfare()
        {
            m_nfare = default_fare * 50 / 100;
        }
};
class cteen : public cperson
{
    public:
        virtual void calcfare()
        {
            m_nfare = default_fare * 75 / 100;
        }
};
class cadult : public cperson
{
    public:
        virtual void calcfare()
        {
            m_nfare = default_fare;
        }
};
int main()
{
    cperson * arlist[3] = {0};
    int nage = 0;

    for(auto &person : arlist)
    {
        cout << "나이를 입력하세요 : ";
        cin >> nage;
        if(nage < 8)
            person = new cbaby;

        else if(nage < 14)
            person = new cchild;
        else if(nage < 20)
            person = new cteen;
        else
            person = new cadult;
        person -> calcfare();
    }
    for(auto person : arlist)
        cout<< person -> getfare() << "원" << endl;
    for(auto person : arlist)
        delete person;

        return 0;
}