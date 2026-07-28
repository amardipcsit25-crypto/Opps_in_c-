// There is a vacancy for a seasonal job. Applicants are qualified to apply for the job only if they
// can lift at least 50 kg weight and are between 18 to 24 yrs of age. However, if the applicants
// have more than 4 yrs of experience in the field, they can qualify even if they can lift just 35 kg
// and are over 24 yrs of age. Write a program in C++ to input the information of applicants and
// check if they meet the required credentials for the job.
// #include<iostream>
// using namespace std;
// int main(){
//     int weight,age,experience;
//     cout<<"Enter weight, age and experience of the applicant:";
//     cin>> weight>> age>> experience;
//     if((weight>=50 && age>=18 && age<=24) || (experience>4 && weight>=35 && age>24)){
//         cout<<"Applicant is qualified for the job.";
//     }
//     else{
//         cout<<"Applicant is not qualified for the job.";
//     }
//     return 0;
// } 

//`wap to output the nth fibonacci number using iteration .
// #include<iostream>
// using namespace std;
// int main(){
//     int n, first = 0, second = 1, next;
//     cout<<"Enter the number of terms: ";
//     cin>>n;
//     cout<<"Fibonacci no. is : ";
//         if(n==0){
//           cout<<first;
//         }
//         else if(n== 1){
//             cout<<second;
//          }
//         else{
//            for(int i = 1; i < n; i++){
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         cout<<next<<endl;
//       }
//     return 0;
// }

// // wap that prompts a student to enter the marks they obtained in opps .Output the corresponding grade they obtained.
// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"Enter the marks obtained in OPPS: ";
//     cin>>marks;
//     if(marks>=90){
//         cout<<"Grade: A";
//     }
//     else if(marks>=80 && marks<90){
//         cout<<"Grade: B";
//     }
//     else if(marks>=70 && marks<80){
//         cout<<"Grade: C";
//     }
//     else if(marks>=60 && marks<70){
//         cout<<"Grade: D";
//     }
//     else{
//         cout<<"Grade: F";
//     }
//     return 0;
// }

//Create a function that calculates the product of 3 numbers entered by the user, regardless of the number entered being integer or floating point. Print the result as output.
// #include<iostream>
// using namespace std;

// void calculateProduct(int a, int b, int c);

// void calculateProduct(float a, float b, float c);

// int main() {
//     int num1, num2, num3;
//     float num4, num5, num6;
//     int choice;
//     cout<<"Enter 1 for integers or 2 for floating-point numbers:";
//     cin >> choice;
//     if (choice == 1) {
//         cout << "Enter three integers: ";
//         cin >> num1 >> num2 >> num3;
//         calculateProduct(num1, num2, num3);
//     } 
//     else if (choice ==2) {
//         cout << "Enter three floating-point numbers: ";
//         cin >> num4 >> num5 >> num6;
//         calculateProduct(num4, num5, num6);
//     }
//     else{
//       cout<<"Invalid choice";
//     }
//     return 0;
// }

// void calculateProduct(int a,int b, int c){
//   int product=a*b*c;
//   cout<<"Product of integers:"<< product<<endl;
// }
// void calculateProduct(float a,float b, float c){
//   float product=a*b*c;
//   cout<<"Product of floating number:"<< product<<endl;
// }

// // Write a program that inputs ‘n’ integers from the user. Then, create a function pointer to find the maximum value among these integers. The function definition itself should also use a pointer for comparison.
// #include<iostream>
// using namespace std;
// void maximum(int arr[],int n);
// void (*ptr)(int[],int );
// int main(){
//     int n;
//     int arr[100];
//     cout<<"Enter the number of integers;";
//     cin>>n;
//     cout<<"Enter "<<n<<" integers:";
//     for(int i=0;i<n;i++){
//      cin>> arr[i];
//     }
//     ptr=maximum;
//     ptr(arr,n);
//     return 0;

