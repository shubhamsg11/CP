#include <iostream>
using namespace std;

int main() {
    string str = "C++ Programming";

    // you can also use str.length()
    cout << "String Length = " << str.size();

    return 0;
}


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "C++ Programming is awesome";

    cout << "String Length = " << strlen(str);

    return 0;
}