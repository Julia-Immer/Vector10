#include "Vector10.h"

Vector10::Vector10(){
    vect_back = 0;
    //set all the values to zero for the vector
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 0;
    }
}

Vector10::~Vector10(){
    // You don't need to add anything here
}

// Implement this function first, since all tests use it.
int Vector10::ValueAt(int index){

    if ((index > vect_back) || (index < -10))
    {
        return 0;
    }
    return arr[index];
}

// Implement this function second, since most tests use it.
bool Vector10::PushBack(int value){

    if (vect_back > 9) 
    {
        return false;
    }
    else
    {
        //set value to first open space in arr
        arr[vect_back] = value;
        vect_back++;
        return true;
    }
}

int Vector10::CountEmpty(){
    //where we'll store our count of the empty (0) elemenets
    int empties = 10 - vect_back;

    return empties;
}

bool Vector10::Search(int value){
    for (int i = 0; i < vect_back; i++)
    {
        if (arr[i] == value)
        {
            return true;
        }
    }

    return false;
}


bool Vector10::Remove(int index){
    //if it's out of bounds then we return false    
    if (index > 9)
    {
        return false;
    }
    else if (index == vect_back)
    {
        return false;
    }

    for (int i = index; i < vect_back; i++)
    {
        arr[index] = arr[index + 1];
        vect_back--;
    }
    return true;
}