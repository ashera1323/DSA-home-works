// by Ashera Dyussenova BS20-05
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>

using namespace std;

template <typename T>
class SortList{
    //interface of Sorted List:
public:
    void add(T item);   // worst case O(n) : add a new item to the List
    T least();          // worst case O(1) : return the least element
    T greatest();       // worst case O(1) : return the greatest element
    T get(int i);       // worst case O(1) : return the i-th least element
    int indexOf(T item);    // worst case O(n) : return the index of an element (in a sorted sequence)
    void remove(int i); // worst case O(n) :remove i-th least element from the list
    SortList<T> searchRange(T from, T to);  // worst case O(n) : find all items between from and to
    int size();         // worst case O(1) : return the size of the list
    bool isEmpty();     // worst case O(1) : return whether the list is empty
    int sjze = 0;       // size of list

private:
    //SortList -> ArrayList
    int sizeOfArray = 256;  //inital memory size allocated for list
    T* array = new T[256];  // array

    // worst case O(n) resize of Array
    void resize_a(T* &array, int sz){
        //Double memory
        int new_size = sizeOfArray * 2;
        //case: Double memory less than needed
        if(new_size < sz)
            new_size = sz;
        //new array with needed memory
        T *resize;
        resize = new T[new_size];
        //copy data from old to new array
        for(int i = 1; i <= sjze; ++i)
            resize[i] = array[i];
        // replace old to new array, delete old array
        delete[] array;
        array = resize;
        sizeOfArray = new_size;
    }
};

// worst case O(1) return size of SortedList
template <typename T>
int SortList<T> :: size(){
    return sjze;
}

// worst case O(n) add item to SortedList
template <typename T>
void SortList<T> :: add(T item){
    int pos = 1;
    //check for memory space
    if(sjze+2 > sizeOfArray)
        resize_a(array, sjze+1);
    sjze++;

    // search for position to add (To List be sorted)
    for(int i = 1; i <= sjze; ++i){
        if(sjze == 1 || sjze == 2){
            pos = sjze;
            break;
        }
        if(array[i] > item || i == sjze){
            pos = i;
            break;
        }
    }
    // exception case: add item #2
    if(sjze == 2){
        if(array[1] > item){
            array[2] = array[1];
            array[1] = item;
        }
        else
            array[2] = item;
    }
        // add item to pos and shift items one postion to right
    else{
        for(int i = sjze; i >= pos + 1; --i)
            array[i] = array[i-1];
        array[pos] = item;
    }
}

// worst case O(1) return least element of List
template <typename T>
T SortList<T> :: least(){
    return array[1];
}

// worst case O(1) return greatest element of List
template <typename T>
T SortList<T> :: greatest(){
    return array[sjze];
}

// worst case O(1) return value of i-th position
template <typename T>
T SortList<T> :: get(int i){
    //case: position is out of range of List
    if(i > sjze || i < 1)
        return{};
    return array[i];
}

// worst case O(n) return index of item
template <typename T>
int SortList<T> :: indexOf(T item){
    for(int i = 1; i<= sjze; ++i)
        if(array[i] == item)
            return i;
    // case: item doesn't exist in list
    return -1;
}
// worst case O(1) return whether the list is empty
template <typename T>
bool SortList<T> :: isEmpty(){
    if(sjze != 0)
        return false;
    return true;
}

// worst case O(n) remove item from i-th position
template <typename T>
void SortList<T> :: remove(int i){
    // check for range
    if(!isEmpty()){
        if(i <= sjze && i > 0){
            // delet -> shift items one postion to left
            for(int j = i; j < sjze; ++j)
                array[j] = array[j+1];
            //size - 1;
            --sjze;
            return;
        }
    }
}

// worst case O(n) find all items between from and to
// search position of begin -> worst case: position == last element -> n;
// add items from position begin -> worst case: from first element to last -> n
// n + n = 2n -> O(n)
template <typename T>
SortList<T> SortList<T> :: searchRange(T from, T to){
    SortList<T> segment;
    // check for range
    if(!(from > to || to < array[1] || from > array[sjze])){
        int from_index = -1;
        // worst case O(n) search position of begin
        for(int i = 1; i <= size(); ++i)
            if(array[i] >= from){
                from_index = i;
                break;
            }
        // worst case O(n) add items from position begin
        for(int i = from_index; i <= size(); i++){
            // сheck for position of end
            if(array[i] > to)
                break;
            segment.add(array[i]);
        }
    }
    return segment;
}


int main(){
    SortList<string> list;

}
