
// Sourceforge ticket #724
// https://sourceforge.net/p/codeblocks/tickets/724/

extern __declspec(dllexport) void f1(int*), *f2(), f3(float);

//f1  //void f1(int*)
//f2  //void* f2()
//f3  //void f3(float)

extern unsigned int Func1(int*), *Func2(char);

//Func1  //unsigned int Func1(int*)
//Func2  //unsigned int* Func2(char)

unsigned int  (*fp1)(int*) = Func1,
             *(*fp2)(char) = Func2,
              (*fp3)();

//fp1  //unsigned int fp1(int*)
//fp2  //unsigned int* fp2(char)
//fp3  //unsigned int fp3()

class MyClass
{
    int m_a;

    // ctor
    MyClass(int a) : m_a(a) {}
};

void TestFunction()
{
    MyClass obj1(2), obj2(20), obj3(7);

    //obj1.     //m_a
    //obj2.     //m_a
    //obj3.     //m_a
}
