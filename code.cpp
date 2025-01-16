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

void diaplay(struct info* newStudent){
    cout << "Student Name: " << newStudent->name << '\n';
    cout << "Student Roll No: " << newStudent->roll_no << '\n';
    cout << "Student Branch: " << newStudent->branch << '\n';
    cout << "Student CPI: " << newStudent->cpi << '\n';
}
void user_interface();

int main(){

    struct info* newStudent = ( struct info* )malloc(sizeof(struct info));

    user_interface();
    return 0;

}

// user_interface
void user_interface(){

    int choice;
    do{
        //user_options
        cout << '\n' << "1 - ADD STUDENT: " << endl;
        cout << "2 - REMOVE STUDENT: " << endl;
        cout << "3 - STUDENT INFO: " << endl;
        cout << "4 - UPDATE STUDENT INFO: " << endl;
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
                student_info();
                break;

            case 4: 
                update_student_info();
                break;

            case 5:
                cout << "EXITED" << endl;
                break;

            default: 
                cout << "INVALID \n ENTER VALID INPUT" << endl; 
                break;
        }
    }while(choice != 5);
    return;
}