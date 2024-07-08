#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string name;
    bool completed;
};

void displayTasks(const vector<Task>& tasks) {
    cout << "To-Do List:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << (i + 1) << ". " << tasks[i].name << " [";
        if (tasks[i].completed) {
            cout << "Completed";
        } else {
            cout << "Not Completed";
        }
        cout << "]" << endl;
    }
}

void markTaskAsCompleted(vector<Task>& tasks, int taskNumber) {
    if (taskNumber > 0 && taskNumber <= tasks.size()) {
        tasks[taskNumber - 1].completed = true;
        cout << "Task " << taskNumber << " marked as completed." << endl;
    } else {
        cout << "Invalid task number." << endl;
    }
}

int main() {
    vector<Task> tasks = {
        {"Task 1: worship the lord", false},
        {"Task 2: study javascript", false},
        {"Task 3: practice  mathmatics", false},
        {"Task 4: use monkey type",false},
        {"Task 5: study lecture",false}

    displayTasks(tasks);

    int taskNumber;
    cout << "Enter the number of the task you completed: ";
    cin >> taskNumber;

    markTaskAsCompleted(tasks, taskNumber);
    displayTasks(tasks);

    return 0;
}
