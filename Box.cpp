#include <iostream>
#include <string>
using namespace std;

void printBox(string* box, int size){
    for (int i = 0; i < size; i++)
    {
        cout << box[i];
        cout << "\n";
    }
    return;
}

string* makeBox(int size){
    string boxWall = "#";
    string boxInside = " ";
    if (size < 1){
        cout << "The box size must be one, or larger number. Your value is: " + size;
        return nullptr;
    }

    string* box = new string[size];
    
    string fullLine = boxWall;
    string middleLines = boxWall;
    for (int i = 1; i <size; i++){
        fullLine += boxWall;
        middleLines += boxInside;
    }
    middleLines.pop_back();
    middleLines += boxWall;

    for (int i = 1; i < size-1; i++){
    box[i] = middleLines;
    }

    box[0] = fullLine;
    box[size-1] = fullLine;

    printBox(box, size);

    return box;
}

int main(){
    for (int i = 0; i < 20; i++)
    {
        makeBox(i);
    }
        return 0;
}
