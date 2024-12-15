#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ToDoList {
private:
    vector<string> tasks;

public:
    // Display all tasks
    void displayTasks() {
        if (tasks.empty()) {
            cout << "Your to-do list is empty.\n";
        } else {
            cout << "\nYour to-do list:\n";
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i] << "\n";
            }
        }
        cout << "\n";
    }

    // Add a task
    void addTask() {
        string task;
        cout << "Enter the task you want to add: ";
        cin.ignore(); // Clear input buffer
        getline(cin, task);
        tasks.push_back(task);
        cout << "Task added successfully.\n\n";
    }

    // Delete a task
    void deleteTask() {
        displayTasks();

        if (!tasks.empty()) {
            int taskNumber;
            cout << "Enter the task number to delete: ";
            cin >> taskNumber;

            if (taskNumber > 0 && taskNumber <= tasks.size()) {
                tasks.erase(tasks.begin() + taskNumber - 1);
                cout << "Task deleted successfully.\n\n";
            } else {
                cout << "Invalid task number.\n\n";
            }
        }
    }

    // Menu for managing tasks
    void menu() {
        int choice;
        do {
            cout << "To-Do List Manager\n";
            cout << "1. View tasks\n";
            cout << "2. Add a task\n";
            cout << "3. Delete a task\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    displayTasks();
                    break;
                case 2:
                    addTask();
                    break;
                case 3:
                    deleteTask();
                    break;
                case 4:
                    cout << "Exiting the to-do list manager.\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n\n";
            }
        } while (choice != 4);
    }
};

int main() {
    ToDoList todo;
    todo.menu();

    cout << "Thank you for using the To-Do List Manager!\n";
    return 0;
}
