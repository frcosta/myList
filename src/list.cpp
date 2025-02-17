#include "include/list.h"

int List::print_menu() {
    int choice;

    cout << "***********************************\n";
    cout << "1. Print list\n";
    cout << "2. Add to list\n";
    cout << "3. Delete from list\n";
    cout << "4. Quit\n";
    cout << "***********************************\n";
    cout << "Enter your choice and press ENTER: ";

    cin >> choice;

    return choice;
}

void List::add_item() {
    string item;
    cout << "**** Enter the item you have to add: ";
    cin >> item;
    
    list.push_back(item);
    cout << "\nItem added to the list\n\n";
}

void List::print_list() {
    if (list.size()) {
        for (int i = 0; i < (int)list.size(); i++) {
            cout << i << ":" << list[i] << endl;
        }
    } else {
        cout << "Not itens on the list\n\n";
    }
}

void List::delete_item() {
    int choice;
    if (list.size()) {
        cout << "\nItens List:\n\n";
        for (int i = 0; i < (int)list.size(); i++){
            cout << i << ":" << list[i] << endl;
        }
        cout << "What is your choice? ";
        cin >> choice;
        if (choice < 0 || choice > (int)list.size()) {
            cout << "\nIten is not in list\n\n";
        } else {
            list.erase(list.begin()+choice);
        }
    }
}
