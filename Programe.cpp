// Wap to print the Hello World in the c++.
// #include<iostream>
// using namespace std;
// int main(){
//     cout<< " Hello world";
//     return 0;
// }

//wap to print the sum of the two numbers by taking the input.
// #include<iostream>
// using namespace std;
// int main(){
//     float num1,num2;
//     cout<< "Enter two numbers:";
//    cin>> num1>>num2;
//    float sum=num1+num2;
//    cout<< "sum ="<< sum;
//    return 0;
// }

// wap to print the difference and product of the two numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     float num1,num2,diff;
//     cout<< "Enter two number:";
//     cin>> num1>> num2;
//     if(num1!=0){
//      diff=num1-num2;}
//     else{
//         diff=num2-num1;
//     }
//     float product=num1*num2;
//     cout<<"difference and product:"<<diff <<"\t"<<product;
//     return 0;
// }

// wap to check the number is odd or even.
// #include<iostream>
// using namespace std;
// int main(){
//     int number;
//     cout<<"Enter a number:";
//     cin>> number;
//     if(number%2==0){
//         cout<<number<<" "<<"even number";
//     }
//     else{
//         cout<<number<<" "<<"odd number";
//     }
//     return 0;
// }

// wap to check the maximum number among three numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2,num3;
//     cout<<" Enter three numbers:";
//     cin>> num1>> num2>> num3;
//   int max=(num1>num2&&num1>num3)?num1:(num2>num1&&num2>num3)?num2:num3;
//   cout<<max << " "<< "number";
//   return 0;
// }

// wap to check the number is prime or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int number;
//     int prime=0;
//     cout<<"Enter a number:";
//     cin>> number;
//     for(int i=2;i<=number/2;i++){
//         if(number%i==0){
//             prime=1;
//             break;
//         }
//     }
//     if(prime==0){
//         cout<<"Prime number";
//     }
//     else{
//         cout<<"Not a prime number";
//     }
// }

// wap to perform the calculation when the user chooise is 'a','A','+' by taking the input two numbers from the user.
// #include<iostream> 
// using namespace std;
// int main(){
//     int num1, num2;
//     char chooise;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     cout << "Enter your choice: ";
//     cin >> chooise;
//     switch (chooise) {
//         case 'a': case 'A': case '+':
//         cout<< "sum="<< num1+num2;
//         break;
//         case 's': case 'S': case '-':
//         cout<< "difference="<< num1-num2;
//         break;
//         default:
//         cout<<"Invalid chooise";
//     }
//     return 0;
// }

//wap to find the root of the quadratic function.
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//    float a,b,c;
//     float det;
//      do{
//     cout<<"Enter a:";
//     cin>>a;
//     }while(a==0);
//     cout<<"Enter b,c:";
//     cin>>b>>c;
//     det=b*b-4*a*c;
//     if(det>0){
//         cout<<"function has two real roots:";
//         float root1=((-b)+sqrt(det))/(2*a);
//         float root2=((-b)-sqrt(det))/(2*a);
//         cout<<"roots are:"<<root1<<" "<<root2<<endl;
//     }
//     else if(det==0){
//         cout<<"function has two equal roots: ";
//         float roots3=-b/(2*a);
//         cout<<"roots are:"<<roots3<< " "<<endl;
//     }
//     else{
//         float realpart=-b/(2*a);
//         float imaginary=sqrt(-det)/(2*a);
//         cout<<"function has imaginary roots:"<<endl;
//         cout<<"roots are:"<<realpart<<"+"<<imaginary<<"i"<<endl;
//         cout<<"roots are:"<<realpart<<"-"<<imaginary<<"i";
//     }
//     return 0;
// }

//wap to check whether the number is armstrong or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     int result=0;
//     cout<<"Enter number:";
//     cin>>num;
//     int c=num;
//     while(num>0){
//         int digit = num % 10;
//         num = num / 10;
//         result = result + digit * digit * digit;
//     }
//     if(c == result){
//         cout<< c << " is an Armstrong number" << endl;
//     }
//     else{
//         cout<< c << " is not an Armstrong number" << endl;
//     }
// }

