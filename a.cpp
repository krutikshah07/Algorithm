#include<iostream>  
using namespace std;  

class Base  {  
    public:  
    void show()  {
        cout<<" In Base \n";  
    }  
};  

class Derived: public Base  {  
    public:  
        void show()  {
            cout<<"In Derived \n";  
        }  
};  

int main()    {  
    Base *bp,b ;
    Derived d;
    bp=&b;  
    bp->show();  
    bp=&d;  
    bp->show();
    return 0;  
}
