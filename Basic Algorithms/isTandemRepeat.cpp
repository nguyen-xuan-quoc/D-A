#include <iostream>
#include <string>

using namespace std;

bool isTandemRepeat(string input) {
    if(input.length() % 2 != 0){
        return false;
    }
    if(input.substr(input.length() / 2, input.length() / 2) == input.substr(0, input.length() / 2)){
        return true;
    }
    return false;
}

int main() {
    string s = "tandemtandem";
    cout << isTandemRepeat(s) <<endl;
    return 0;
}