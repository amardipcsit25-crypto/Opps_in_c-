//wap to print the detail of the student using class and object.
// #include<iostream>
// using namespace std;
// class student {
//  private:
//  char name[20];
//  int rollno;
//  int age;

//  public:
//  void getdetail(){
//  cout<<"Enter your name:";
//  cin.getline(name,20);
//  cout<<"Enter your rollno:";
//  cin>>rollno;
//  cout<<"Enter your age:";
//  cin>>age;
//  }
//  void showdata(){
//     cout<<name<<endl;
//     cout<<rollno<<endl;
//     cout<<age;
//  }
// };

// int main(){
//     student s;
//     s.getdetail();
//     s.showdata();
//     return 0;
// }


//wap to print the your detail of using class and object.
// #include<iostream>
// using namespace std;
// class detail{
//     private:
//     char name[50];
//     int rollno;
//     char address[50];
//     char gender[50];

//     public:
//     void getdata();
//     void showdata();
// };

// void detail::getdata(){
//     cout<<"Enter your name,rollno,address,gender:"<<endl;
//     cin.getline(name,50);
//     cin>>rollno;
//     cin.ignore();
//     cin.getline(address,50);
//     cin.ignore();
//     cin.getline(gender,50);
// }

// void detail::showdata(){
//     cout<<"detail of the person:";
// cout<<name<<endl;
// cout<<rollno<<endl;
// cout<<address<<endl;
// cout<<gender<<endl;
// }

// int main(){
//     detail s;
//     s.getdata();
//     s.showdata();
//     return 0;
// }

// NESTED CLASS AND OBJECT 

//Create a class Car with a nested class Engine.
// The Car class should store the car model, and the Engine class should store the engine type.
// Create objects and display the complete information.
// #include<iostream>
// using namespace std;
// class Car{
//     private:
//     char car_model[20];
//     class Engine{
//         private:
//         char engine_type[40];
//         public:
//         void getdata2();
//         void showdata2();
//     };

//     Engine e;

//     public:
//     void getdata1();
//     void showdata1();
// }po;

// void Car::getdata1(){
//     cout<<"Enter the car model:";
//     cin.getline(car_model,20);
//     e.getdata2();
// }
// void Car::showdata1(){
//     cout<<"car model:"<<car_model<<endl;
//     e.showdata2();
// }
// void Car::Engine::getdata2(){
//     cout<<"Enter engine_type:";
//     cin.getline(engine_type,40);
// }
// void Car::Engine::showdata2(){
//     cout<<"engine type:"<<engine_type;
// }
// int main(){
//     Car s;
//     s.getdata1();
//     s.showdata1();
//     return 0;
// }

// Create a class Computer containing a nested class Processor.
// Store the computer brand in the outer class and processor name in the inner class.
// Create objects and display the specifications.
// #include<iostream>
// using namespace std;
// class Computer{
//     private:
//     char brand[30];
//     class Processor{
//         private:
//         char processor_name[50];
//         public:
//         void setdata();
//         void getdata();
//     };
//     Processor po;
//   public:
//   void setdata1();
//   void getdata1();
// };
// void Computer::setdata1(){
//     cout<<"Enter computer brand:";
//     cin.getline(brand,30);
//     po.setdata();
// }
// void Computer::getdata1(){
//     cout<<"computer brand:"<<brand<<endl;
//     po.getdata();
// }

// void Computer::Processor::setdata(){
//     cout<<"Enter Processor name:";
//     cin.getline(processor_name,50);
// }
// void Computer::Processor::getdata(){
//     cout<<"processor name:"<<processor_name;
// }
// int main(){
//     Computer c;
//     c.setdata1();
//     c.getdata1();
//     return 0;
// }

// Create a class University with a nested class Department.
// Store the university name and department name separately.
// Create objects and display both details.
// #include<iostream>
// using namespace std;
// class University{
//     private:
//     char university_name[50];
//     class Department{
//         private:
//         char department_name[50];
//         public:
//         void getdata();
//         void display();
//     };
//     Department d;
//     public:
//     void getdata1();
//     void display2();
// };
// void University::getdata1(){
//     cout<<"Enter University Name:";
//     cin.getline(university_name,50);
//     d.getdata();
// }
// void University::display2(){
//     cout<<"University Name:"<<university_name<<endl;
//     d.display();
// }
// void University::Department:: getdata(){
//     cout<<"Enter department:";
//     cin.getline(department_name,50);
// }
// void University::Department:: display(){
//     cout<<"department:"<<department_name<<endl;
// }
// int main(){
// University u;
// u.getdata1();
// u.display2();
// return 0;
// }

//CONSTRUCTOR 

// #include<iostream>
// using namespace std;
// class student{
// 	private:
// 	int age;
// 	int roll_no;
// 	public:
// 	student();
// 	student(int a,int b);
// 	void dispaly(){
// 		cout<<"A:"<<age<<" "<<"B:"<<roll_no<<endl;
// 	}
// };
// student::student(int x=0,int y=0){
// 	age=x;
// 	roll_no=y;
// }
// int main(){
// 	student s(0,0);
// 	s.dispaly();
//     student s2(20,4);
// 	s2.dispaly();
// 	return 0;
// }

//wap to print the detail of your using the constructor.
// #include<iostream>
// using namespace std;
// class detail{
// 	private:
// 	string name;
// 	string address;
// 	string gender;
// 	public:
// 	detail(string a="",string b="" ,string c="");
// 	void display(){  //for the constructor
// 		cout<<"name:"<<name<<" "<<"address:"<<address<<" "<<"gender:"<<gender;
// 	}
// 	~detail(){}; // for the destructors

