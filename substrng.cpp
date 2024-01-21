#include <iostream>

using namespace std;

int find(string str, char letter){
    int index;

    for(int i = 0; i < str.size(); i++){
        if(letter == str[i]){
            index = i;

            break;
        }

        else{
            index = -1;
        }
    }

    return index;
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

    cout << find("The fox", "foxe");

    return 0;

}
