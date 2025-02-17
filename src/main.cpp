#include "include/list.h"

int main(int arg_count, char *args[]) {
   int ch = 0;
   List simpleList;

   if (arg_count > 1) {
      simpleList.name = string(args[1]);
   } else {
      cout << "Username not supplied... exiting the program." << endl;
      return 10;
   }
    while (ch != 4) {
       ch = simpleList.print_menu();
       if (ch == 1)
          simpleList.print_list();
        else if (ch == 2)
           simpleList.add_item();
        else if (ch == 3)
           simpleList.delete_item();
        else {
            cout << "\nFinish!\n\n";
        }
    }
    return 0;
}

