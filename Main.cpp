 #include <iostream>

 using namespace std;


int main(){

int student_score; 
int passing_score = 100;
 
 cout << " Enter Student Score: ";
 cin >> student_score;


bool result1 = (passing_score < 100);
cout << "The result is: " << result1 << endl;


int marks_needed = passing_score - student_score;
cout <<" Marks needed to pass: " << marks_needed;

    return 0; 




}




 












