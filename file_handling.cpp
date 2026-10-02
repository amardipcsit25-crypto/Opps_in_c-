// FOR WRITE MODE

//wap to write  the data in the file.
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream file;
//     file.open("file.txt");  // file.open("file.txt",ios::out);
//     file<<"I am currently an Itt student.";
//     file.close();
// }

//FOR READ MODE

//wap to read the data from the file that you made in the previous program.
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ifstream file;
//     string name;
//     file.open("file.txt"); // file.open("file.txt",ios::in);
//     if(file.is_open())
//     {
//         while(getline(file,name)){
//             cout<<name;
//         }
//     }
//     else
//     cout<<"file not found";
//     file.close();
// }

//FOR THE APPEND MODE

//wap to add the contain in the file.txt.
//  #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream file;
//     file.open("file.txt",ios::app);  
//     file<<endl<<"Studying at Orchid International College.";
//     cout<<"contained are added successfully.";
//     file.close();
// }

//wap to print data in the file and read contain of that file.
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     fstream file;
//     file.open("text.txt",ios::out|ios::in);
//     file<<"It's me Amardip Singh.";
//     cout<<"data is written successfully"<<endl;
    
//     file.seekg(0);//function same as rewind 
//     string str;
//     while(getline(file,str)){
//         cout<<str;
//     }
//     file.close();
//     return 0;
// }

//wap to print the content in the file using put and get.
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     fstream file;
//     char ch;
//     file.open("abc.txt",ios::out);
//     cout<<"Enter the Your name:";
//     cin.get(ch);
//     file.put(ch);
//     file.close();
//     return 0;
// }

//wap to read the content of the file using get() function from the text.txt.
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     fstream file;
//     char ch;
//     file.open("text.txt",ios::in);
//     if(file.is_open()){
//         while(file.get(ch)){
//             cout<<ch;
//         }
//     }
//     else
//     cout<<"File not found:";
// }

//wap to using the tellg().
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     fstream file;
//     file.open("text.txt");
//     streampos pos;
//     pos=file.tellg();
//     cout<<pos;
//     return 0;
// }

//wap to using the tellp().
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     fstream file;
//     streampos pos;
//     file.open("text.txt",ios::out);
//     pos=file.tellp();
//     cout<<pos;
//     return 0;
// }

//wap to demonstrate the use of good(), eof(), fail(), and bad() functions in file handling.
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ifstream file;
//     char ch;

//     file.open("text.txt");

//     // Demonstrating good()
//     if (file.good())
//         cout << "good(): File is open and stream is in a good state." << endl;
//     else
//         cout << "good(): Stream is not in a good state." << endl;

//     // Reading the file
//     cout << "\nFile contents:" << endl;

//     while (file.get(ch))
//     {
//         cout << ch;
//     }

//     // Demonstrating eof()
//     if (file.eof())
//         cout << "\neof(): End of file has been reached." << endl;

//     // Demonstrating fail()
//     if (file.fail())
//         cout << "fail(): The last input operation failed." << endl;

//     // Demonstrating bad()
//     if (file.bad())
//         cout << "bad(): A serious input/output error occurred." << endl;
//     else
//         cout << "bad(): No serious I/O error occurred." << endl;

//     file.close();

//     return 0;
// }

//wap to print the print the vowel words in vowel.txt and consonant in constant.txt file.
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     string name;
//     cout<<"Enter your name:";
//     getline(cin>>ws,name);
//     ofstream vowel_file("vowel.txt");
//     ofstream consonant_file("consonant.txt");
//     for(int i=0;name[i]!='\0';i++){
//         if(name[i]=='a'||name[i]=='A'||name[i]=='e'||name[i]=='E'||name[i]=='i'||name[i]=='I'||name[i]=='o'||name[i]=='O'||name[i]=='u'||name[i]=='U'||name[i]==' '){
//             vowel_file<<name[i];
//         }
//         else{
//             consonant_file<<name[i];
//         }
//     }
//     vowel_file.close();
//     consonant_file.close();
// }

//wap using  Movie class and object using members data is book name and genre.If the genre is action then print the name of book in the action.txt with genre 
//else print in comedy if the genre is comedy.txt.

// #include<iostream>
// #include<fstream>
// using namespace std;
// class Movie{
//     string Book_name;
//     string genre;
//     public:
//     void input(){
//         cout<<"Enter the Book name:";
//         getline(cin>>ws,Book_name);
//         cout<<"Enter of the Book genre:";
//        getline(cin>>ws,genre);
//     }

//     void print(){
//         ofstream action("action.txt");
//         ofstream comedy("comedy.txt");
//         if(genre=="action"||genre=="Action"){
//             action<<Book_name<<genre;
//         }
//         else if(genre=="comedy"|| genre=="Comedy"){
//             comedy<<Book_name<<genre;
//         }
//         else{
//             cout<<"Not any genre:";
//         }
//         action.close();
//         comedy.close();
//     }
// };

// int main(){
//       Movie m;
//       m.input();
//       m.print();
// }

//wap to print name of person if first letter start with the vowel letter in the vowelName.txt.
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream f("vowelName.txt");
//     string name;
//     cout<<"Enter your name:";
//     getline(cin>>ws,name);
//        char firstChar = tolower(name[0]);    
//     if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || 
//         firstChar == 'o' || firstChar == 'u') {        
//         f << name << endl;
//     } 
//     else {
//         cout << "Your name is not start with Vowel letters:" << endl;
//     }
//     f.close();
//     return 0;
// }

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    string name;
    file.open("text.txt",ios::in);
    if(file.is_open()){
      while(getline(file,name)){
        cout<<name;
      }
    }
    file.close();
    return 0;
}