 #include <iostream>
using namespace std;

int main() {

  int student_score;
  int pass_grade;
  int merit_grade;
  int distinction_grade;

  cout << " Please enter the student score: ";
  cin >> student_score;

  pass_grade = (student_score >= 70 && student_score <= 85);
  merit_grade = (student_score >= 86 && student_score <= 96);
  distinction_grade = (student_score >= 96 && student_score <= 100);

if (student_score < 0 || student_score > 100){
  cout << "Invaid number.";
  }

  else if (student_score <= 69){
    cout << "You have failed.";
  }

  else if (pass_grade = true){
    cout  << "Congratulations you passed!";
  }
    
  else if (merit_grade = true){
    cout << "Merit achieved, good shit!";
  }

  else if (distinction_grade = true){
  cout << "Highest grade, Distinction achieved!";
    }
  return 0;
}





 












