#include <iostream>
using namespace std;
class Test {
public:
    int x;
    Test() {
        x = 0;
    }

};

void addTestBy1(Test& t) {
    t.x += 1;
} 


int main() {
    Test t1;   
    cout << t1.x << endl;
    addTestBy1(t1);
    cout << t1.x << endl;

    addTestBy1(t1);
    addTestBy1(t1);
    addTestBy1(t1);
    cout << t1.x << endl;
    return 0;   
}