#include <iostream>
using namespace std;

class area
{
    float radius;
    int length;
    int breadth;
    float base;
    float height;

public:
    void cal_area(float radius) {
        double area = 3.1416 * radius * radius;
        cout << area;
    }
    
    void cal_area(float base, float height) {
        double area = 0.5 * base * height;
        cout << area;
    }
    
    void cal_area(int length, int breadth) {
        int area = length * breadth;
        cout << area;
    }
};

int main()
{
    area a1, a2, a3;

    a1.cal_area(3);
    a2.cal_area(2.3, 4.8);
    a3.cal_area(6, 4);

    return 0;
}
