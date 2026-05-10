#include <iostream>
#include <string>
using namespace std; 
class Book
{
public:
    string Author;
    string BookName;
    int price;
    Book(string Author = "", string BookName = "", int price = 0)
        : Author(Author), BookName(BookName), price(price) {}
    
    void getData()
    {
        cout << "Author: " << Author
             << ", Book: " << BookName
             << ", Price: " << price << endl;
    }
};
int main()
{
    Book B1;
    Book B2("R.K. Narayan", "Malgudi Days", 399);
    Book B3("Premchand", "Godaan");
    B1.getData();
    B2.getData();
    B3.getData();
    return 0;
}