// One child from MANY parent

#include <iostream>
using namespace std;
class Father
{
public:
    void fatherProperty()
    {
        cout << "Father's property" << endl;
    }
};
class Mother
{
public:
    void motherProperty()
    {
        cout << "Mother's property" << endl;
    }
};
class Child : public Father, public Mother
{
public:
    void childProperty()
    {
        cout << "Child's property" << endl;
    }
};
int main()
{
    Child c;

    c.fatherProperty();
    c.motherProperty();
    c.childProperty();

    return 0;
}