#include <iostream>
#include <vector>
#include <string>
using namespace std;

//declare function prototype
void structF();
void vecF();
void arraySizeof();
void arrayForEach();
void array2D();
void multiplyApp();
void pointerF();
void loginApp();

//Generic function
template<class T>
T showData(T value){
  //cout << showData<data type>(data) << endl; || syntax for use generic data
  return value;
}

int main() {

  cout << showData<int>(10) << endl;
  cout << showData<float>(10.12) << endl;
  cout << showData<string>("word") << endl;

}

// Functions i declare for testing
void pointerF(){
  int number = 10;
  int *p1 = &number; // p1[pointer var] point to -> number[address]
  cout << "\n-----Data-----" << endl;
  cout << "value = " << number << endl;
  cout << "address = " << &number << endl; // print number[var] address
  cout << "pointer address = " << p1 << endl; // print address that p1 pointing
  cout << "value in pointer = " << *p1 << endl << "\n"; // print value that p1 pointing

  *p1 = 20; // change value in that pointer

  cout << "\n-----After Change Value-----" << endl;
  cout << "value = " << number << endl;
  cout << "address = " << &number << endl;
  cout << "pointer address = " << p1 << endl;
  cout << "value in pointer = " << *p1 << endl << "\n";

  *p1 += 5; // change value in that pointer

  cout << "\n-----After +5 to Value-----" << endl;
  cout << "value = " << number << endl;
  cout << "address = " << &number << endl;
  cout << "pointer address = " << p1 << endl;
  cout << "value in pointer = " << *p1 << endl << "\n";
}

void vecF() {
    // Create a vector of integers
    vector<int> vec;

    // Add elements to the vector || การต่อท้าย vector 
    vec.push_back(10); // [10]
    vec.push_back(20); // [10, 20]
    vec.push_back(30); // [10, 20, 30]

    // Print element Before pop 
    cout << "\nBefore pop: ";
    for (int i = 0; i < vec.size(); i++) {
      cout << vec[i] << " ";
    }
    cout << endl;

    // Remove the last element
    vec.pop_back();

    // Print elements after pop
    cout << "After pop: ";
    for (int i = 0; i < vec.size(); i++) {
      cout << vec[i] << " ";
    }
    cout << endl;


    // Access an element by index
    cout << "Element at index 1: " << vec[1] << endl;

    // Get the size of the vector
    cout << "Size of vector: " << vec.size() << endl << endl;
}

void structF(){
  // declare struct and composition
  struct Student {
    string name;
    int age;
    float gpa;
  };
  
  // 1 person
  Student student1;
  student1.name = "John";
  student1.age = 20;
  student1.gpa = 3.5;

  // many person
  Student students[3];
  students[0] = {"John", 20, 3.5};
  students[1] = {"Jane", 18, 2.1};
  students[2] = {"Palm", 25, 3.5};
  cout << "\n";
  for(int i = 0; i < 3; i++) {
    cout << "Student#" << i + 1 << "\n"
         << "Name: " << students[i].name << "\n"
         << "Age: " << students[i].age << "\n"
         << "GPA: " << students[i].gpa << "\n"
         << endl;
  }

}

void arraySizeof(){
  int score[] = {100, 50, 60, 80 , 120, 23, 534 , 1313, 232, 545};
  int members = sizeof(score) / sizeof(score[0]); // sizeof(array) หาร sizeof(index) = จำนวน members

  cout << "\nscore = " << " [";
  for ( int i = 0; i < members; i++){ // ถ้า i น้อยกว่าจำนวน members ให้ print array จนครบ members
    cout << " " << score[i] << " ";
  }
  cout << "]";

  cout << "\nInteger size = " << sizeof(int) << " bytes"<< endl;
  cout << "score size = " << sizeof(score) << " bytes"<< endl;
  cout << "score array members = " << sizeof(score)/4 << " members\n" << endl;
}

void arrayForEach(){
  int income[] = {10000, 15000, 20000, 25000, 30000};
  int total = 0;

  cout << "\nIncomes = " << " [";
  for ( int allIncome : income){ // ถ้า i น้อยกว่าจำนวน members ให้ print array จนครบ members
    cout << " " << allIncome << " ";
    
    total += allIncome;
  }
  cout << "]";

  cout << "\nTotal income = " << total;
}

void array2D(){
   string numbers[6][2] = { // syntax: dataType var [row][column]
    {"1","6"},
    {"2","7"},
    {"3","8"},
    {"4","9"},
    {"5","10"}
  };

   //access all arrays
  for (int row = 0; row < 5; row++) {
      cout << "Row: " << row << endl;
    for(int col = 0; col < 2; col++){
      cout << " Col " << col << " : " << numbers[row][col] << endl;
    }
  }
 
}

void multiplyApp(){
   // multiplication table(nested loop)
  for (int i = 1; i <= 12; i++){
    cout << "-------------" << endl;
    cout << "Table = " << i << endl;
    cout << "-------------" << endl;
    for (int j = 1; j <= 12; j++){
      cout << " "<< i << " x " << j <<" = " << i*j << endl;
    }
  }
}

void loginApp(){
  string username = "";
  cout << "string: " << empty(username) << endl;
  cout << "Enter Username: ";
  cin >> username;
  string admin = "admin";
  cout << "-------------------" << endl;

  if (username == admin){
    cout << "string: " << empty(username)<< " | " << username << endl;
    cout << "login complete";
  }
  else{
    cout << "string: " << empty(username)<< " | " << username << endl;
    cout << "login failed";
  }
}