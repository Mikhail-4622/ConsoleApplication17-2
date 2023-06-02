#include "Printer.h"
#include <iostream>

Printer::Printer() {
}

void Printer::addInk(int amount) {
    ink += amount;
}

void Printer::addDocument(Document doc) {
    documents.push(doc);
}

void Printer::printDocument(const Document& doc) {
    string text = doc.build();
    int amount = text.length();
    if (amount > ink) {
        cout << "������������ ������ (" << (amount - ink) << ")";
        return;
    }
    cout << "�������� ��������" << endl;
    cout << "������ ������������: " << amount << " ";
    ink -= amount;
    cout << "��������: " << ink << endl;
    cout << "���������:" << endl;
    cout << text << endl;
}

void Printer::print() {
    if (!documents.empty()) {
        Document& doc = documents.front();
        printDocument(doc);
    }
}
