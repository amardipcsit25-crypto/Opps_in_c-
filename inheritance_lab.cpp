//wap to read and display information about an author.An author is a person.(use private derivation).
// #include<iostream>
// using namespace std;
// class person{
//     private:
//     string type;
//     string religious;
//     string nationalism;
//     public:
//     void setter();
//     void getter();
// };

// void person::setter(){
//     cout<<"Entre type ,religious and nationalism:";
//     getline(cin>>ws,type);
//     getline(cin>>ws,religious);
//     getline(cin>>ws,nationalism);
// }

// void person::getter(){
//     cout<<"Type:"<<type<<" "<<"religious:"<<religious<<" "<<"nationalism:"<<" "<<nationalism<<endl;
// }

// class author:private person{
//     string name;
//     int age;
//     public:
//     void callsetter(){
//         setter();
//     }
//     void callgetter(){
//         getter();
//     }

//     void setdata();
//     void getdata();
// };

// void author::setdata(){
//     cout<<"Enter name and age of author:";
//     getline(cin>>ws,name);
//     cin>>age;
// }

// void author::getdata(){
//     cout<<"name:  "<<name<<"  age:"<<" "<<age<<endl;
// }

// int main(){
//     author a;
//     a.callsetter();
//     a.setdata();
//     a.callgetter();
//     a.getdata();
//     return 0;
// }

//wap to demonstrate the following scenario of hierarchical inheritance.
//vehicle->car
//vehicle->Boat
//vehicle->Aeroplane

#include<iostream>
using namespace std;
class Vehicle{
    private:
    string type;
    string color;
    string medium_of_travel;
    public:
    void setter();
    void getter();
};

void Vehicle::setter(){
    cout<<"Enter type,color and medium of travel:";
    getline(cin>>ws,type);
    getline(cin>>ws,color);
    getline(cin>>ws,medium_of_travel);
}

void Vehicle::getter(){
    cout<<"type:"<<type<<" color:"<<color<<" medium of travel:"<<medium_of_travel<<endl<<endl;
}

class car:public Vehicle{
    private:
    string car_name;
    string brand;
    public:
    void input(){
        cout<<"Enter car name and brand:";
        getline(cin>>ws,car_name);
        getline(cin>>ws,brand);
    }
    void output(){
        cout<<"car name:"<<car_name<<" Brand name:"<<brand<<endl;
    }
};

class Boat:public Vehicle{
    private:
    string boat_name;
    string brand;
    public:
    void setdata(){
        cout<<"Enter Boat name and brand:";
        getline(cin>>ws,boat_name);
        getline(cin>>ws,brand);
    }
    void getdata(){
        cout<<"Boat name:"<<boat_name<<" brand name:"<<brand<<endl;
    }
};

class Aeroplane:public Vehicle{
    private:
    string aeroplane_name;
    string brand;
    public:
    void setadata1(){
        cout<<"Enter Aeroplane name and brand:";
        getline(cin>>ws,aeroplane_name);
        getline(cin>>ws,brand);
    }
    void getdata1(){
        cout<<"Aeroplane name:"<<aeroplane_name<<" brand name:"<<brand<<endl;
    }
};

int main(){
    car c;
    c.input();
    c.setter();

    Boat b;
    b.setdata();
    b.setter();

    Aeroplane a;
    a.setadata1();
    a.setter();

    c.output();
    c.getter();

    b.getdata();
    b.getter();
 
    a.getdata1();
    a.getter();
    return 0;
}