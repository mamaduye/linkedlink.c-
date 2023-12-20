#include <iostream>
using namespace std;

// Define the Book class
class Buku {
public:
    // Member variables
    string judul;
    string pengarang;
    int tahunTerbit;

    // Pointer to the next book (linked list connection)
    Buku* next;

    // Constructor
    Buku(string judul, string pengarang, int tahunTerbit) {
        this->judul = judul;
        this->pengarang = pengarang;
        this->tahunTerbit = tahunTerbit;
        this->next = nullptr;
    }
};

class LinkedList {
private:
    Buku* head;
    Buku* tail;

public:
    // Constructor
    LinkedList() : head(nullptr), tail(nullptr) {}

    // Destructor to free memory
    ~LinkedList() {
        while (head != nullptr) {
            Buku* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
    }

    // Function to add a book to the beginning of the list
    void addFirst(string judul, string pengarang, int tahunTerbit) {
        Buku* newNode = new Buku(judul, pengarang, tahunTerbit);
        newNode->next = head;
        head = newNode;

        // If the list was empty, set the tail to the new node
        if (tail == nullptr) {
            tail = newNode;
        }
    }

    // Function to add a book to the end of the list
    void addLast(string judul, string pengarang, int tahunTerbit) {
        Buku* newNode = new Buku(judul, pengarang, tahunTerbit);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Function to remove the first book from the list
    void removeFirst() {
        if (head != nullptr) {
            Buku* temp = head;
