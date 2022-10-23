#include <iostream>

using namespace std;

/*
# function overloding.
1. parameter must be different.
2. function overloding in one or same
   class.
3. did not used inheritance.
4. one function did not hide another 
   function.
5. return type may or may not be same.   

# COMPILE TIME POLYMORPHISM.
*/
class overload
{
    public: 
    void add (int a, int b)
    {
        cout << a+b << endl;
    }

    void add (int a, int b, int c)
    {
        cout << a+b+c <<endl;
    }

    void add ()
    {
        cout << "Nothing is add." <<endl;
    }
};

int main()
{  
    overload o;
    o.add(10,100);
    o.add(10,100,1000);
    o.add();

   
    return 0;
}