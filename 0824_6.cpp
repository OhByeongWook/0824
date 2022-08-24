#include <iostream>

using namespace std;

class cmyimage
{
    public:
        cmyimage(int nheight, int nwidth) : m_nheight(nheight), m_nwidth(nwidth)
        {
            cout << "cmyimage(int, int)" << endl;
        }
        int getheight() const {return m_nheight;}
        int getwidth() const {return m_nwidth;}
    protected:
        int m_nheight;
        int m_nwidth;
};
class cmyshape
{
    public:
        cmyshape(int ntype) : m_ntype(ntype)
        {
            cout << "cmyshape(int)" << endl;
        }
        int gettype() const {return m_ntype;}
    protected:
        int m_ntype;
};
class cmypicture : public cmyimage, public cmyshape
{
    public:
        cmypicture() : cmyimage(200, 120), cmyshape(1)
        {
            cout << "cmypicture()" << endl;
        }
};
int main()
{
    cmypicture a;
    cout << "width : " << a.getwidth() << endl;
    cout << "height : " << a.getheight() << endl;
    cout << "type : " << a.gettype() << endl;

    return 0;
}
