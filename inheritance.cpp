//wap to demonstrate the single inheritance using the student detail and library class in which library class inheritance the attributes the student.
// #include<iostream>
// using namespace std;
// class student{
//     string name;
//     int age;
//     int rollno;
//     public:
//     void setdata();
//     void getdata();
// };
// void student::setdata(){
//     cout<<"Enter name ,rollno,age:";
//     getline(cin,name);
//     cin>>rollno>>age;
// }
// void student::getdata(){
//     cout<<"name:"<<name<<" "<<"rollno"<<rollno<<" "<<"age:"<<age<<endl;
// }

// class library:private student{
//     string Bookname;
//     long int date;
//     public:
//     void setdata1(){// here we have to create the another method because the student object all are come in the private access modifier.
//         setdata();
//     }
//     void getdata1(){
//         getdata();
//     }
//     void setdata2();
//     void getdata2();
// };
// void library::setdata2(){
//     cout<<"Enter Bookname,date:";
//     getline(cin>>ws,Bookname);
//     cin>>date;
// }
// void library::getdata2(){
//     cout<<"Book Name:"<<Bookname<<"date:"<<date;
// }

// int main(){
//     library l;
//     l.setdata1();
//     l.setdata2();
//     l.getdata1();
//     l.getdata2();
//     return 0;
// }

//OR USING PUBLIC 

//wap to demonstrate the single inheritance using the student detail and library class in which library class inheritance the attributes the student.
// #include<iostream>
// using namespace std;
// class student{
//     string name;
//     int age;
//     int rollno;
//     public:
//     void setdata();
//     void getdata();
// };
// void student::setdata(){
//     cout<<"Enter name ,rollno,age:";
//     getline(cin,name);
//     cin>>rollno>>age;
// }
// void student::getdata(){
//     cout<<"name:"<<name<<" "<<"rollno"<<rollno<<" "<<"age:"<<age<<endl;
// }

// class library:public student{
//     string Bookname;
//     string date;
//     public:
//     void setdata2();
//     void getdata2();
// };
// void library::setdata2(){
//     cout<<"Enter Bookname,date:";
//     getline(cin>>ws,Bookname);
//     getline(cin>>ws,date);
// }
// void library::getdata2(){
//     cout<<"Book Name:"<<Bookname<<" "<<"date:"<<date;
// }

// int main(){
//     library l;
//     l.setdata();
//     l.setdata2();
//     l.getdata();
//     l.getdata2();
//     return 0;
// }

//wap to demonstrate the multilevel inheritance like living thing,human ,student in which student inherit the attributes of living things and human.
// #include<iostream>
// using namespace std;
// class livingthings{
//     private:
//     int lifespan;
//     string health_status;
//     public:
//     void setdata();
//     void getdata();
// };
// void livingthings::setdata(){
//     cout<<"Enter lifespan and health_status:";
//     cin>>lifespan;
//     getline(cin>>ws,health_status);
// }

// void livingthings::getdata(){
//     cout<<"lifespan:"<<lifespan<<" "<<"health-status:"<<health_status<<endl;
// }

// class human:public livingthings{
//     private:
//     string type;
//     string religious;
//     public:
//     void setdata1();
//     void getdata1();
// };
// void human::setdata1(){
//     cout<<"Enter type and religious:";
//     getline(cin>>ws,type);
//     getline(cin>>ws,religious);
// }
// void human::getdata1(){
//     cout<<"type:"<<type<<" "<< "religious:"<<religious<<endl;
// }

// class student:public human{
//     private:
//     string name;
//     int roll_no;
//     public:
//     void setdata2();
//     void getdata2();
// };
// void student::setdata2(){
//     cout<<"Enter name and roll_no:";
//     getline(cin>>ws,name);
//     cin>>roll_no;
// }
// void student::getdata2(){
//     cout<<"name:"<<name<<"roll no:"<<roll_no;
// }

// int main(){
//     student s;
//     s.setdata();
//     s.setdata1();
//     s.setdata2();
//     s.getdata();
//     s.getdata1();
//     s.getdata2();
//     return 0;
// }

//USING CONSTRUCTOR AND DESTRUCTURE IN INHERITANCE

//note:if the constructor in the parent class having default constructor then it is optional  to make constructor
//in the child class but if the parent class having parametrized constructor then it is compalsary to make the 
//parametrized constructor in the child class. 

// #include<iostream>
// using namespace std;
// class room{
//     int num;
//     public:
//     room(){};
//     room(int a){
//         num=a;
//         cout<<"constructor of room:"<<endl;
//     }
//     ~room(){
//          cout<<"destructor of room:"<<endl;
//     };
//     void show();
// };
// void room::show(){
//     cout<<"number of room:"<<num<<endl;
// } 

// class get{
//     int height;
//     public:
//     get(){};
//     get(int b){
//         height =b;
//         cout<<"constructor of get: "<<endl;
//     }
//     ~get(){
//          cout<<"destructor of get:"<<endl;
//     };
//     void display ();
// };

// void get::display(){
//     cout<<"height of  the get:"<<height<<endl;
// }

// class fan:public get,public room{  // first fan after then room then get destructor called in the reverse of constructor called
//     float voltage;
//     public:
//     fan(){};
//     fan(float m,int n,int o):get(n),room(o){
//         voltage=m;
//         cout<<"constructor of fan:"<<endl;
//     }
//     ~fan(){
//          cout<<"destructor of fan:"<<endl;
//     };
//     void result();
// };

// void fan::result(){
//     cout<<"voltage:"<<voltage<<endl;
// }

