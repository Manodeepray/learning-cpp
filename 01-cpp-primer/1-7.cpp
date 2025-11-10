// #include <iostream>
// #include "Sales_item.h"
// #include 



// using namespace std;


// int test(){
//     Sales_item total,trans;
//     if (cin >> total){
//         while (cin >> trans){
//             if (total.isbn() ==  trans.isbn()){
//                 total += trans;
//             }else{
//                 cout<< total << endl;
//                 total = trans;
//             }
//         }
//         cout<< total << endl;
//     }else{
//         cerr << "No Data?!!" << endl;
//         return -1;
//     }
//     return 0;
// }


// Write a program that reads several transactions and counts how many
// transactions occur for each ISBN.


#include <iostream>
#include <map>
#include <string>
#include "Sales_item.h"

using namespace std;

int main() {
    Sales_item ctr;
    map<string, int> transactions;
    int i = 1;

    cout << "Enter transactions (ISBN units price). Press Ctrl+D (Linux/macOS) or Ctrl+Z (Windows) to stop.\n";

    // Read Sales_item objects until EOF
    while (cin >> ctr) {
        string bookNo = ctr.isbn();
        transactions[bookNo]++; // increment count for that ISBN
        cout << "Recorded book #" << i++ << " with ISBN: " << bookNo << endl;
    }

    cout << "\n=== Transaction Summary ===\n";
    for (const auto& entry : transactions) {
        cout << "ISBN: " << entry.first << " -> " << entry.second << " transactions" << endl;
    }

    return 0;
}