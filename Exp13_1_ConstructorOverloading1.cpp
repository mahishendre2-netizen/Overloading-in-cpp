// Mahi Shendre
// 25070123504

#include <iostream>
using namespace std;
class Add{
public:
    Add(int a, int b){
        cout << "a + b = "<<a+b<<endl;
    }
    Add(float a, float b){
        cout << "Float a + b = "<<a+b<<endl;
    }
    Add(int a, int b,int c){
        cout << "a + b + c = "<<a+b+c<<endl;
    }
};
int main() {
    Add a(18,16);
    Add b(10.25f,11.36f);
    Add c(10,20,30);
    return 0;
}
/*
Output:
a + b = 34
Float a + b = 21.61
a + b + c = 60
*/
