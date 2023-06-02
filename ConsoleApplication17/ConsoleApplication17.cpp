#include <iostream>
#include "Document.h"
#include "Printer.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    Document doc("Кто-то", "художественный текст");
    Printer printer;
    printer.addDocument(doc);
    printer.addInk(50);
    printer.print();
}
