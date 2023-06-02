#pragma once
#include <string>

using namespace std;

class Document {
    string author;
    string text;
public:
    Document(string author,
             string text);
    const string& getAuthor() const;
    const string& getText() const;
    string build() const;
};