// }
// void maximum(int arr[],int n){
//     int *p=&arr[0];
//     int max=*p;
//     for(int i=0;i<n;i++){
//         if(*(p+i)>max){
//             max=*(p+i);
//         }
//     }
//     cout<<"Maximum value is:"<< max;
// }

//Write a program to find the sum of (1 - (2^2/2!) + (3^2/3!) - (4^2/4!) + (5^2/5!) _ _ _(n^2/n!). Use recursion for the factorial part of the program.
// #include <iostream>
// #include<math.h>
// using namespace std;

// // Recursive function to calculate factorial
// int factorial(int num) {
//     if (num <= 1) {
//         return 1;
//     }
//     return num * factorial(num - 1);
// }

// int main() {
//     int n;
//     float totalSum = 0;

//     cout << "Enter the number of terms: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << "Please enter a positive integer greater than 0." << endl;
//         return 1;
//     }

//     for (int i = 1; i <= n; i++) {
//         // Calculate the value of the term: (i^3) / i!
//          totalSum= totalSum+pow(-1,i+1)*pow(i,2)/ factorial(i);
//     }

//     cout << "The sum of the series up to " << n << " terms is: " << totalSum << endl;

//     return 0;
// }

// create a structure for a pharmaceutical company having three departments .Each department cna have a maximum of 5 employees
// out of which one is a department head. input as well as display the information of the department employees.use nested structure.

// modify the program of question 1 to display only the names fo the department heads.
// #include <iostream>
// #include <string>

// using namespace std;

// // Inner structure for employee information
// struct Employee {
//     int id;
//     string name;
//     string role; // e.g., "Head" or "Staff"
//     double salary;
// };

// // Outer structure for department information
// struct Department {
//     string deptName;
//     Employee emp[5]; // Nested structure: Fixed array of max 5 employees
//     int empCount;
// };

// int main() {
//     // Array of 3 departments representing the pharmaceutical company
//     Department pharmaCompany[3];

//     // --- 1. INPUT INFORMATION ---
//     for (int i = 0; i < 3; i++) {
//         cout << "\nEnter details for Department " << (i + 1) << ":\n";
//         cout << "Department Name: ";
//         getline(cin >> ws, pharmaCompany[i].deptName); // Handles spaces in names

//         for (int j = 0; j < 5; j++) {
//             cout << "\n  Enter details for Employee " << (j + 1) << ":\n";
//             cout << "    ID: ";
//             cin >> pharmaCompany[i].emp[j].id;
            
//             cout << "    Name: ";
//             getline(cin >> ws, pharmaCompany[i].emp[j].name);
            
//             cout << "    Role ( Head or not): ";
//             getline(cin >> ws, pharmaCompany[i].emp[j].role);
            
//             cout << "    Salary: ";
//             cin >> pharmaCompany[i].emp[j].salary;
//         }
//     }

//     // --- 2. DISPLAY ALL EMPLOYEES ---
//     cout << "\n  PHARMA COMPANY: ALL EMPLOYEE DETAILS";

//     for (int i = 0; i < 3; i++) {
//         cout << "\nDepartment: " << pharmaCompany[i].deptName << "\n";
//         for (int j = 0; j <5; j++) {
//             cout << "  Employee " << (j + 1) << ":\n";
//             cout << "    ID: " << pharmaCompany[i].emp[j].id << "\n";
//             cout << "    Name: " << pharmaCompany[i].emp[j].name << "\n";
//             cout << "    Role: " << pharmaCompany[i].emp[j].role << "\n";
//             cout << "    Salary: " << pharmaCompany[i].emp[j].salary << "\n";
//         }
//     }

//     cout << "\n  LIST OF DEPARTMENT HEADS ONLY";
//     cout << "\n=========================================\n";

//     for (int i = 0; i < 3; i++) {
//         cout << "\nDepartment: " << pharmaCompany[i].deptName << "\n";
//         bool headFound = false;

