#include <iostream>

using namespace std;

class cmydata
{
    public:
        cmydata()
        {
            m_pszdata = new char [32];
        }
        virtual ~cmydata()
        {
            cout << "~cmydata()" << endl;
            delete m_pszdata;
        }
    private:
        char *m_pszdata;
};
class cmydataex : public cmydata
{
    public:
        cmydataex() 
        {
            m_pndata = new int;
        }
        ~cmydataex()
        {
            cout << "~cmydataex()" << endl;
            delete m_pndata;
        }
    private:
        int *m_pndata;
};
int main()
{
    cmydata *pdata = new cmydataex;

    delete pdata;

    return 0;
}
