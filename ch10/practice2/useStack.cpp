//
// Created by EDY on 2023/7/12.
//
#include "iostream"
#include "stack.h"
int main () {
    using namespace std;
    Stack  st;
    char ch;
    customer po;
    double totalpayment = 0.0;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << "\a";
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter a PO number to add: ";
                cin.getline(po.fullname,30);
                cout << "Enter the payment: ";
                cin >> po.payment;
                cin.get();
                if (st.isfull())
                    cout << "stack already full\n";
                else
                    st.push(po);
                break;
            case 'P':
            case 'p': if (st.isempty())
                    cout << "stack already empty\n";
                else {
                    totalpayment += po.payment;
                    st.pop(po);
                    cout << "PO #" << po .fullname<< "  popped" << endl;
                }
                break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    system("pause");
    return 0;
}