//         for (int j = 0; j < 5; j++) {
//             // Evaluates if role is written as "Head" or "head"
//             if (pharmaCompany[i].emp[j].role == "Head" || pharmaCompany[i].emp[j].role == "head") {
//                 cout << "  Head Name: " << pharmaCompany[i].emp[j].name << "\n";
//                 headFound = true;
//             }
//         }
//         if (!headFound) {
//             cout << "  No designated Head found in this department.\n";
//         }
//     }

//     return 0;
// }	

// // create a class for an account holder with data members as accountno,account holder name and balance.Create two methods to store and retrieve these values for 3 customers.
// #include<iostream>
// using namespace std;
// class Account_holder{
// 	private:
// 	char accountnumber[50];
// 	string account_holder_name;
// 	long int balance;
// 	public:
// 	void setdata();
// 	void getdata();
// };
//  void Account_holder::setdata(){
// 	cout<<"Enter account number:";
// 	cin>>accountnumber;
// 	cout<<"Enter account_holder_name:";
// 	cin.ignore();
// 	getline(cin,account_holder_name);
// 	cout<<"Enter balance:";
// 	cin>>balance;
// }
// void Account_holder::getdata(){
// 	cout<<"account number:"<<accountnumber<<endl;
// 	cout<<"account holder name:"<<account_holder_name<<endl;
// 	cout<<"balance:"<<balance<<endl;
// }
// int main(){
// 	Account_holder a[3];
// 	for(int  i=0;i<3;i++){
// 		cout<<"Enter detail "<<i+1<<"  customer"<<endl;
// 		a[i].setdata();
// 	}
// 	for(int  i=0;i<3;i++){
// 		cout<<" \n detail  "<<i+1<<"  customer"<<endl;
// 		a[i].getdata();
// 	}
// 	return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     float a;
//     cout<<"Enter the number in floating number:";
//     cin>>a;
//     cout<<"floating number:"<<a;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// struct Employee
// {
//     string name;
//     int age;
//     string post;
// };

// struct Department
// {
//     string deptName;
//     Employee emp[5];
// };

// int main()
// {
//     Department dept[3];

//     for(int i = 0; i < 3; i++)
//     {
//         cout << "\nEnter Department Name: ";
//         cin >> dept[i].deptName;

//         for(int j = 0; j < 5; j++)
//         {
//             cout << "\nEmployee " << j + 1 << endl;

//             cout << "Name: ";
//             getline(cin>>ws,dept[i].emp[j].name);

//             cout << "Age: ";
//             cin >> dept[i].emp[j].age;

//             cout << "Post: ";
//             getline (cin>>ws,dept[i].emp[j].post);
//         }
//     }

//     cout << "\nDepartment Heads:\n";

//     for(int i = 0; i < 3; i++)
//     {
//         for(int j = 0; j < 5; j++)
//         {
//             if(dept[i].emp[j].post == "Head")
//             {
//                 cout << dept[i].deptName
//                      << " Department Head: "
//                      << dept[i].emp[j].name << endl;
//             }
//         }
//     }
//     return 0;
// }

//wap in c++ for addition and substraction of two complex numbers.Show the values of the original numbers as well as difference.[use class]
// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     int real, imag;

// public:
//     // Parameterized constructor
//     Complex(int r = 0, int i = 0) {
//         real = r;
//         imag = i;
//     }

//     // Function to add two complex numbers
//     Complex add(Complex c) {
//         Complex temp;
//         temp.real = real + c.real;
//         temp.imag = imag + c.imag;
//         return temp;
//     }

//     // Function to subtract two complex numbers
//     Complex subtract(Complex c) {
//         Complex temp;
//         temp.real = real - c.real;
//         temp.imag = imag - c.imag;
//         return temp;
//     }

//     // Function to display a complex number
//     void display() {
//         if (imag >= 0)
//             cout << real << " + " << imag << "i";
//         else
//             cout << real << " - " << -imag << "i";
//     }
// };

