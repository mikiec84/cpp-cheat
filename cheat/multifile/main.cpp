#include <iostream>

#include "a.h"
#include "b.h"

using namespace std;

int i = 0;
static int staticInt = 0;

//extern int externIntInit = 1;
    //WARN
    //extern initialized?!

void func(){ cout << "mainFunc" << endl; }

static void staticFunc()
{
    cout << "main" << endl;
    cout << staticInt << endl;
    cout << aHStaticInt << endl;
    cout << externInt << endl;
}

int main(int argc, char** argv)
{
    //static demostration
        staticFunc();
        a();
        staticFunc();
        a();

    a();
    b();
}