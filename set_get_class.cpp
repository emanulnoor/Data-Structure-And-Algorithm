#include<iostream>
using namespace std;
class myclass
{
    private:
    int a;
    public:
    void set_a(int val)
    {
        a=val;
    }
    int get_a()
    {
        return a;
    }
};
int main()
{
    myclass obj;
    obj.set_a(45);
    cout<<obj.get_a();
}