// int main() {
//     int r1, i1, r2, i2;
//     cout << "Enter real and imaginary parts of first complex number: ";
//     cin >> r1 >> i1;
//     cout << "Enter real and imaginary parts of second complex number: ";
//     cin >> r2 >> i2;
//     Complex c1(r1, i1);
//     Complex c2(r2, i2);
// cout << "\nFirst Complex Number: ";
//     c1.display();
//     cout << "\nSecond Complex Number: ";
//     c2.display();
//     Complex sum = c1.add(c2);
//     cout << "\nSum = ";
//     sum.display();
//     Complex diff = c1.subtract(c2);
//     cout << "\nDifference = ";
//     diff.display();

//     return 0;
// }

//create a constructor to initiate any private data member. Later overload if to set different type of data member.Your program must also include a distructor.
// #include <iostream>
// #include <string>
// using namespace std;
// class Student {
// private:
//     int age;
//     string name;

// public:
//     // Constructor 1: Initialize integer data member
//     Student(int a) {
//         age = a;
//         name = "Not Assigned";
//         cout<<endl;
//     }

//     // Constructor 2: Initialize string data member
//     Student(string n) {
//         age = 0;
//         name = n;
//         cout<<endl;
//     }

//     // Constructor 3: Initialize both data members
//     Student(int a, string n) {
//         age = a;
//         name = n;
//         cout <<endl;
//     }
//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Age : " << age << endl;
//     }
//     // Destructor
//     ~Student() {}
// };

// int main() {
//     Student s1(20);          // Calls constructor with int
//     s1.display();
//     cout << endl;
//     Student s2("Ram");       // Calls constructor with string
//     s2.display();
//     cout << endl;
//     Student s3(22, "Shyam"); // Calls constructor with int and string
//     s3.display();

//     return 0;
// }

//wap to simulate banking transactions of 3 users.The program must be menu driven. Include th following operation 
//in the menu
//1.deposit 2.withdraw 3.display balance 4.display total operation 5.exit
//use a static member function to display total number of operation (optional 4) performed through the application.
#include <iostream>
using namespace std;
class Bank
{
private:
    int accountNo;
    string name;
    float balance;
    static int totalOperations; // Static data member
public:
    // Constructor
    Bank(int acc = 0, string n = "", float bal = 0)
    {
        accountNo = acc;
        name = n;
        balance = bal;
    }
    // Deposit function
    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposit Successful\n";
         cout<<"Total amount:"<<balance<<endl;
        totalOperations++;
    }
    // Withdraw function
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful\n";
            cout<<"remaining amount:"<<balance<<endl;
            totalOperations++;
        }
        else
        {
            cout << "Insufficient Balance\n";
        }
    }
    // Display Balance
    void displayBalance()
    {
        cout << "\nAccount Number : " << accountNo;
        cout << "\nName           : " << name;
        cout << "\nBalance        : Rs. " << balance << endl;
        totalOperations++;
    }
    // Static Member Function
    static void displayTotalOperations()
    {
        cout << "\nTotal Operations Performed = " << totalOperations << endl;
    }
};
// Initialize static member
int Bank::totalOperations = 0;

int main()
{
    // Create 3 users
    Bank user[3] = {
        Bank(101, "Ram", 5000),
        Bank(102, "Shyam", 7000),
        Bank(103, "Hari", 10000)
    };
    int choice, userNo;
    float amount;
    do
    {
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Balance\n";
        cout << "4. Display Total Operations\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3)
        {
            cout << "Select User (1-3): ";
            cin >> userNo;

            if (userNo < 1 || userNo > 3)
            {
                cout << "Invalid User!\n";
                continue;
            }
        }

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            user[userNo - 1].deposit(amount);
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            user[userNo - 1].withdraw(amount);
            break;

        case 3:
            user[userNo - 1].displayBalance();
            break;

        case 4:
            Bank::displayTotalOperations();
            break;

        case 5:
            cout << "Thank You\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 5);
    return 0;
}