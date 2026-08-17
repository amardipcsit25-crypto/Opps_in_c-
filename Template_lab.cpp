// Create a function template to swap 2 values. Using its template function, swap 2 integer, floating point, and character values.
// #include<iostream>
// using namespace std;
// template<class T>
// void swap_number(T &num1,T &num2){
//     T temp;
//     temp=num1;
//     num1=num2;
//     num2=temp;
//     cout<<"After swapping:"<<num1<<" "<<num2<<endl;
// }

// int main(){
//     int num1,num2;
//     float num3,num4;
//     char ch1,ch2;
//     cout<<"Enter two integer number:";
//     cin>>num1>>num2;
//     swap_number(num1,num2);

//     cout<<"Enter two float number:";
//     cin>>num3>>num4;
//     swap_number(num3,num4);

//     cout<<"Enter two character:";
//     cin>>ch1>>ch2;
//     swap_number(ch1,ch2);
//     return 0;
// }

//Write a program to demonstrate a class template for any suitable situation of your choice.
#include <iostream>
using namespace std;

// Defining a simple Class Template
template <class T>
class Box {
private:
    T value;
public:
    Box(T val) {
        value = val;
    }
    void display() {
        cout << "Value inside the box: " << value << endl;
    }
};

int main() {
    Box<int> intBox(10);
    intBox.display();
    Box<float> floatBox(5.5);
    floatBox.display();
    return 0;
}
