//  Created by Gregory Peter on 4/18/17.
//
// Linked List reference:
//http://code.runnable.com/Us52yozciVFWAAbW/how-to-add-a-node-into-a-linked-list-for-c%2B%2B
//
//
// a class for an individual Flight is defined below
// also some data reading and manipulating algorithms have been started for the input file
//
//  TO DO:
// 1. fix data parsing and define method to assign it to a flight from Flight class
// 2. create linked list class and functions to make a list of flight data in proper format
// 3. Write print function
// 4. Write carriage return function
// 5. Statistics 


#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>


using namespace std;

class Flight {
    friend class LinkedList; 
    // declares friend class LinkedList that will store individual flights and their data when they are read from input file 
    private:
        int current_time; // >=0, relative time of the action
        char action; // A or D (arrival or departure)
        int fuel; // >=0, amount of fuel the aircraft currently has
        int people; // >=0, number of people on board
        float cargo; // cargo value amount
        char special; // Y or N (grandchildren on board yes or no)
        Flight *next_flight; // pointer to next flight 
    public:
        void set_values(int, char, int, int, float, char); // function to assign values to a Flight  
};

class LinkedList {
    //Linked List that will store each flight that is read through input and created form the class 
    private:
        Flight *head; //pointer to first flight data that is stored in the linked list 
        Flight *tail; //pointer to the last flight that is stored in the linked list
    public:
        LinkedList(void); // constructor to create an empty list
        LinkedList(flight);// constructor that recieves values from Flight::set_values
        void tailAppend(Flight); // function to add a flight data at the end of the current list
        Flight* getFlight(int pos); //return the flight at a given position
};

LinkedList::LinkedList() {    
    // Initialize the head and tail node     
    head = tail = NULL;
}
void LinkedList::tailAppend(int a,b,c,d,e,f) {
    // The list is empty?
    if (head == NULL) {
        // the same to create a new list with a given value         
        tail = head = new Flight(a,b,c,d,e,f,);    
    }    
    else {        
        // Append the new node to the tail         
        tail->next = new Node(a,b,c,d,e,f);        
        // Update the tail pointer     
        tail = tail->next;    
    }
}

void Flight::set_values (int a, char b, int c, int d, float e, char f) {
    // this function is part of the Flight class
    // it is called in the flight_data_in procedure
    // it assigns input data to a new flight data element
    current_time = a;
    action = b;
    fuel = c;
    people = d;
    cargo = e;
    special = f;
  
}


void flight_data_in() {
    ifstream file ("flightdata.csv"); //opens input file
    string datum; //declares a string, this is temporary to hold a datum
    while (flightdata.good()) { // loop that goes until end of file
        getline (flightdata, datum, ","); // gets a single line
        if (datum == "P") {
            print_statistics(???); // print the current data
        }
        else if (datum == "W") {
            carriage_return(???); // wait for carriage return
        }
        else {
            if datum
            Flight flight; // creates a flight
            flight.set_values(a,b,c,d,e,f); //assign values to the new flight
            list_insert(flight); // insert flight to linked list of flights
        }
    }
}

void list_insert(Flight) {
    // define a function for adding flights to a linked list
    
}

void print(???){
    // define a function to print the current statistics
}

int main() {
    flight_data_in();
    
}
