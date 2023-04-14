#ifndef CPP_HASHTABLE_H
#define CPP_HASHTABLE_H

#include<string>
#include<list>


using namespace std;


class Entry {

public:
    Entry(int, string);

    int key;

    string value;

};

class HashTable {
private:
    list<Entry> entries;

    list<Entry> getBucket(int);

    list<Entry> getOrCreateBucket(int);

    Entry getEntry(int);

    int hash(int);

public:
    explicit HashTable(int length);

    void put(int, string);

    string get(int);

    void remove(int);

};


#endif //CPP_HASHTABLE_H
