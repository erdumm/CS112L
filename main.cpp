#include <iostream>
using namespace std;

class heatcool {

private:
    int temp = 15;

public:

    int warm(){
        temp = temp + 5;
        return temp;
    }
    int cool(){
        temp = temp - 5;
        return temp;
    }
    
};

int main() {
    heatcool f1;
    f1.cool();
    f1.warm();
    int option;
    
    while (1) {
        cout << endl;
        cout << "Current temperature is 15" << endl;
        cout << endl;
        
        cout << "Press 1 to WARM."<<endl;
        cout << "Press 2 to COOL."<<endl;
        cout << endl;
        
        cout << "Enter any option: ";
        cin>>option;
        cout << endl;
        
        switch(option)
        {
            case 1:
                cout << "The temperature is now " << f1.warm() << " :)" << endl;
            break;
                    
            case 2 :
                cout << "The temperature is now " << f1.cool() << " :)"<< endl;
            break;
                
            return 0;
                default:
                break;
            }
    
    }

    
    
    return 0;
}
