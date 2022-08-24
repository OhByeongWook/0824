#include <iostream>

using namespace std;

class sidentity
{
    protected:
        string name;
        string address;
        int age;
    public:
        sidentity()
        {
            cout << "input name : ";
            cin >> name;
            cout << "input address : ";
            cin >> address;
            cout << "input age : ";
            cin >> age;
        }
        void sid_print()
        {
            cout << "name : " << name << endl;
            cout << "address : " << address << endl;
            cout << "age : " << age << endl; 
        }
};
class sgrades
{
    protected:
        int major1;
        int major2;
        int etc1;
        int etc2;
        int total;
        double avg;
    public:
        sgrades()
        {
            cout << "int major1 of score : ";
            cin >> major1;
            cout << "int major2 of socre : ";
            cin >> major2;
            cout << "input etc1 of score : ";
            cin >> etc1;
            cout << "input etc2 of score : ";
            cin >> etc2;
        }
        void result_cal()
        {
            total = major1 + major2 + etc1 + etc2;
            avg = total / 4.0;
        }
        void sgrad_print()
        {
            cout << endl << "========== subject score ========== " << endl;
            cout << "major1 : " << major1 << ", major2 : " << major2 << ", etc1 : " << etc1 << ", etc2 : " << etc2 << endl << endl;
            cout << "total : " << total << endl;
            cout << "average : " << avg << endl;
        }
};
class sinformation : public sidentity, public sgrades
{
    private:
        int id;
        string department;
    public:
        sinformation()
        {
            cout << "input id : ";
            cin >> id;
            cout << "input department : ";
            cin >> department;
        }
        void sinfor_print()
        {
            cout << "id : " << id << endl;
            cout << "department : " << department << endl;
        }
};
int main()
{
    cout << "========== input information ========== " << endl;
    sinformation std1;
    cout << endl << endl;
    cout << "========== result inforamtion ========== " << endl;
    std1.sinfor_print();
    std1.sid_print();
    std1.sid_print();
    std1.result_cal();
    std1.sgrad_print();
}