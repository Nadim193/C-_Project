#include<iostream>
#include<string>
using namespace std;

void name();
void age();
void department();
void doctor_name1();
void doctor_name2();
void doctor_name3();
void doctor_name4();
void doctor_time_morning();
void doctor_time_evening();
void doctor_time_ans();
void doctor_time_morning_ans();
void doctor_time_evening_ans();
void doc_name1();
void doc_name2();
void doc_name3();
void doc_name4();
void dept_problem1();
void dept_problem2();
void dept_problem3();
void dept_problem4();
void dept_problem1_ans();
void dept_problem2_ans();
void dept_problem3_ans();
void dept_problem4_ans();

string p_name;
int p_age;
int dept_number;
int dept_number_answer1;
int dept_number_answer2;
int dept_number_answer3;
int dept_number_answer4;
int n;
int time_mor;
int time_eve;

void greeting() {
    cout << "HELLO! HOW CAN I HELP YOU?" << endl << endl;
    cout << "1) DOCTOR APPOINTMENT" << endl << endl;
    cout << "2) DOCTOR CONSULTING FOR PRIMARY TREATMENT" << endl << endl;
    cout << "ANSWER (1 or 2) : ";
    cin >> n;
    cout << endl;
    if (n == 1) {
        name();
        age();
        cout << "WHICH DEPARTMENT? " << endl << endl;
        cout << "1) Dermatology " << endl;
        cout << "2) Medicine" << endl;
        cout << "3) Neurology" << endl;
        cout << "4) Allergic Diseases" << endl << endl;
        cout << "ANSWER 1/2/3/4 : ";
        cin >> dept_number;

        if (dept_number == 1) {
            cout << endl;
            cout << "WHICH DOCTOR DO YOU WNAT TO HAVE AN APPOINTMENT?" << endl << endl;
            doctor_name1();
            cout << endl;
            cout << "ANSWER (1/2/3/4): ";
            cin >> dept_number_answer1;
            if (dept_number_answer1 == 1) {
                doctor_time_evening_ans();
            }
            else if (dept_number_answer1 == 2) {
                doctor_time_morning_ans();
            }
            else if (dept_number_answer1 == 3) {
                doctor_time_evening_ans();
            }
            else if (dept_number_answer1 == 4) {
                doctor_time_morning_ans();

            }

        }
        else if (dept_number == 2) {
            cout << endl;
            cout << "WHICH DOCTOR DO YOU WNAT TO HAVE AN APPOINTMENT?" << endl << endl;
            doctor_name2();
            cout << endl;
            cout << "ANSWER (1/2/3/4): ";
            cin >> dept_number_answer2;
            if (dept_number_answer2 == 1) {
                doctor_time_morning_ans();

            }
            else if (dept_number_answer2 == 2) {
                doctor_time_evening_ans();

            }
            else if (dept_number_answer2 == 3) {
                doctor_time_morning_ans();

            }
            else if (dept_number_answer2 == 4) {
                doctor_time_evening_ans();

            }
        }
        else if (dept_number == 3) {
            cout << endl;
            cout << "WHICH DOCTOR DO YOU WNAT TO HAVE AN APPOINTMENT?" << endl << endl;
            doctor_name3();
            cout << endl;
            cout << "ANSWER (1/2/3/4): ";
            cin >> dept_number_answer3;
            if (dept_number_answer3 == 1) {
                doctor_time_evening_ans();
            }
            else if (dept_number_answer3 == 2) {
                doctor_time_morning_ans();

            }
            else if (dept_number_answer3 == 3) {
                doctor_time_evening_ans();
            }
            else if (dept_number_answer3 == 4) {

                doctor_time_morning_ans();
            }
        }
        else if (dept_number == 4) {
            cout << endl;
            cout << "WHICH DOCTOR DO YOU WNAT TO HAVE AN APPOINTMENT?" << endl << endl;
            doctor_name4();
            cout << endl;
            cout << "ANSWER (1/2/3/4): ";
            cin >> dept_number_answer4;
            if (dept_number_answer4 == 1) {
                doctor_time_evening_ans();
            }

            else if (dept_number_answer4 == 2) {
                doctor_time_morning_ans();
            }
            else if (dept_number_answer4 == 3) {
                doctor_time_evening_ans();
            }
            else if (dept_number_answer4 == 4) {
                doctor_time_morning_ans();


            }
        }
    }

    else {
        name();
        age();
        cout << "WHICH DEPARTMENT? " << endl << endl;
        cout << "1) Dermatology " << endl;
        cout << "2) Medicine" << endl;
        cout << "3) Neurology" << endl;
        cout << "4) Allergic Diseases" << endl << endl;
        cout << "ANSWER (1/2/3/4) : ";
        cin >> dept_number;
        cout << endl;

        if (dept_number == 1) {

            cout << "WHICH DOCTOR DO YOU WNAT TO TALK?" << endl << endl;
            doc_name1();
            cout << endl;
            cout << "ANSWER (1/2/3/4): ";
            cin >> dept_number_answer1;
            cout << endl;
            if (dept_number_answer1 == 1) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem1_ans();
            }
            else if (dept_number_answer1 == 2) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem1_ans();
            }
            else if (dept_number_answer1 == 3) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem1_ans();
            }
            else if (dept_number_answer1 == 4) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem1_ans();
            }
        }
        else if (dept_number == 2) {

            cout << "WHICH DOCTOR DO YOU WNAT TO TALK?" << endl << endl;
            doc_name2();
            cout << endl;
            cout << "ANSWER (1/2/3/4): ";
            cin >> dept_number_answer2;
            cout << endl;
            if (dept_number_answer2 == 1) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem2_ans();
            }
            else if (dept_number_answer2 == 2) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem2_ans();
            }
            else if (dept_number_answer2 == 3) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem2_ans();
            }
            else if (dept_number_answer2 == 4) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem2_ans();
            }
        }
        else if (dept_number == 3) {

            cout << "WHICH DOCTOR DO YOU WNAT TO TALK?" << endl << endl;
            doc_name3();
            cout << endl;
            cout << "ANSWER (1/2/3/4): ";
            cin >> dept_number_answer3;
            cout << endl;
            if (dept_number_answer3 == 1) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem3_ans();
            }
            else if (dept_number_answer3 == 2) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem3_ans();
            }
            else if (dept_number_answer3 == 3) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem3_ans();
            }
            else if (dept_number_answer3 == 4) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem3_ans();
            }
        }
        else if (dept_number == 4) {

            cout << "WHICH DOCTOR DO YOU WNAT TO TALK?" << endl << endl;
            doc_name4();
            cout << endl;
            cout << "ANSWER (1/2/3/4): ";
            cin >> dept_number_answer4;
            cout << endl;
            if (dept_number_answer4 == 1) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem4_ans();
            }
            else if (dept_number_answer4 == 2) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem4_ans();
            }
            else if (dept_number_answer4 == 3) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem4_ans();
            }
            else if (dept_number_answer4 == 4) {
                cout << "WHAT's YOUR PROBLEM? " << endl << endl;
                dept_problem4_ans();
            }
        }
    }
}


