// polymorphism means to take more than one form 

//using pointer to demonstrate the polymorphism by using virtual function.
// #include<iostream>
// using namespace std;
// class Ab{
//     private:
//     int num;
//     int age;
//     public:
//     virtual void setdata();
//     virtual void getdata();
// };
 
// void Ab::setdata(){
//     cout<<"Enter num and age:"<<endl;
//     cin>>num>>age;
// }

// void Ab::getdata(){
//     cout<<"num:"<<num<<"age:"<<age<<endl;
// }

// class Cd:public Ab{
//     int salary;
//     public:
//     void setdata();
//     void getdata();
// };

// void Cd::setdata(){
//     cout<<"Enter salary:"<<endl;
//     cin>>salary;
// }

// void Cd::getdata(){
//     cout<<"salary:"<<salary;
// }

// int main(){
//     Ab base;
//     Ab *ptr;
//     ptr=&base;
//     ptr->setdata();

//     Cd derived;
//     ptr=&derived;
//     ptr->setdata();
//     ptr->getdata();
// }

//wap to demonstrate the hybrid inheritance using the following scenario using virtual inheritance.
// [ Animal ]  <--- Grandparent (Base Class)
//          /      \
//         /        \
//   [ Mammal ]  [ WingedAnimal ]  <--- Parents (Virtual Inheritance)
//         \        /
//          \      /
//           [ Bat ]  <--- Child (Derived Class)

// #include <iostream>
// using namespace std;

// class Animal {
// private:
//     string breath;

// public:
//     void setter(string b) {
//         breath = b;
//     }

//     void displayAnimal() {
//         cout << "Breathing Type: " << breath << endl;
//     }
// };

// class Mammal : virtual public Animal {
// public:
//     void displayMammal() {
//         cout << "Mammal Feature: Gives birth to live young." << endl;
//     }
// };

// class WingedAnimal : virtual public Animal {
// public:
//     void displayWinged() {
//         cout << "Winged Animal Feature: Has wings to fly or glide." << endl;
//     }
// };

// // Child Class - Inherits from both Mammal and WingedAnimal
// class Bat : public Mammal, public WingedAnimal {
// public:
//     void displayBat() {
//         cout << "Bat Status: I am a unique mammal that can fly!" << endl;
//     }
// };

// int main() {
//     Bat myBat;
//     myBat.setter("Respires through Lungs");

//     cout << "--- Bat Hybrid Inheritance Demo ---" << endl;
//     myBat.displayAnimal();       // Inherited via Animal
//     myBat.displayMammal();       // Inherited via Mammal
//     myBat.displayWinged();       // Inherited via WingedAnimal
//     myBat.displayBat();          // Bat's own method

//     return 0;
// }

// VIRTUAL DESTRUCTOR IN C++

// It is used to destructor the desired destructor in the program.

// #include<iostream>
// using namespace std;
// class person{
//     string name;
//     string type;
//     public:
//     void setter(){
//         cout<<"Enter name and type :"<<endl;
//         getline(cin>>ws,name);
//         getline(cin>>ws,type);
//     }

//     void getter(){
//         cout<<"name:"<<name <<" type:"<<type;
//     }

//     virtual ~person(){
//         cout<<endl<<"Destructor of person class called"<<endl;
//     };
// };

// class student:public person{
//     private:
//     int roll_no,age;
//     public:
//     void setdata(){
//         cout<<"roll no:"<<roll_no<<" age:"<<age<<endl;
//         cin>>roll_no>>age;
//     }

//     void getdata(){
//         cout<<"Roll no:"<<roll_no<<" age:"<<age;
//     }

//     ~student(){
//         cout<<endl<<"Destructor of student class called"<<endl;
//     };
// };

// int main(){
//     student s;
//     s.setter();
//     s.setdata();
//     s.getter();
//     s.getdata();
//     cout<<"used pointer to demonstrate the virtual destructor"<<endl;
//     person *p=new student;
//     delete p;
//     return 0;
// }

    