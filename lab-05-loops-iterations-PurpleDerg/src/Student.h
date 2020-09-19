#include <string>
#include <vector>
#include <iostream>

using namespace std;

enum Gender
{
    MALE,
    FEMALE
};


class Student
{
public:


private:
    string id;
    string name;
    Gender gender;
    float gpa;

public:
    Student(const string &id, const string &name, Gender gender, double gpa)
    {
        this->id = id;
        this->name = name;
        this->gender = gender;
        this->gpa = gpa;
    }

    Student()
    {
    }

    static string toString(Student& s)
    {
        // TO DO: add MALE or FEMALE to string
        string genderLetter = (s.gender  == MALE ? "M" : "F");
        return string(s.id + "," + s.name + "," + genderLetter + "," + to_string(s.gpa));
    }

    static string toString(const vector<Student>& v)
    {
        string result = "{";
        for (Student s : v) {
            result += "{" + toString(s) + "}";
        }
        result += "}";
        return result;
    }

    static string toString(const vector<string>& v)
    {
        string result = "{";
        for (string s : v) {
            result += "{" + s + "}";
        }
        result += "}";
        return result;
    }

    // Getters
    string getID()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    Gender getGender()
    {
        return gender;
    }

    double getGPA()
    {
        return gpa;
    }

    bool equals(Student s2)
    {
        return (this->getID().compare(s2.getID()) == 0);
    }

    static void addAllStudents(vector<Student> &v, const vector<Student> &additionalStudents)
    {

        for (Student s : additionalStudents)
        {
            v.push_back(s);
        }
    }

    
    /*
     * EXERCISE: #2A
     *
     * IMPLEMENT USING AN ENHANCED FOR LOOP (For-each).
     *
     * Returns the value of the Student's GPA
     * that has the minimum GPA of the list
     *
     */
    static double minStudentGPA(vector<Student>& v);

    /*
	 * EXERCISE: #2B
	 *
	 * IMPLEMENT USING AN ENHANCED FOR LOOP (For-each).
	 *
	 * Returns the maximum element of the student record system, according
	 * to the natural ordering of its GPA.
	 *
	 */
    static double maxStudentGPA(vector<Student>& v);

    /*
	 * EXERCISE: #2C
	 *
	 * IMPLEMENT WITH ANY LOOP.
	 *
	 * Returns the mean of the GPA's in student record system
	 *
	 */
    static double getMean(vector<Student>& v);

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
    static vector<string> startsWith(vector<Student> &students, const string &prefix);

    /*
     * EXERCISE: #4
     *
     * IMPLEMENT WITH ANY LOOP
     *
     * Removes the first occurrence of the specified Student,
     * if it is present. If it is not present, it is unchanged.
     * HINT: Verify the methods erase() and begin() of the vector
     */
    static void remove(vector<Student> &v, Student s);


    /*
	 * EXERCISE: #5
	 *
	 * IMPLEMENT USING A WHILE LOOP.
	 *
	 * Returns true if vector v1 contains all of the Student's in vector v2.
	 * HINT: use nested loops
     *
	 */
    static bool containsAll(vector<Student> &v1, vector<Student> &v2);

    /*
      * BONUS
      *
      * IMPLEMENT WITH NESTED LOOPS.
      *
      * Returns true if two instances of Student have the same name, false otherwise.
      * HINT: Use the compare method of string.
      */
    static bool repeatedStudentNames(vector<Student> v);
};