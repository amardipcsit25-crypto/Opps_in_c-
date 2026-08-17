            //Template (generic programming)
 // there are two types of template that is function template and class template 

 // function template

 //wap to add the two number of different data types.
//  #include<iostream>
//  using namespace std;
//  template<class T>
//  T add(T num1,T num2){
//     return num1+num2;
//  }

//  int main(){
//     int num1,num2;
//     float num3,num4;
//     cout<<"Enter the integers two number:";
//     cin>>num1>>num2;
//     cout<<"Result of addition of two integers:"<<add(num1,num2)<<endl;
//     cout<<"Enter the float two number:";
//     cin>>num3>>num4;
//     cout<<"Result of addition of two float:"<<add(num3,num4)<<endl;
//     return 0;
//  }

//  Template using different data

// #include<iostream>
// using namespace std;
// template<class T1,class T2>
// void show(T1 num,T2 name){
//       cout<<"number:"<<num<<endl;
//       cout<<"string:"<<name;
// }

// int main(){
//    int number;
//    string name;
//    cout<<"Enter the number and string:";
//    cin>>number;
//    getline(cin>>ws,name);
//    show(number,name);
//    return 0;
// }

// TEMPLATE OVERLOADING 

// #include<iostream>
// using namespace std;
// template<class T>
// void show(T num){
//    cout<<"with template:"<<num<<endl;
// }

// template<class T1,class T2>
// void show(T1 num1,T2 address){
//    cout<<"number:"<<num1<<"address:"<<  address<<endl;
// }

// void show(int num2){
//    cout<<"number without template:"<<num2<<endl;
// }

// int main(){
//    show(20);
//    show(2.5);
//    show(5,"siraha");
//    return 0;
// }