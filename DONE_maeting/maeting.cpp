#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_vector(vector<string> v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

struct Student {
  string name;
  int classes_attended;
};

int main() {
  int n_students, n_classes;

  // Process student list
  cin >> n_students;
  vector<Student> students;

  for (int i = 0; i < n_students; i++) {
    string name;
    cin >> name;

    // create student
    Student student;
    student.name = name;
    student.classes_attended = 0;

    students.push_back(student);
  }

  // take attendance for each class
  cin >> n_classes;
  vector<string> classes;

  for (int i = 0; i < n_classes; i++) {
    int n_students_present;
    cin >> n_students_present;

    for (int j = 0; j < n_students_present; j++) {
      string name;
      cin >> name;

      // find student and increment classes attended
      for (int k = 0; k < students.size(); k++) {
        if (students[k].name == name) {
          students[k].classes_attended++;
          break;
        }
      }
    }
  }

  // sort students by most classes attended
  for (int i = 0; i < students.size(); i++) {
    for (int j = i + 1; j < students.size(); j++) {
      if (students[i].classes_attended < students[j].classes_attended) {
        Student temp = students[i];
        students[i] = students[j];
        students[j] = temp;
      }
    }
  }

  for (int i = 0; i < students.size(); i++) {
    cout << students[i].classes_attended << " " << students[i].name << endl;
  }

  return 0;
}
