#include <iostream>
#include <algorithm>

using namespace std;

const int p = 11;
const int N = 50023;

template<typename T>
class hash_map{
public:
    T hash[N];

    //worst case O(n) add to hash map
    void add(string key, T val) {
        hash[hashing(key.c_str())].add(val);
    }

private:
    // worst case O(n) hashing calculation
    int hashing(const char* s) {
        unsigned h = 29;
        unsigned q = p;
        while (*s) {
            h = h + s[0] * q;       // hash = sum of every element * prime number in power
            s++;
            q*=p;
        }
        // case: negative hash
        if (h < 0)
            h *= -1;
        return h % N;
    }
};

class mapADT{
public:

    double price = 0;
    string* ID = new string[2];
    int size = 0;
    //worst case O(1) store data
    void set(double prise, string rec_ID, string date){
        price = prise;
        ID[0] = date;
        ID[1] = rec_ID;
        size = 1;
    }
    // worst case O(1) add to map
    void add(mapADT item) {
        price += item.price;
        if (size == 0) {
            ID[0] = item.ID[0];
            size ++;
        }
        for (int i = 1; i < size; ++i)
            if (ID[i] == item.ID[1])
                return;
        size++;

        if (size  >= ID_size)
            resize(ID, size);
        ID[size - 1] = item.ID[1];
    }

private:

    int ID_size = 2;
    // case: no memory
    void resize(string* &array, int sz){
        if(ID_size >= sz)
            return;
        //Double memory
        int new_size = ID_size * 2 + 1;
        if(new_size < sz)
            new_size = sz;

        string *resize;
        resize = new string[new_size];

        //copy data from old to new array
        for(int i = 0; i < ID_size; ++i)
            resize[i] = array[i];

        // replace old to new array, delete old array
        delete[] array;
        array = resize;
        ID_size = new_size;
    }

};

int main(){
    hash_map<mapADT> map;

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i){
        string date, time, reciept_ID, item_title;
        char cy;
        double price;
        cin >> date >> time >> cy >> reciept_ID >> cy >> price;
        getline(cin, item_title);

        mapADT d;
        d.set(price, reciept_ID, date);
        map.add(date, d);
    }

    for (int i = 0; i < N; ++i){
        if (map.hash[i].price > 0) {
            int count = 0;
            mapADT out = map.hash[i];
            cout << out.ID[0] << " $";
            cout << map.hash[i].price << ' ' << out.size - 1 << "\n";
        }
    }

}