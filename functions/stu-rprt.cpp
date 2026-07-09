// Student Report Program with improved functionality and user interaction 

#include <iostream>
#include <string>

using namespace std;

string name;   

void welcome_message() {  // void means it does not return any value. (important)
    cout << "Welcome to the Student Report Program!" << endl;
    cout << "===============================" << endl;
    cout << "STUDENT REPORT SYSTEM" << endl;
    cout << "===============================" << endl;
}

void student_name() {
    cout << "Enter your name: ";

    cin.ignore();          
    getline(cin, name);  // getlines means it will take the whole line as input including spaces (important)

    cout << "Name entered successfully: " << name << endl;
}

void show_student_name() {
    cout << "Showing student's name:" << endl;

    if (name.empty()) {  // Check if the name is empty
        cout << "No student name entered yet!" << endl;  
    }
    else {
        cout << name << endl;
    }
}

void calculate_average() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    double average = (num1 + num2 + num3) / 3.0;

    cout << "Average: " << average << endl;
}

int main() {

    welcome_message();

    int choice; // this always comes before the do while loop because we need to use it in the condition of the loop

    do {

        cout << "\n";
        cout << "1. Enter Student Name" << endl;
        cout << "2. Show Student Name" << endl;
        cout << "3. Calculate Average" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {  // swtich is used to select one of many code blocks to be executed and avoid repetitive if else statements. (important)

        case 1:
            student_name();
            break;

        case 2:
            show_student_name();
            break;

        case 3:
            calculate_average();
            break;

        case 4:
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}