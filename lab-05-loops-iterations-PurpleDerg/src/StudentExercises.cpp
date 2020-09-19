#include "Student.h"

using namespace std;

int main() {

    cout << "EXITO!!!";
    vector<Student> testVector1;

    Student s1("1", "Jose Miguel", MALE, 3.0);
    Student s2("2", "Jose Juan", MALE, 2.8);
    Student s3("3", "Ana", FEMALE, 3.5);
    Student s4("4", "Carmen", FEMALE, 4.0);
    Student s5("5", "Jose Alberto", MALE, 3.1);

    testVector1.push_back(s1);
    testVector1.push_back(s2);
    testVector1.push_back(s3);
    testVector1.push_back(s4);
    testVector1.push_back(s5);

    cout << "The mean of GPAs is: " << Student::getMean(testVector1);
}


/*
 * EXERCISE: #2A
 *
 * IMPLEMENT USING AN ENHANCED FOR LOOP (For-each).
 *
 * Returns the value of the Student's GPA
 * that has the minimum GPA on the vector
 *
 */
double Student::minStudentGPA(vector<Student>& v)
{
    double minGPA = 4.0;
    for (Student s : v){
        double studentGPA = s.getGPA();
        if (studentGPA < minGPA) {
            minGPA = studentGPA;
        } 
    }
    //YOUR CODE HERE

    return minGPA; //dummy return
}

/*
 * EXERCISE: #2B
 *
 * IMPLEMENT USING AN ENHANCED FOR LOOP (For-each).
 *
 * Returns the value of the Student's GPA
 * that has the maximum GPA on the vector
 *
 */
double Student::maxStudentGPA(vector<Student>& v)
{
    //YOUR CODE HERE
    double maxGPA = 1.0;
    for (Student s : v){
        double studentGPA = s.getGPA();
        if (studentGPA > maxGPA) {
            maxGPA = studentGPA;
        } 
    }
    //YOUR CODE HERE

    return maxGPA; //dummy return
}


/*
 * EXERCISE: #2C
 *
 * IMPLEMENT WITH ANY LOOP.
 *
 * Returns the mean of the GPA's in the list
 * i.e. SUM OF ALL GPAs / QUANTITY OF GPAs ON THE VECTOR
 *
 */
double Student::getMean(vector<Student>& v)
{
    //YOUR CODE HERE
    int i = 0;
    double studentSUM = 0.0;
    for (Student s : v){
        i++;
        double studentGPA = s.getGPA();
        studentSUM = studentGPA + studentSUM; 
    }
    double studentMEAN = studentSUM/i;
    //YOUR CODE HERE

    return studentMEAN; //dummy return
}

/*
 * EXERCISE: #3
 *
 * IMPLEMENT USING A REGULAR FOR LOOP.
 *
 * Returns a vector of strings where each element is a string
 * representation of the record ID of each student whose id
 * starts with the specified prefix.
 *
 */
vector<string> Student::startsWith(vector<Student> &students, const string &prefix)
{
    vector<string> result;
    int limit = students.size();
    for (int i=0; i<limit; i++){
        string studentID = students[i].getID();
        if (studentID == prefix){
            result.push_back(studentID);
        }
    }
    //YOUR CODE HERE

    return result;
}

/*
 * EXERCISE: #4
 *
 * IMPLEMENT WITH ANY LOOP
 *
 * Removes the first occurrence of the specified Student,
 * if it is present. If it is not present, it is unchanged.
 * HINT: Verify the methods erase() and begin() of the vector
 *
 */
void Student::remove(vector<Student> &v, Student s)
{
    int j = 0;
    for (Student i : v){
        j++;
        string a = Student::toString(i);
        string b = Student::toString(s);
        if(a == b){
            v.erase(v.begin()+j-1);
        }
    }
    //YOUR CODE HERE
}

/*
 * EXERCISE: #5
 *
 * IMPLEMENT USING A WHILE LOOP.
 *
 * Returns true if vector v1 contains all of the Student's in vector v2.
 * HINT: use nested loops
 *
 */
bool Student::containsAll(vector<Student> &v1, vector<Student> &v2)
{
    int i;
    int limit;
    vector <string> sv1;
    vector <string> sv2;
    bool boolval;
    string sboolval;
    if (v1.size() > v2.size()){
        limit = v1.size();
    }
    else{
        limit = v2.size();
    }
    while(i<limit){
        i++;
        sv1.push_back(Student::toString(v1[i]));
        sv2.push_back(Student::toString(v2[i]));

        if (sv1 == sv2){
            boolval = true;
            if (boolval = true) {
                sboolval = "True"
            }
            else {
                sboolval = "False"
            }
        }
        //YOUR CODE HERE

    return boolval; //dummy return
}

/*
 * BONUS
 *
 * IMPLEMENT WITH NESTED LOOPS.
 *
 * Returns true if two instances of Student have the same name, false otherwise.
 * HINT: Use the compare method of string.
 */
bool Student::repeatedStudentNames(vector<Student> v)
{
    //YOUR CODE HERE
    return NULL; //dummy return
}