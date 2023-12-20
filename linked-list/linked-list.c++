#include <iostream>
using namespace std;

struct Buku{

    //komponen
    string judul, pengarang;
    int tahunTerbit;

    Buku *next;

};

Buku *head, *tail, *cur, *newNode, *del ;
void createSingleLinkedList(string judul, string pengarang,int tB){
    head = new Buku();
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunTerbit = tB;
    head->next = NULL;
    tail = head;
}

//tambah awal single linked list
void addFirst(string judul, string pengarang, int tB){
   newNode = new Buku();
   newNode->judul = judul;
   newNode->pengarang = pengarang;
   newNode->tahunTerbit = tB;
   newNode->next = NULL;
   newNode = head;
   head = newNode;
}

//tambah akhir single linked list
void addLast(string judul, string pengarang, int tB){
   newNode = new Buku();
   newNode->judul = judul;
   newNode->pengarang = pengarang;
   newNode->tahunTerbit = tB;
   newNode->next = NULL;
   tail->next = newNode;
   tail = newNode;
}

//remove first
void removeFirst(){
    del = head;
    head = head->next;
    delete del;
}

//remove Last
void removeLast(){
    del = tail;
    cur = head;
    while( cur->next != tail){
         cur = cur->next;
    } 
    tail = cur;
    tail->next = NULL;
    delete del;
}

//ubah awal single linked list
void changeFirst(string judul, string pengarang, int tB){
  head->judul = judul;
  head->pengarang = pengarang;
  head->tahunTerbit = tB;
}

//ubah akhir single linked list
void changeLast(string judul, string pengarang, int tB){
  tail->judul = judul;
  tail->pengarang = pengarang;
  tail->tahunTerbit = tB;
}

void printSingleLinkedList(){
    cur = head;
    while (cur!=NULL){
        cout << "Judul Buku : " << cur->judul << endl;
        cout << "Pengarang Buku : " << cur->pengarang << endl;
        cout << "Tahun Terbit Buku : " << cur->tahunTerbit << endl;

        cur = cur->next;
    }
     

}


int main(){

     createSingleLinkedList("Kata", "Geez & Aan", 2018);

     printSingleLinkedList();

     cout << "\n\n" << endl;

     addFirst("Dia Adalah Kakakku", "Tere Liye", 2009);

     printSingleLinkedList();

     cout << "\n\n" << endl;
     
     addLast("Dia cucu kecilku", "Kakek kuat", 2019);

     printSingleLinkedList();

     cout << "\n\n" << endl;

     removeFirst();

     printSingleLinkedList();

     cout << "\n\n" << endl;

     addLast("Dia simpananku", "Kakek muscular", 2119);

     printSingleLinkedList();

     cout << "\n\n" << endl;

     removeLast();

     printSingleLinkedList();

     cout << "\n\n" << endl;

     changeFirst("berhenti onani", "fadhil", 2018);

     printSingleLinkedList();

     cout << "\n\n" << endl;




}