void name() {

    cout << "WHAT IS YOUR NAME? " << endl << endl << "ANSWER : ";
    cin>>p_name;
    cout << endl;

}
void age() {

    cout << "WHAT IS YOUR AGE? " << endl << endl << "ANSWER : ";
    cin >> p_age;
    cout << endl;
}



void doctor_name1() {
    cout << "1) Dr. MR.   A " << endl;
    cout << "2) Dr. MR.   B " << endl;
    cout << "3) Dr. MRS.  C " << endl;
    cout << "4) Dr. MRS.  D " << endl;

}
void doctor_name2() {
    cout << "1) Dr. MR.   E " << endl;
    cout << "2) Dr. MRS.  F " << endl;
    cout << "3) Dr. MRS.  G " << endl;
    cout << "4) Dr. MR.   H " << endl;
}

void doctor_name3() {
    cout << "1) Dr. MRS.  I " << endl;
    cout << "2) Dr. MR.   J " << endl;
    cout << "3) Dr. MRS.  K " << endl;
    cout << "4) Dr. MR.   L " << endl;
}

void doctor_name4() {
    cout << "1) Dr. MR.   M " << endl;
    cout << "2) Dr. MRS.  N " << endl;
    cout << "3) Dr. MR.   O " << endl;
    cout << "4) Dr. MRS.  P " << endl;

}

void doc_name1() {
    cout << "1) Dr. MRS.  Q " << endl;
    cout << "2) Dr. MR.   R " << endl;
    cout << "3) Dr. MR.   S " << endl;
    cout << "4) Dr. MRS.  T " << endl;

}

void doc_name2() {
    cout << "1) Dr. MRS.  U " << endl;
    cout << "2) Dr. MRS.  V " << endl;
    cout << "3) Dr. MR.   W " << endl;
    cout << "4) Dr. MR.   X " << endl;
}

void doc_name3() {
    cout << "1) Dr. MR.   Y " << endl;
    cout << "2) Dr. MR.   Z " << endl;
    cout << "3) Dr. MRS.  AA " << endl;
    cout << "4) Dr. MRS.  BB " << endl;
}

