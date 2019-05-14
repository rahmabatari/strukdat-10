/*
Nama Program	: Exercise 1
Nama    		: Rahma Batari
NPM      		: 140810180051
Kelas 			: A
Deskripsi 		: 
*/

#include<iostream>

using namespace std;

const int maxElemen = 255;
struct Queue{
    char isi[maxElemen];
    int head; 
    int tail; 
};

void createQueue (Queue& Q){
    Q.head = 0;
    Q.tail = -1;
}

void insertQueue(Queue& Q, char elemen) {
    if (Q.tail==maxElemen-1){
        cout<<"Antrian penuh"<<endl;
    }
    else {
        Q.tail=Q.tail + 1;
        Q.isi[Q.tail] = elemen;
    }
}

void deleteQueue(Queue& Q, char& elemenHapus){
    if (Q.head>Q.tail){ 
        cout<<"Antrian kosong"<<endl;
    }
    else {
        elemenHapus= Q.isi[Q.head]; 
        for (int i=0;i<Q.tail;i++){ 
            Q.isi[i]=Q.isi[i+1];
        }
        Q.tail=Q.tail-1;
    }
}

int main()
{
    char a;
    Queue Q;
    int n;

    createQueue(Q);
    cout<<"Jumlah Antrian : ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Masukkan Data : ";cin>>a;
        insertQueue(Q,a);
    }

    cout<<"Queue : ";
    for(int i=0;i<n;i++){
        cout<<Q.isi[i]<<",";
    }cout<<endl;

    
    deleteQueue(Q,a);

    cout<<"Queue[After Delete] : ";
    for(int i=0;i<n;i++){
        cout<<Q.isi[i]<<",";
    }cout<<endl;

