#include <iostream>
#include "MyString.h" 
using namespace std;


int main()
{
    MyString str1("Hello");
    cout << "str1: ";
    str1.print();
    MyString str2("world!");
    cout << "str2: ";
    str2.print();
    cout << endl << endl;

    str2 = move(str1);

    str1.print();

    /*MyString a = move(str1);
    str1.print();
    a.print();*/


    /*MyString str1("Hello, world!");
    cout << "str1: ";
    str1();
    char a = str1[0];
    cout << endl << a << endl;

    MyString obj2;
    obj2 = str1;
    cout << "2: ";
    obj2();*/

    /*MyString str1("Hello, world!");
    cout << "str1: ";
    str1.print();
    MyString str2 = str1;
    cout << "str2: ";
    str2.print();*/


    /*MyString str("Hello Worl");
    MyString str1("Hello Worl");
    cout << str.MyStrCmp(str1);

    {
        MyString str2;
        MyString str3;
        cout << "Count: " << MyString::GetCount() << endl;
    }
    cout << "Count: " << MyString::GetCount() << endl;*/


    /*MyString str("Hello");
    str.MyDelChr('e');
    str.print();*/

    /*MyString str("Hello");
    MyString str1(" world");

    str.MyStrCat(str1);
    str.print();
    */

    /*MyString str("Hello Wo");
    str.print();
    cout << str.MyChr('t');*/

    /*MyString str1("1234");
    str1.print();
    bool search = str1.MyStrStr("89");
    cout << search;
    search = str1.MyStrStr("12");
    cout << endl << search;*/

    /*MyString str1("Hello, WWworld!");
    MyString str2("123");

    str2.MyStrcpy(str1);

    cout << "1: ";
    str1.print();
    cout << endl << "2: ";
    str2.print();*/



    return 0;
}