#include <iostream>
#include <vector>
using namespace std;

class List {
    public:
    List() {

    }
    ~List() {

    }
    vector<string> list;
    string name;

    int print_menu();
    void add_item();
    void print_list();
    void delete_item();
};