void doc_name4() {
    cout << "1) Dr. MRS.  CC " << endl;
    cout << "2) Dr. MR.   DD " << endl;
    cout << "3) Dr. MRS.  EE " << endl;
    cout << "4) Dr. MRS.  FF " << endl;
}

void doctor_time_morning() {
    cout << "1) Saturday     >>>   9:00 A.M. ---  11:00 A.M." << endl;
    cout << "2) Sunday       >>>   9:00 A.M. ---  11:00 A.M." << endl;
    cout << "3) Monday       >>>   9:00 A.M. ---  11:00 A.M." << endl;
    cout << "4) Tuesday      >>>   9:00 A.M. ---  11:00 A.M." << endl;
    cout << "5) Wednesday    >>>   9:00 A.M. ---  11:00 A.M." << endl;
    cout << "6) Thursday     >>>   9:00 A.M. ---  11:00 A.M." << endl;
}

void doctor_time_evening() {
    cout << "1) Saturday     >>>   6:00 P.M. ---  8:00 P.M." << endl;
    cout << "2) Sunday       >>>   6:00 P.M. ---  8:00 P.M." << endl;
    cout << "3) Monday       >>>   6:00 P.M. ---  8:00 P.M." << endl;
    cout << "4) Tuesday      >>>   6:00 P.M. ---  8:00 P.M." << endl;
    cout << "5) Wednesday    >>>   6:00 P.M. ---  8:00 P.M." << endl;
    cout << "6) Thursday     >>>   6:00 P.M. ---  8:00 P.M." << endl;

}

void doctor_time_morning_ans() {
    cout << endl;
    cout << "WHICH TIME IS PERPECT FOR YOU? " << endl << endl;
    doctor_time_morning();
    cout << endl;
    cout << "ANSWER (1/2/3/4/5/6) :";
    cin >> time_mor;
    cout << endl;
    if (time_mor == 1) {
        doctor_time_ans();
    }
    else if (time_mor == 2) {
        doctor_time_ans();
    }
    else if (time_mor == 3) {
        doctor_time_ans();
    }
    else if (time_mor == 4) {
        doctor_time_ans();
    }
    else if (time_mor == 5) {
        doctor_time_ans();
    }
    else if (time_mor == 6) {
        doctor_time_ans();
    }


}
void doctor_time_evening_ans() {
    cout << endl;
    cout << "WHICH TIME IS PERPECT FOR YOU? " << endl << endl;
    doctor_time_evening();
    cout << endl;
    cout << "ANSWER (1/2/3/4/5/6) : ";
    cin >> time_eve;
    cout << endl;
    if (time_eve == 1) {
        doctor_time_ans();
    }
    else if (time_eve == 2) {
        doctor_time_ans();
    }
    else if (time_eve == 3) {
        doctor_time_ans();
    }
    else if (time_eve == 4) {
        doctor_time_ans();
    }
    else if (time_eve == 5) {
        doctor_time_ans();
    }
    else if (time_eve == 6) {
        doctor_time_ans();
    }


}


void doctor_time_ans() {
    string doctor_time_ans;
    cout << "ARE YOU SURE!!!" << endl << endl << "YES OR NO : ";
    cin >> doctor_time_ans;
    cout << endl;
    if (doctor_time_ans == "yes") {
        cout << endl;
        cout << "THANK YOU " << endl << endl;
    }
    else if (doctor_time_ans == "no") {

        greeting();
    }

}

void dept_problem1() {
    cout << "1) Sunburn " << endl;
    cout << "2) Hives   " << endl;
    cout << "3) Acne    " << endl;
    cout << "4) Eczema  " << endl;

}

void dept_problem2() {
    cout << "1) Hypertension  " << endl;
    cout << "2) Back Pain     " << endl;
    cout << "3) pain in joint " << endl;

}

void dept_problem3() {
    cout << "1) Stroke     " << endl;
    cout << "2) Myopathy   " << endl;
    cout << "3) Neuropathy " << endl;

}

void dept_problem4() {
    cout << "1) Skin cencer " << endl;
    cout << "2) Eczema      " << endl;

}