// int main(){
//     fan f(5.5,100,20);
//     f.display();
//     f.result();
//     f.show();
//     return 0;
// }

//AMBIGUITY IN THE INHERITANCE

//There are two types of ambiguity in the inheritance 

//first using the scope resulation to call the methods if have same name.
// #include<iostream>
// using namespace std;
// class detail{
//     private:
//     string name;
//     int age;
//     public:
//     detail(){};
//     detail(string a,int b){
//         name=a;
//         age=b;
//     }
//     void show ();
// };

// void detail::show(){
//     cout<<"Name:"<<name<<" "<<"age:"<<age<<endl;
// }

// class result:public detail{
//     private :
//     string gender;
//     int height;
//     public:
//     result(){};
//     result(string m,int n,string c,int d):detail(c,d){
//         gender=m;
//         height=n;
//     }
//     void show();
// };

// void result::show(){
//     cout<<"gender:"<<gender<<" "<<"height:"<<height;
// }

// int main(){
//     result s("male",6,"shyam",20);
//     s.detail::show();
//     s.result::show();
//     return 0;
// }

//NOTE:
// there is also the another ambiguity (called diamond ) in which there is a need of virtual class.

// THIS POINTER(it points the current object in the program and in one program there is a default this pointer is exits.)

//Example;
// #include<iostream>
// using namespace std;
// class example{
//     private:
//     int num;
//     public:
//     example(){};
//     example(int num){
//         this->num=num;
//         cout<<"this pointer is initalized:"<<endl;
//     }
//     void display();
// };

// void example::display(){
//     cout<<"this pointer is used:"<<num;
// }

// int main(){
//     example e(4);
//     e.display();
//     return 0;
// }

//wap to compare the two number and return  using this pointer.
// #include<iostream>
// using namespace std;
// class compare{
//     int num;
//     public:
//     compare() {};
//     compare (int a){
//         num=a;
//     }
//     compare lower(compare c){
//         if(num<c.num){
//             return num;
//         }
//         else{
//             return *this;
//         }
//     }
//     void show();
// };

// void compare::show(){
//     cout<<"smallest number:"<<num;
// }

// int main(){
//     compare c(5);
//     compare c1(6);
//     compare c3;
//     c3=c.lower(c3);
//     c3.show();
//     return 0;
// }

//AGGREGATION WITHIN A CLASS.
// Aggregation is called "has a" relationship. In it one class can access the attributes the other class but independently with each other.

// #include<iostream>
// using namespace std;
// class Book{
//     private:
//     string name;
//     string price;
//     public:
//     void setter();
//     void getter();
// };

// void Book::setter(){
//     cout<<"Enter Book name and price:";
//     getline(cin>>ws,name);
//     cin>>price;
// }

// void Book::getter(){
//     cout<<"Book name:"<<name<<"price:"<<price<<endl;
// }

// class library{
//     private:
//     string date;
//     Book Book;
//     public:
//     void setdata();
//     void getdata();
// };

// void library::setdata(){
//     cout<<"Enter date:";
//     getline(cin>>ws,date);
//     Book.setter();
// }
// void library::getdata(){
//     cout<<"date:"<<date<<endl;
//     Book.getter();
// }

// int main(){
//     library l;
//     l.setdata();
//     l.getdata();
//     return 0;
// }

//wap for the following scenario of hybrid inheritance. Include appropiate characteristics and getter and setter 
//functions in each class.
//medicalOrganization->hospital->teaching hospital
//education institute->teaching hospital

// #include<iostream>
// using namespace std;
// class MedicalOraganization{
//     private:
//     string name;
//     string location;
//     public:
//     void setter();
//     void getter();
// };
// void MedicalOraganization::setter(){
//     cout<<"Enter name and location:";
//     getline(cin>>ws,name);
//     getline(cin>>ws,location);
// }

// void MedicalOraganization::getter(){
//     cout<<"Name:"<<name<<"Location:"<<location<<endl;
// }

// class Hospital:public MedicalOraganization{
//     int bed_count;
//     string emergency;
//     public:
//     void setter1();
//     void getter1();
// };

// void Hospital::setter1(){
//     cout<<"Enter bed_count and emergency(yes or no):";
//     cin>>bed_count;
//     getline(cin>>ws,emergency);
// }

// void Hospital::getter1(){
//     cout<<"Bed count "<<bed_count<< "Emergency Service:"<<emergency<<endl;
// }

// class education_institute{
//     int student_number;
//     int research_budget;
//     public:
//     void setter2();
//     void getter2();
// };

// void education_institute::setter2(){
//     cout<<"Enter student_number and research budget:";
//     cin>>student_number>>research_budget;
// }

// void education_institute::getter2(){
//     cout<<"Student number:"<<student_number<<"Research Budget:"<<research_budget;
// }

// class teaching_hospital:public Hospital,public education_institute{
//     int teaching_staff;
//     int medical_students;
//     public:
//     void setter3();
//     void getter3(); 
// };
// void teaching_hospital::setter3(){
//     cout<<"Enter teaching staff and medical students numbers:";
//     cin>>teaching_staff>>medical_students;
// }

// void teaching_hospital::getter3(){
//     cout<<"Teaching staff:"<<teaching_staff<<"Medical Students:"<<medical_students;
// }

// int main(){
//     teaching_hospital t;
//     t.setter();
//     t.setter1();
//     t.setter2();
//     t.setter3();
//     t.getter();
//     t.getter1();
//     t.getter2();
//     t.getter3();
//     return 0;
// }
