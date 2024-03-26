#include <iostream>
#include <string.h>
using namespace std;
class book
{
private:
    int bookid;
    char title[20];
    float price;

public:
    void display_book()
    {
        cout << "\n"
             << bookid << "\t" << title << "\t" << price;
    }
    void input_book()
    {
        cout << "\n enter book id ,title and price";
        cin >> bookid;
        if (bookid < 0)
        { // for positive value
            bookid = -bookid;
        }
        cin.ignore();
        cin.getline(title, 20);
        cin >> price;
    }
};
int main()
{
    book b1, b2, b3;
    b1.input_book();
    b2.input_book();
    b3.input_book();
    cout << "\nbook_id\tbook_title\tbook price";
    b1.display_book();
    b2.display_book();
    b3.display_book();
    return 0;
}