void dept_problem1_ans() {
    int problem;
    string ans;
    dept_problem1();
    cout << endl;
    cout << "CHOOSE ANY OPTIONS : ";
    cin >> problem;
    cout << endl;
    if (problem == 1) {
        cout << "1) Take frequent cool baths or showers to help relieve the pain " << endl;
        cout << "2) Use a moisturizer that contains aloe vera or soy to help soothe sunburned skin " << endl;
        cout << "3) Consider taking aspirin or ibuprofen to help reduce any swelling, redness and discomfort " << endl;
        cout << "4) Drink extra water" << endl;
        cout << "5) if your skin blisters, allow the blisters to heal" << endl;
        cout << endl;

    }
    else if (problem == 2) {
        cout << "1) antihistamines to reduce itchiness " << endl;
        cout << "2) steroid tablets, such as prednisone " << endl;
        cout << "3) calamine lotion " << endl;
        cout << "4) diphenhydramine, such as Benadryl " << endl;
        cout << endl;
    }
    else if (problem == 3) {
        cout << "1) Cleansing and skin care " << endl;
        cout << "2) Reducing bacteria " << endl;
        cout << "3) Reduce excess oil" << endl;
        cout << endl;
    }
    else if (problem == 4) {
        cout << "1) Cultivate a care team of providers " << endl;
        cout << "2) Recognize stressful situations and events " << endl;
        cout << "3) Try not to scratch and rub the affected skin" << endl;
        cout << endl;
    }
    cout << "NEED MORE HELP? " << endl << endl << "YES OR NO : ";
    cin >> ans;
    if (ans == "yes") {
        cout << endl;
        greeting();
    }
    else if (ans == "no") {
        cout << endl;
        cout << "THANK YOU ";
        cout << endl;
    }


}

void dept_problem2_ans() {
    int problem;
    string ans;
    dept_problem2();
    cout << endl;
    cout << "CHOOSE ANY OPTIONS : ";
    cin >> problem;
    cout << endl;
    if (problem == 1) {
        cout << "1) Lose extra pounds and watch your waistline " << endl;
        cout << "2) Exercise regularly " << endl;
        cout << "3) Eat a healthy diet " << endl;
        cout << "4) Reduce sodium in your diet " << endl;
        cout << "5) Cut back on caffeine " << endl;
        cout << endl;

    }
    else if (problem == 2) {
        cout << "1) Sleep Better " << endl;
        cout << "2) Good Posture " << endl;
        cout << "3) Antidepressant Medications " << endl;
        cout << "4) Physical Therapy " << endl;
        cout << endl;
    }
    else if (problem == 3) {
        cout << "1) Physical activity " << endl;
        cout << "2) Strengthening exercises " << endl;
        cout << "3) Weight loss and diet " << endl;
        cout << endl;
    }
    cout << "NEED MORE HELP? " << endl << endl << "YES OR NO : ";
    cin >> ans;
    if (ans == "yes") {
        cout << endl;
        greeting();
    }
    else if (ans == "no") {
        cout << endl;
        cout << "THANK YOU ";
        cout << endl;
    }
}

void dept_problem3_ans() {
    int problem;
    string ans;
    dept_problem3();
    cout << endl;
    cout << "CHOOSE ANY OPTIONS : ";
    cin >> problem;
    cout << endl;
    if (problem == 1) {
        cout << "1) Get the patient to a hospital " << endl;

    }
    else if (problem == 2) {
        cout << "1) Genetic counseling " << endl;
        cout << "2) Nutritional and respiratory support " << endl;
        cout << "3) Orthopedic treatments " << endl;
        cout << "4) Physical, occupational or speech therapy " << endl;
        cout << endl;
    }
    else if (problem == 3) {
        cout << "1) Pain relievers " << endl;
        cout << "2) Pain relievers " << endl;
        cout << "3) Topical treatments " << endl;
        cout << endl;
    }
    cout << "NEED MORE HELP? " << endl << endl << "YES OR NO : ";
    cin >> ans;
    if (ans == "yes") {
        cout << endl;
        greeting();
    }
    else if (ans == "no") {
        cout << endl;
        cout << "THANK YOU ";
        cout << endl;
    }



}

void dept_problem4_ans() {
    int problem;
    string ans;
    dept_problem4();
    cout << endl;
    cout << "CHOOSE ANY OPTIONS : ";
    cin >> problem;
    cout << endl;
    if (problem == 1) {
        cout << "1) Curettage and Electrodesiccation or Cryotherapy " << endl;
        cout << "2) Radiation therapy " << endl;
        cout << "3) Chemotherapy " << endl;
        cout << endl;
    }
    else if (problem == 2) {
        cout << "1) Cultivate a care team of providers " << endl;
        cout << "2) Recognize stressful situations and events " << endl;
        cout << "3) Try not to scratch and rub the affected skin" << endl;
        cout << endl;
    }
    cout << "NEED MORE HELP? " << endl << endl << "YES OR NO : ";
    cin >> ans;
    if (ans == "yes") {
        cout << endl;
        greeting();
    }
    else if (ans == "no") {
        cout << endl;
        cout << "THANK YOU ";
        cout << endl;
    }
}

