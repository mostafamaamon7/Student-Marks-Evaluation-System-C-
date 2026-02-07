//class Student *
//string name, int mark *
//pararmetrized constructor to take the values from the programmer *
//default constructor to take inputs from user *
//friend function called sum with 3 objects تطلع مجموع الدرجات *
//function called checkMarks *
//هتطلع اكبر درجة فى الطلاب وتتطلع اسم الطالب صاحب الدرجة الاعلى *
//3 objects user Ahmed, ali, nour *


#include <iostream>
using namespace std;

class Student {

    string name;
    int mark;

public:

    Student() {

        cout << "Enter your name please : " << endl;
        cin >> name;
        cout << "------------------------------------------" << endl;

        cout << "Entre Your Mark : " << endl;
        cin >> mark;
        cout << "------------------------------------------" << endl;

    }

    Student(string n, int m) {

        name = n;
        mark = m;
    };

    friend void sum(Student o1, Student o2, Student o3);

    void checkMarks(Student o1, Student o2, Student o3) {
        if (o1.mark > o2.mark && o1.mark > o3.mark) {

            cout << "congratulation " << o1.name << " you are the first and your mark is " << o1.mark << endl;
            cout << "------------------------------------------" << endl;


        }

        else if (o2.mark > o1.mark && o2.mark > o3.mark) {

            cout <<  "congratulation "<< o2.name << " you are the first and your mark is " << o2.mark << endl;
            cout << "------------------------------------------" << endl;



        }

        else if(o3.mark > o1.mark && o3.mark > o2.mark)
        {
            cout << "congratulation " << o3.name << " you are the first and your mark is " << o3.mark << endl;
            cout << "------------------------------------------" << endl;

        }

        else
        {
            cout << "All the marks are equal " << endl;
            cout << "------------------------------------------" << endl;

        }


    };




};


void sum(Student o1, Student o2, Student o3) {

    cout << "The Total of Marks is : " << o1.mark + o2.mark + o3.mark << endl;
    cout << "------------------------------------------" << endl;



}



int main()
{
    Student o1;
    Student o2("Ali", 90);
    Student o3("Nour", 90);

    sum(o1, o2, o3);

    o1.checkMarks(o1, o2, o3);




    return 0;
}


