#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Book
{
public:
    int id;
    char name[50];  // Use char array instead of string for binary I/O
    void setData()
    {
        cout << "Enter book Id : ";
        cin >> id;
        cin.ignore();  // Clear newline from buffer
        cout << "Enter name of book : ";
        cin.getline(name, 50);
    }
    
    void showData(){
        cout << "\nBook Id : " << id;
        cout << "\nName : " << name << endl;
    }
};

int main()
{
    fstream file;
    
    // Open file in binary read/write mode
    file.open("books.dat", ios::out | ios::binary);
    
    Book b;
    b.setData();
    file.write((char*)&b, sizeof(b));
    file.close();  // Close after writing
    // Reopen for reading
    file.open("books.dat", ios::in | ios::binary);
    while(file.read((char*)&b, sizeof(b))){
        b.showData();
        cout << "--------------------" << endl;
    }
    
    file.close();
    return 0;
}