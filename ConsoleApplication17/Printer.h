#pragma once
#include <queue>
#include "Document.h"

using namespace std;

class Printer {
    queue<Document> documents;
    int ink = 0;
    void printDocument(const Document& doc);
public:
    Printer();
    void addInk(int amount);
    void addDocument(Document doc);
    void print();
};

