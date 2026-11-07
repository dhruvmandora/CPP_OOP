#include <iostream>
using namespace std;
class employee{
    private:
        int a , b, c;
    public:
        int d, e;

        void setdata(int a , int b, int c);
        void getdata(){
            cout << "The value of a is : " << a << endl;
            cout << "The value of b is : " << b << endl;
            cout << "The value of c is : " << c << endl;
            cout << "The value of d is : " << d << endl;
            cout << "The value of e is : " << e << endl;
        } 
};
void employee :: setdata(int a1 , int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    employee dhruv;
    /*dhruv.a = 123; // this will show us a error because a is private and we cannot access it outside the class */
    dhruv.setdata(1,2,3);
    dhruv.d = 4;
    dhruv.e = 5;
    dhruv.getdata();
    return 0;
}