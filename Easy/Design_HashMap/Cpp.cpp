#include <bits/stdc++.h>

using namespace std;

class MyHashMap {
int table[1000001];
public:
    MyHashMap() {
        for (int i = 0; i < 1000001; i++) {
            table[i] = -1;
        }
    }
    
    void put(int key, int value) {
        table[key] = value;
    }
    
    int get(int key) {
        return table[key];
    }
    
    void remove(int key) {
        table[key] = -1;
    }
};

int main() {
    MyHashMap* obj = new MyHashMap();
    obj->put(1, 1);
    obj->put(2, 2);
    cout << obj->get(1) << endl;
    cout << obj->get(3) << endl;
    obj->put(2, 1);
    cout << obj->get(2) << endl;
    obj->remove(2);
    cout << obj->get(2) << endl;
    return 0;
}