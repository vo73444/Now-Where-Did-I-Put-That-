#include <iostream>

using namespace std;

int find(string str, char letter, int start = 0){
    int index;

    for(int i = start; i < str.size(); i++){

        if(start > str.size()){
            break;
        }

        else if(letter == str[i]){
            index = i - start;

            return index;
        }
    }

    return -1;
}

int find(string str, string str2){
    int index;

    for(int i = 0; i < str.size(); i++){
        if(str2 == str.substr(i,str2.size())){
            index = i;

            break;
        }

        else{
            index = -1;
        }
    }

    return index;
}

int main(){

    cout << "\n" << find("The fox", 'f') << "\n";
    cout << "\n" << find("The fox", 'f', 0) << "\n";
    cout << "\n" << find("The fox", 'f', 1) << "\n";
    cout << "\n" << find("The fox", 'f', 2) << "\n";
    cout << "\n" << find("The fox", 'f', 4) << "\n";
    cout << "\n" << find("The fox", 'f', 5) << "\n";
    cout << "\n" << find("The fox", 'f', 7) << "\n";


    return 0;

}
