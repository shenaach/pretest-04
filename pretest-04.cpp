/*
Nama Program : pretest
Nama : Sharashena Chairani
NPM : 140810180022
Kelas : B
Tanggal Buat : 27 Maret 2019
*/

#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct ElemtList {
    char npm[14];
    char nama[40];
    float ipk;
    ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer list;

void banyakData(int& n){
    cout<<"Input Banyak Data : ";cin>>n;
}

void createList (list& first){
    first = NULL;
}

void createElmt(pointer& pBaru){
    pBaru = new ElemtList;
    cout<<"NPM : ";
    cin>>pBaru->npm;
    cout<<"Nama : ";
    cin.ignore();
    cin.getline(pBaru->nama,40);
    cout<<"IPK : ";
    cin>>pBaru->ipk;
    pBaru->next = NULL;
}

void insertSortNama (list& first, int n){
    ElemtList tempMhs;

	for(int i=0; i<n;i++){

		for(int j=1;j<n;j++){

			if(strcmp(first[j-1].nama, first[j].nama)>0){

				//swap

				tempMhs = first[j-1];

				first[j-1] = first[j];

				first[j] = tempMhs;

			}

		}

	}
}

void traversal (list first){
    pointer pBantu;
    if(First==NULL){
        cout << "List Kosong" << endl;
    }
    else{
        pBantu=First;
        do{
            cout << pBantu->info;
            pBantu = pBantu->next;
        } while(pBantu != NULL);
    }
}

int main (){
    int i;
    pointer p, pCari;
    List Mhs;
    char kunci;
    int ketemu;

    createList(Mhs);

    createElmt(p);
    insertSortNama(Mhs,p);
    traversal(Mhs);

    cout << endl;
    createElmt(p);
    insertSortNama(Mhs,p);
    traversal(Mhs);

    cout << endl;
    createElmt(p);
    insertSortNama(Mhs,p);
    traversal(Mhs);
}
