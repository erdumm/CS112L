#include <iostream>
using namespace std;

class officer{
private:
    int officerID;
    string officerName;
    string officerRank;
    static int c;
public:
    void Print()
    {
        cout << "Enter ID of Officer" << endl;
        cin >> officerID;
        cout << "Enter Name of Officer" << endl;
        cin >> officerName;
        cout << "Enter rank of officer" << endl;
        cin >> officerRank;
    }
    
    void Palindrome()
    {
        int r = 0;
        int number;
        int n = officerID;
            while (officerID > 0)
            {
                number = officerID % 10;
                r = (r * 10) + number;
                officerID = officerID / 10;
            }
        if (n==r)
        {
            cout << "Officer cannot enter the area" << endl;
        }
        else
        {
            cout << "Officers can enter the area" << endl;
            c++;
        }
    }
    
    void total()
    {
        cout << "Total Officers are: " << c << endl;
    }
};
int officer::c = 0;

int main() {
    int option;
    officer a1;
    do {
        cout << "Press 1 to Enter Officer ID" << endl;
        cout << "Press 2 to know total number of Officers in town" << endl;
        cout << "Press 3 to Exit" << endl;
        cout << "Enter option" << endl;
        cin >> option;
        if (option != 1 && option != 2 && option != 3) {
            cout << "Please enter the correct option";
            cin >> option;
        }
        switch (option)
        {
        case 1:
            a1.Print();
            a1.Palindrome();
            break;
        case 2:
            a1.total();
            break;
        default:
            break;
        }
    } while (option != 3);
}