//wap that reads 'n' intergers an array. Then create a function that search for a given number in the array and return the index of the  occurrence of that number.
// If the number is not found then print not found else print found.
// #include<iostream>
// using namespace std;
// int found(int arr[],int size,int number){
// int i;
// int flag=0;
// for (i=0;i<size;i++){
//     if(arr[i]==number){
//         cout<<"number is found";
//         cout<<" "<<"at index:"<<i<<endl;
//         flag=1;
//     }
// }
// if(flag==0){
//     cout<<"number is not found";
// }
// }
// int main(){
// int n=10;
// int arr[n]={1,2,4,2,3,4,5,6,7,8};
// int number;
// cout<<"Enter a number that you want to search:";
// cin>>number;
// found(arr,n,number);
// return 0;
// }

// wap to find the sum of the two number using inline function.
// #include<iostream>
// using namespace std;
// inline int sum(int a, int b) {
//     return a + b;
// }

// int main() {
//     cout << "sum: " << sum(7, 3) << endl;
//     cout << "sum: " << sum(3, 2) << endl;
//     cout << "sum: " << sum(5, 3) << endl;
//     return 0;
// }
// OR
// #include<iostream>
// using namespace std;
// inline int sum(int a, int b);// declaration of inline function
// int  main(){
//     cout << "sum: " << sum(7, 3) << endl;
//     cout << "sum: " << sum(3, 2) << endl;
//     cout << "sum: " << sum(5, 3) << endl;
//     return 0;
// }
// int sum(int a,int b){  // definition of inline function
//     return a+b;
// }

// wap to print the table of the user given number by using pointer function.
// #include<iostream>
// using namespace std;
// int mul(int num);
// int (*prt) (int num);
// int main(){
//   int num;
//   prt=mul;
//   cout<<"Enter number:";
//   cin>>num;
//   prt(num);
//   return 0;
// }
//  int mul(int num){
//     int i;
//  for(i=1;i<=10;i++){
//     int product=num*i;
//     cout<<num<< "*"<< i<< "="<< product<< endl;
//  }
// }

// wap  to print add and subtract using pointer function.
// #include<iostream>
// using namespace std;
// void add(int a,int b);
// void sub(int a,int b);
// void (*prt)(int,int);
// void (*prt1)(int,int);
// int main(){
//       int num1,num2;
//       prt=add;
//       prt1=sub;
//       cout<<"Enter two numbers:";
//       cin>> num1>> num2;
//       prt(num1,num2);
//       prt1(num1,num2);
//       return 0;
// }
// void add(int a,int b){
//     int sum=a+b;
//     cout<<"sum="<< sum<< endl;
// }
// void sub(int a,int b){
//     int diff=a-b;
//     cout<<"difference="<< diff<< endl;
// }

//Wap to take the input of 5 student from the user and print the details of the student using structure.
// #include<iostream>
// using namespace std;
// struct Student{
//     string name;
//     int age;
//     int rollno;
//     string gender;
//     };

// int main(){
//     struct Student s[5];
//     for(int i=0;i<5;i++){
//         cout<<"Enter details of student "<<i+1<<":"<<endl;
//         cout<<"Name:";
//         cin>>s[i].name;
//         cout<<"Age:";
//         cin>>s[i].age;
//         cout<<"Roll No.:";
//         cin>>s[i].rollno;
//         cout<<"Gender:";
//         cin>>s[i].gender;
//     }
//     for(int i=0;i<5;i++){
//         cout<<"Details of student "<<i+1<<":"<<endl;
//         cout<<"Name: "<<s[i].name<<endl;
//         cout<<"Age: "<<s[i].age<<endl;
//         cout<<"Roll No.: "<<s[i].rollno<<endl;
//         cout<<"Gender: "<<s[i].gender<<endl;
//     }
// }    

// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     char name[10]="amardip";
//     cout<<"result:"<<name;
//     return 0;
// }

//RETURN BY REFERENCE 

// #include <iostream>
// using namespace std;
// int& largest(int &a, int &b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }
// int main()
// {
//     int x = 10, y = 20;

//    cout<<"largest:"<<largest(x, y);

//     return 0;
// }

// FRIEND CLASS

// #include<iostream>
// using namespace std;
// class detail{
//     private:
//     string name;
//     int age;
//     public:
//     friend class student;

// };
// class student{
// public:
// void setdata(detail &a){
//         cout<<"Enter name and age:";
//         getline(cin>>ws,a.name);
//         cin>>a.age;
//     }
// void getdata(detail &a){
//     cout<<"name and age:";
//     cout<<a.name<<" "<<a.age;
// }
// };
// int main(){
//     detail b;
//     student s;
//     s.setdata(b);
//     s.getdata(b);
//     return 0;
// }