int main() {
    greeting();

    if (n == 1) {
        cout << "\t\t\t\t\t\t\tINFORMATION" << endl << endl;
        cout << "Patient Name : " << p_name << endl << endl;
        cout << "Patient Age : " << p_age << endl << endl;
        switch (dept_number) {
        case 1:
            cout << "DEPT : Dermatology " << endl << endl;
            break;
        case 2:
            cout << "DEPT : Medicine " << endl << endl;
            break;
        case 3:
            cout << "DEPT : Neurology " << endl << endl;
            break;
        case 4:
            cout << "DEPT : Allergic Diseases " << endl << endl;
            break;
        }
        switch (dept_number_answer1) {
        case 1:
            cout << "DOCTOR NAME : Dr. MR.   A " << endl << endl;
            break;
        case 2:
            cout << "DOCTOR NAME : Dr. MR.   B " << endl << endl;
            break;
        case 3:
            cout << "DOCTOR NAME : Dr. MRS.  C " << endl << endl;
            break;
        case 4:
            cout << "DOCTOR NAME : Dr. MRS.  D " << endl << endl;
            break;
        }
        switch (dept_number_answer2) {
        case 1:
            cout << "DOCTOR NAME : Dr. MR.   E " << endl << endl;
            break;
        case 2:
            cout << "DOCTOR NAME :  Dr. MRS.  F " << endl << endl;
            break;
        case 3:
            cout << "DOCTOR NAME :  Dr. MRS.  G " << endl << endl;
            break;
        case 4:
            cout << "DOCTOR NAME :  Dr. MR.   H " << endl << endl;
            break;
        }
        switch (dept_number_answer3) {
        case 1:
            cout << "DOCTOR NAME : Dr. MRS.  I " << endl << endl;
            break;
        case 2:
            cout << "DOCTOR NAME : Dr. MR.   J " << endl << endl;
            break;
        case 3:
            cout << "DOCTOR NAME : Dr. MRS.  K " << endl << endl;
            break;
        case 4:
            cout << "DOCTOR NAME : Dr. MR.   L " << endl << endl;
            break;
        }
        switch (dept_number_answer4) {
        case 1:
            cout << "DOCTOR NAME : Dr. MR.   M " << endl << endl;
            break;
        case 2:
            cout << "DOCTOR NAME : Dr. MRS.  N " << endl << endl;
            break;
        case 3:
            cout << "DOCTOR NAME : Dr. MR.   O " << endl << endl;
            break;
        case 4:
            cout << "DOCTOR NAME : Dr. MRS.  P " << endl << endl;
            break;
        }
        switch (time_mor) {
        case 1:
            cout << "MORNING TIME : Saturday     >>>   9:00 A.M. ---  11:00 A.M." << endl << endl;
            break;
        case 2:
            cout << "MORNING TIME : Sunday       >>>   9:00 A.M. ---  11:00 A.M." << endl << endl;
            break;
        case 3:
            cout << "MORNING TIME : Monday       >>>   9:00 A.M. ---  11:00 A.M." << endl << endl;
            break;
        case 4:
            cout << "MORNING TIME : Tuesday      >>>   9:00 A.M. ---  11:00 A.M." << endl << endl;
            break;
        case 5:
            cout << "MORNING TIME : Wednesday    >>>   9:00 A.M. ---  11:00 A.M." << endl << endl;
            break;
        case 6:
            cout << "MORNING TIME : Thursday     >>>   9:00 A.M. ---  11:00 A.M." << endl << endl;
            break;
        }
        switch (time_eve) {
        case 1:
            cout << "EVENING TIME : Saturday     >>>   6:00 P.M. ---  8:00 P.M." << endl << endl;
            break;
        case 2:
            cout << "EVENING TIME : Sunday       >>>   6:00 P.M. ---  8:00 P.M." << endl << endl;
            break;
        case 3:
            cout << "EVENING TIME : Monday       >>>   6:00 P.M. ---  8:00 P.M." << endl << endl;
            break;
        case 4:
            cout << "EVENING TIME : Tuesday      >>>   6:00 P.M. ---  8:00 P.M." << endl << endl;
            break;
        case 5:
            cout << "EVENING TIME : Wednesday    >>>   6:00 P.M. ---  8:00 P.M." << endl << endl;
            break;
        case 6:
            cout << "EVENING TIME : Thursday     >>>   6:00 P.M. ---  8:00 P.M." << endl << endl;
            break;
        }
        cout<<"\n\n\t\t\t\t\t\t\tEND\n\n";
    }
    return 0;
}