// };
// detail::detail(string x,string y,string z){
// 	name=x;
// 	address=y;
// 	gender=z;
// }
// int main(){
// 	detail s("amar","siraha","male");
// 	s.display();
// }

//COPY CONSTRUCTOR
//wap to copy the number using class and object and constructor and distructor.
// #include<iostream>
// using namespace std;
// class number{
//     private:
//     int number1,number2;
//     public:
//     number();
//     number(int a,int b){
//         number1=a;
//         number2=b;
//     }
//      number(const number &obj){
//         number1=obj.number1;
//         number2=obj.number2;

//     }
//      void display(){
//         cout<<"number1:"<<number1<<endl;
//         cout<<"number2:"<<number2<<endl;
//     }
//     ~number(){};
// };
// int main(){
// number c(3,2);
// c.display();
// number d(c);
// c.display();
// return 0;
// }

//wap to copy your name and address using constructor.
// #include<iostream>
// using namespace std;
// class detail{
//     string name;
//     string address;
//     public:
//     detail(){};
//     detail (string a,string b){
//      name=a;
//      address=b;   
//     }
//     detail(const detail &a){
//         name=a.name;
//         address=a.address;
//     }
//     void display(){
//         cout<<"name:"<<name<<" "<<"address:"<<address<<endl;
//     }
//~ detail(){};

// };
// int main(){
//     detail d("Amar","Siraha");
//     d.display();
//     detail s(d);
//     d.display();
//     return 0;
// }

//wap to copy your name and address using constructor and take input from the user.
// #include<iostream>
// using namespace std;
// class detail
// {
//     string name;
//     string address;
//     public:
//     detail(){};
//     detail(string a,string b){
//         name=a;
//         address=b;
//     }
//     detail(const detail &obj);// for the copy constructor copy constructor must be defined
//     void setdata();
//     void display();
// };

//  void detail::setdata(){
//     cout<<"Enter your name and address:";
//     getline(cin>>ws,name);
//     getline(cin>>ws,address);
// }
// detail::detail(const detail &obj){
// name=obj.name;
// address=obj.address                                                                                          ;
// }
// void detail::display(){
//     cout<<"name:"<<name<<" "<<"address:"<<address<<endl;
// }
// int main(){
//     detail d;
//     d.setdata();
//     d.display();
//     detail e(d);
//     e.display();
//     return 0;
// }

// RETURN BY OBJECT
//wap to add the numbers using return by object.
// #include<iostream>
// using namespace std;
// class number{
//     private:
//     int num;
//     public:
//     number(){};
//     number(int a){
//      num=a;
//     }
//     number add(number num1,number num2){
//         number temp; // creating  an object
//         temp.num=num+num1.num+num2.num;
//         return temp; //return an object
//     }
//     void display(){
//         cout<<"output:"<<num<<endl;
//     }
// };
// int main(){
//     number n(0);
//     n.display();
//     number num1(2);
//     number num2(3);
//     number num(3);
//     number c;
//     c=num.add(num1,num2);
//     c.display();
//     return 0;
// }

//wap using class that find the distance between tow points in xy plane.Your class should include a default constructor
//to give(0,0) as the default (x,y) coordinate and a parameterized constructor to give a default (x,y) coordinate of your choice.Also include a destructor in your class.
// #include<iostream>
// #include<math.h>
// using namespace std;
// class distance1{
//     float x,y;
//     public:
//     distance1(){};
//     distance1(float a,float b){
//         x=a;
//         y=b;
//     }
//     float display(distance1 p){
//         float d;
//         d=sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
//         cout<<"distance:"<<d;
//         return d;
//     }

//     ~distance1(){};
// };
// int main(){
//     distance1 d(0,0);
//     distance1 d1(2,4);
//     d.display(d1);// here return by object is used
//     return 0;
// }

// POINTER TO OBJECT
//wap to print the detail of the student using class and oject in which pointer point the object.
// #include<iostream>
// using namespace std;
// class detail{
//     private:
//     int roll;
//     int age;
//     string name;

//     public:
//     detail(){
//         int roll=0;
//         int age=0;
//         string name=0;
//     }
//     detail(int a,int b,string c){
//         roll=a;
//         age=b;
//         name=c;
//     }
//      void display(){
//         cout<<"name:"<<name<<" "<<"roll:"<<roll<<" "<<"age"<<age;
//      }
// };
// int main(){
//     detail d(2,20,"Amradip Singh");
//      detail *ptr;
//      ptr=&d;
//      ptr->display();
//      return 0;
// }

// #include<iostream>
// using namespace std;
// class detail{
//     private:
//     string name;
//     float price;
//     public:
//     void setdata(){
//         cout<<"Enter name and price:";
//         cin>>name>>price;
//     }
//     detail compare(detail d){
//         if(price>d.price){
//             return d;        }
//             else{
//                 return *this;
//             }
//         }
//     void display(){
//         cout<<"name:"<<name<<" "<<"price"<<price;
//     }
// };
// int main(){
//     detail d1,d2,d3;
//     d1.setdata();
//     d2.setdata();
//     d3=d1.compare(d2);
//     d3.display();
//     return 0;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// class Reverse {
// private:
//     string name;
// public:
//     Reverse(string n) {
//         name = n;
//     }
//     void reversesit(char str[]) {
//         int len = strlen(str);
//         for(int i = 0; i < len/2; i++) {
//             char temp = str[i];
//             str[i] = str[len-1-i];
//             str[len-1-i] = temp;
//         }
//         name = str;
//     }

//     void display() {
//         cout << "Reverse: " << name;
//     }
// };

// int main() {
//     char str[] = "Amardip";
//     Reverse s("");
//     s.reversesit(str);
//     s.display();
//     return 0;
// }