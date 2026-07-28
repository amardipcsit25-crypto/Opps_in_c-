//Using a friend function, print the sum of private data members of tow classes.
// #include<iostream>
// using namespace std;
// class second;
// class first{
//     private:
//     int num1=5;
//     public:
//     friend void add(first &a,second &b);
// };

// class second{
//     private:
//     int num2=5;
//     public:
//     friend void add(first &a,second &b);
// };
// void add(first &a,second &b){
//     int sum=a.num1+b.num2;
//     cout<<"sum using friend function:"<<sum;
// }

// int main(){
//     first f;
//     second s;
//     add(f,s);
//     return 0;
// }

//write an object oriented program for the following scenario.Make use of Virtual class.
            //      ---- electronic device ---- 
            //      |                          |
            //      |                          |
            //   printer                   scanner
            //      |                          |
            //      |______photocopy machine __|    

// #include<iostream>
// using namespace std;
// class electronic_device{
//     string brand;
//     string powerConsumption;
//     public:
//     void setter(){
//         cout<<"Enter brand and powerConsumption:"<<endl;
//         getline(cin>>ws,brand);
//         getline(cin>>ws,powerConsumption);
//     }

//     void getter(){
//         cout<<endl<<"Detail:"<<endl;
//         cout<<endl<<"Brand name:"<<brand<<"  powerConsumption:"<<powerConsumption<<endl;
//     }
// };

// class printer:virtual public electronic_device{
//     private:
//     int speed;
//     string colorPrinting;
//     public:
//     void setter1(){
//         cout<<"Enter speed and color printer(yes or no):"<<endl;
//         cin>>speed;
//         getline(cin>>ws,colorPrinting);
//     }

//     void getter1(){
//         cout<<"speed:"<<speed<<"  color printing:"<<colorPrinting<<endl;
//     }
// };

// class scanner:virtual public electronic_device{
//     private:
//     string scanResolution;
//     string scanformat;
//     public:
//     void setter2(){
//         cout<<"Enter scanResolution and scanformat(jpg,png,pdf):"<<endl;
//         getline(cin>>ws,scanResolution);
//         getline(cin>>ws,scanformat);
//     }

//     void getter2(){
//         cout<<"scanResolution:"<<scanResolution<<"   scanformat(jpg,png,pdf):"<<scanformat<<endl;
//     }
// };

// class PhotocopyMachine:public printer,public scanner{
//     string copyspeed;
//     int paperCapacity;
//     public:
//     void setdata(){
//         cout<<"Enter copy speed and paper capacity:"<<endl;
//         getline(cin>>ws,copyspeed);
//         cin>>paperCapacity;
//     }

//     void getdata(){
//         cout<<"copy speed per minute:"<<copyspeed<<"  paper capacity:"<<paperCapacity<<endl;
//     }
// };

// int main(){
//     PhotocopyMachine p;
//     p.setter();
//     p.setter1();
//     p.setter2();
//     p.setdata();

//     p.getter();
//     p.getter1();
//     p.getter2();
//     p.getdata();

//     return 0;
// }

//Make use of a friend class to access private data members of another class.
// #include<iostream>
// using namespace std;
// class employee;
// class student{
//     private:
//     string type;
//     string nationalism;
//     public:
//     friend class employee;
//     void setter(){
//         cout<<"Enter type(male or female) and nationalism:"<<endl;
//         getline(cin>>ws,type);
//         getline(cin>>ws,nationalism);
//     }
// };

// class employee{
//     string name;
//     int id;
//     public:
//     void setdata(){
//         cout<<"Enter Employee name and ID :"<<endl;
//         getline(cin>>ws,name);
//         cin>>id;
//     }

//     void getdata(){
//         cout<<endl<<"Detail:"<<endl;
//         cout<<endl<<"Name:"<<name<<" ID:"<<id<<endl;
//     }

//     void getdata1(student &p){
//         cout<<"Display private information of class student using friend class:"<<endl;
//         cout<<"Type:"<<p.type<<" nationalism:"<<p.nationalism;
//     }
// };

// int main(){
//     class student S;
//     S.setter();
//     class employee e;
//     e.setdata();
//     e.getdata();
//     e.getdata1(S);
//     return 0;
// }

//wap for the following scenario. Make use of Abstract Base class.
//          media
//         ____|____
//        |         |
//     Book     Audio Tape

#include<iostream>
using namespace std;
class Media{
    private:
    string Title;
    string creator;
    public:
    void setter();
    void getter();
    virtual void display()=0;
};

void Media::setter(){
    cout<<"Enter Title and creator :"<<endl;
    getline(cin>>ws,Title);
    getline(cin>>ws,creator);
}

void Media::getter(){
    cout<<"Title:"<<Title<<"  creator:"<<creator<<endl;
}

class Book:public Media{
    private:
    string genre;
    int page_count;
    public:
    void setter1();
    void display();
};

void Book::setter1(){
    cout<<"Enter genre and page_count :"<<endl;
    getline(cin>>ws,genre);
    cin>>page_count;
}

void Book::display(){
    cout<<"Genre:"<<genre<<"  page count:"<<page_count<<endl;
}

class Audio:public Media{
    string time_duration;
    public:
    void setdata();
    void display(); 
};

void Audio::setdata(){
    cout<<"Enter time duration:"<<endl;
    getline(cin>>ws,time_duration);
}

void Audio::display(){
    cout<<"Time duration:"<<time_duration<<endl;
}

int main(){
    cout<<"For the BooK:"<<endl;
    Book b;
    b.setter();
    b.setter1();
    cout<<"For the Audio:"<<endl;
    Audio a;
    a.setter();
    a.setdata();
    cout<<endl<<"Detail for the Book:"<<endl;
    b.getter();
    b.display();
    cout<<endl<<"Detail for the Audio:"<<endl;
    a.getter();
    a.display();
    return 0;
}