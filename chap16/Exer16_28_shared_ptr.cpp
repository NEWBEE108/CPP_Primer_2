#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <stdexcept>
#include <initializer_list>
#include "Exer16_28_shared_ptr.h"
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;
using std::function;
using std::runtime_error;
// sample class
class Base {
public:
    virtual void print() const { std::cout << "This is the base class." << std::endl; }
    virtual ~Base() = default;
};
class Derived : public Base {
public:
    void print() const { std::cout << "This is a derived class." << std::endl; }
    ~Derived() = default;
};
void del_int(int *p)
{
    delete p;
    cout << "delete int pointer p" << endl;
}
int del_str(string *p)
{
    delete p;
    cout << "delete string pointer p" << endl;
    return 0;
}
int main()
{
    // test for shared_ptr
    shared_ptr<int> sp(new int(2));
    shared_ptr<int> sp2 = sp; // here, the non-generic version of copy constructor is called
    shared_ptr<int> sp3;
    cout << "Is sp unique? " <<sp.unique() << endl;
    cout << "sp.use_count(): " << sp.use_count() << endl;
    cout << "sp2.use_count(): " << sp2.use_count() << endl;
    cout << "sp3.use_count(): " << sp3.use_count() << endl;
    shared_ptr<int> sp4(sp2, del_int);
    cout << "sp3.use_count(): " << sp.use_count() << endl;
    cout << "sp = " << *sp << endl;
    {
        shared_ptr<string> sp5;
        cout << "sp5.use_count(): " << sp5.use_count() << endl;
        sp5.reset(new string("this"), del_str);
        cout << "sp5.use_count(): " << sp5.use_count() << endl;
    }
    cout << "sp6: ";
    auto sp6 = make_shared<vector<int>>(vector<int>{1, 2, 3, 4, 5});
    for(auto p = sp6->begin(); p != sp6->end(); ++p)
        cout << *p << " ";
    cout << endl;
    shared_ptr<double> sp7;
    if(sp7)
        cout << "sp7 != nullptr" << endl;
    else
        cout << "sp7 == nullptr" << endl;
    shared_ptr<vector<char>> sp9(new vector<char>{1, 2, 3});
    auto sp10 = sp9;
    cout << "sp9.use_count(): " << sp9.use_count() << endl;
    sp9.reset();
    cout << "sp9.use_count(): " << sp9.use_count() << endl;
    cout << "sp10.use_count(): " << sp10.use_count() << endl;
    shared_ptr<int> sp11;
    cout << "sp11.use_count(): " << sp11.use_count() << endl;
    shared_ptr<vector<string>> sp12(new vector<string>(), [](vector<string> *q) { cout << "delete vector"<< endl; delete q;});
    // swap
    swap(sp, sp11);
    sp.swap(sp11);
    cout << "sp.use_count(): " << sp.use_count() << endl;
    cout << "sp11.use_count(): " << sp11.use_count() << endl;
    try {
        cout << *sp << " " << *sp11 << endl; // sp is null now; throw exception
    }
    catch(runtime_error err) {
        cerr << err.what() << endl;
    }
    // rvalue
    std::initializer_list<int> il = {1, 2, 3};
    auto sp13 = make_shared<vector<int>>(il);
    cout << "sp13.use_count(): " << sp13.use_count() << endl;
    // get
    swap(sp, sp11);
    auto pi = sp11.get();
    cout << *pi << endl;
    // reference count of null pointer could be freed too
    shared_ptr<int> sp14;
    // derived-to-base conversion
    shared_ptr<Base> sp15(new Derived());
    sp15->print(); // dynamic call
    return 0;
}
