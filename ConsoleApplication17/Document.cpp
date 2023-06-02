#include "Document.h"
#include <sstream>

Document::Document(
    string author,
    string text) {
    this->author = author;
    this->text = text;
}
const string& Document::getAuthor() const {
    return author;
}
const string& Document::getText() const {
    return text;
}

// #include <sstream>
string Document::build() const {
    stringstream out;
    for (int i = 0; i < 25; i++) {
        out << "_";
    }
    out << endl;
    out << "Author: " << author << endl;
    out << endl;
    out << text << endl;
    for (int i = 0; i < 25; i++) {
        out << "_";
    }
    return out.str();
}