#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
    Node *prev;    
};

class DoubleLinkedList
{
private:
    Node *START;

public:
   DoubleLinkedList()
   {
    int nim;
    cout << "\nEnter the roll number of the student: ";
    cin >> nim;

    // Step 1: Allocate memory for new node
    Node *newNode = new Node();

    // Step 2: Assign value to the data fields
    newNode->noMhs = nim;

    // Step 3 : Insert at beginning if list is empty or nim is smallest
    if (START != NULL && nim == START->noMhs)
    {
        if (START != NULL && nim == START->noMhs)
        {
            cout << " \nDUplicate number not allowed" << endl;
            return;
        }
        // Step 4 : newNode.next = START
        newNode->next = START;
        
        // Step 5 : START.prev = newNode (if START exists)
        if (START != NULL)
            START->prev = newNode;

        
