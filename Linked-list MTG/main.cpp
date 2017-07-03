#include "mainwindow.h"
#include <QApplication>
struct Node{
    int card;
    char16_t color;
    int cost;
    char32_t CardName;
    Node* NextCard;
};

int AddNodeToEnd(Node A, int *card){
    Node* temp = new Node();
    temp -> card = *card++;
    temp -> color = *color;
    temp -> cost = *cost;
    temp -> CardName = *CardName;
    temp -> NextCard = NULL;
    Node* temp1 = A;
    while(temp1 -> NextCard != NULL){
        temp1 = temp1 -> NextCard;
    }
    temp1 -> NextCard = temp;
    return 0;
}

int DeleteNode(Node A, int *card){
    return 0;
}

int InsertNode(Node A, int* card){
    return 0;
}

int main(int argc, char *argv[])
{
    Node* A;
    A = NULL;
    int cardID = 1;
    Node* temp = new Node();
    temp -> card = cardID;
    temp -> color = colorID;
    temp -> name = CardNameID;
    temp -> cost = costID;
    temp -> NextCard = NULL;
    A = temp;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
