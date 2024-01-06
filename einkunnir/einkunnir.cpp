#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <vector>

using namespace std;

class Student {
 public:
  Student(string name, vector<char> answers) {
    this->name = name;
    this->answers = answers;
    this->grade = 0.0;
  }

  string getName() { return this->name; }
  float getGrade() { return this->grade; }

  void calculateGrade(vector<char> correctAnswers) {
    this->grade = 0.0;
    for (int i = 0; i < correctAnswers.size(); i++) {
      if (this->answers[i] == correctAnswers[i]) {
        this->grade++;
      }
    }

    this->grade = this->grade * 10 / correctAnswers.size();

    // only give answers rounded to a half or a whole

    float temp = (int)this->grade;  // strip the decimal part

    if (this->grade - temp >= 0.75) {
      this->grade = temp + 1;
    } else if (this->grade - temp >= 0.25) {
      this->grade = temp + 0.5;
    } else {
      this->grade = temp;
    }
  }

 private:
  string name;
  float grade;
  vector<char> answers;
};

int main() {
  int s, n;
  string line;
  cin >> s >> n;
  cin.ignore(numeric_limits<streamsize>::max(),
             '\n');  // Ignore the leftover newline character

  string line2;
  getline(cin, line2);
  istringstream iss(line2);
  vector<char> correctAnswers;
  char temp;

  while (iss >> temp) {
    correctAnswers.push_back(temp);
    // Skip the space after reading a character
    if (iss.peek() == ' ') {
      iss.ignore();
    }
  }

  vector<Student> students;

  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;
    cin.ignore(numeric_limits<streamsize>::max(),
               '\n');  // Ignore the leftover newline character

    getline(cin, line);
    istringstream iss(line);
    vector<char> answers;
    char temp;

    while (iss >> temp) {
      answers.push_back(temp);
      // Skip the space after reading a character
      if (iss.peek() == ' ') {
        iss.ignore();
      }
    }

    Student student(name, answers);
    students.push_back(student);
  }

  //   loop through all students
  for (int i = 0; i < students.size(); i++) {
    students[i].calculateGrade(correctAnswers);
    cout << students[i].getName() << ": " << fixed << setprecision(1)
         << students[i].getGrade() << endl;
  }

  return 0;
}