#include<iostream>
#include<fstream>
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
    int getId(){
        return id;
    }
};
int main(){
    fstream file;
    Book b;
    file.open("books.dat",ios::binary|ios::in);
    int searchId;
    cout<<"Enter book id: ";
    cin>>searchId;
    while(file.read((char*)&b,sizeof(b))){
        if(b.getId()==searchId){
            b.showData();
            cout<<"-----------------";
        }else{
            cout<<"Invalid book id";
        }
        
    }
    file.close();
    return 0;
}
