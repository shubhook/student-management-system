#include <iostream>
#include <string>
#define MAX 50
using namespace std;
 
struct info{
    string name;
    int roll_no;
    float cpi;
    string branch;
};

struct node{
    info data;
    struct node* next;
};
struct node* head = nullptr;
struct node* current = nullptr;



void user_interface();
void add_student();
void remove_student();
void all_student_info();
void find_student_info();

int main(){
    user_interface();
    return 0;
}

// user_interface
void user_interface(){
    int choice;
    do{
        
        cout << '\n' << "----- STUDENT INFO MANAGEMENT -----" << '\n' ;
        //user_options
        cout << '\n' << "1 - ADD STUDENT: " << endl;
        cout << "2 - REMOVE STUDENT: " << endl;
        cout << "3 - All STUDENT INFO: " << endl;
        cout << "4 - FIND STUDENT INFO: " << endl;
        cout << "5 - EXIT: " << endl;

        //user_choice's
        cout << "ENTER YOUR CHOICE ( 1-5 ): ";
        cin  >> choice;

        // to overcome input buffer
        if (cin.fail()) { // Check if the input failed
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer
            cout << '\n' << "Invalid input! Please enter an integer." << endl;
        }

        switch(choice){
            case 1: 
                add_student();
                break;
            
            case 2:
                remove_student();
                break;

            case 3: 
                all_student_info();
                break;

            case 4: 
                find_student_info();
                break;

            case 5:
                cout << "EXITED" << endl;
                break;

            default: 
                cout << "INVALID \n ENTER VALID INPUT" << endl; 
                break;
        }
    }while(choice != 5);

    cout << '\n' << "-----------------------------------" << '\n' ;
    return;
}

void add_student(){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    cout << "ENTER NAME:";
    cin.ignore();// clears the input buffer
    getline(cin,newNode->data.name);

    cout << "ENTER ROLL NO: ";
    cin  >> newNode->data.roll_no ;

    cout << "ENTER CPI: ";
    cin  >> newNode->data.cpi;

    cout << "ENTER BRANCH: ";
    cin  >> newNode->data.branch;
    newNode->next = head;
    head = newNode;

    cout << '\n' << "STUDENT ADDED!" << '\n' ;

    return;
}

void all_student_info(){
    current = head;
    if(head == nullptr){
        cout << "THE LIST IS EMPTY!" << '\n' ;
    }else{
        while(current != nullptr){
        cout << '\n';
        cout << "Name: " << current->data.name << endl;
        cout << "Roll: " << current->data.roll_no << endl;
        cout << "CPI: " << current->data.cpi << endl;
        cout << "Branch: " << current->data.branch << endl;
        cout << '\n';
        current = current->next;
        }
    }
    
    return;
}

void find_student_info(){
    string name;
    bool found = false;

    cout << "ENTER NAME: ";
    cin.ignore(); // to clear the input buffer
    getline(cin, name);
    current = head;

    while(current != nullptr){
        if(current->data.name == name){
            cout << '\n';
            cout << "Name: " << current->data.name << endl;
            cout << "Roll: " << current->data.roll_no << endl;
            cout << "CPI: " << current->data.cpi << endl;
            cout << "Branch: " << current->data.branch << endl;
            cout << '\n';
            found = true;
            break;
        }
        current = current->next;
    }

    if (!found) {
        cout << "Student not found!" << endl;
    }
    return;
}

void remove_student() {
    string name;
    struct node* prev = nullptr;
    struct node* current = head;
    bool found = false;

    cout << "ENTER THE NAME: ";
    cin.ignore();  
    getline(cin, name);

    while (current != nullptr) {

        if (current->data.name == name) {

            if (prev == nullptr) {
                head = current->next;  
            } else {
                prev->next = current->next;  
            }
            delete current;  
            found = true;
            break;  
        }
        prev = current;      
        current = current->next;  
    }

    if (!found) {
        cout << "Student not found!" << endl;
        return;
    }

    cout << '\n' << "STUDENT REMOVED!" << '\n' ;

    return;
}


