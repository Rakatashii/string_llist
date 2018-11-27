#include <iostream>
#include "List.hpp"
#include "Iterator.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    List people;
    Iterator iter = people.begin();
    people.insert(iter, "Dave");
    people.insert(iter, "Karry");
    
    people.display(iter);
    iter.previous();
    people.display(iter);
    iter = people.begin();
    people.display(iter);
    
    cout << *iter << endl;
    *iter = "Larry";
    cout << *iter << endl;
    people.display(iter);

    return 0;
}
