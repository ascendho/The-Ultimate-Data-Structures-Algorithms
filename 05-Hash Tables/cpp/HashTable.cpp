#include "HashTable.h"

Entry::Entry(int, string) {

}

HashTable::HashTable(int length) {

}

void HashTable::put(int, string) {

}

string HashTable::get(int) {
    return std::string();
}

void HashTable::remove(int) {

}

list<Entry> HashTable::getBucket(int) {
    return list<Entry>();
}

list<Entry> HashTable::getOrCreateBucket(int) {
    return list<Entry>();
}

Entry HashTable::getEntry(int key) {
    auto bucket = getBucket(key);

    if (!bucket.empty()) {
        for (auto entry: bucket) {
            if (entry.key == key)
                return entry;
        }
    }

}

int HashTable::hash(int key) {
    return key % entries.size();
}
