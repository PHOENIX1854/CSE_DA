#include <iostream>

using namespace std;

class Expenses {
private:
    float emi;
    float education;
public:
    Expenses() {
        emi = 0;
        education = 0;
    }
    Expenses(float e, float ed) {
        emi = e;
        education = ed;
    }
    friend Expenses operator+(Expenses const &e1, Expenses const &e2) {
        float total_emi = e1.emi + e2.emi;
        float total_education = e1.education + e2.education;
        return Expenses(total_emi, total_education);
    }
    void set_emi(float e) {
        emi = e;
    }
    void set_education(float ed) {
        education = ed;
    }
    float get_total_emi() {
        return emi;
    }
    float get_total_education() {
        return education;
    }
};

int main() {
    Expenses may_expenses(10000, 5000);
    Expenses june_expenses(8000, 6000);

    Expenses total_expenses = may_expenses + june_expenses;

    cout << "Total EMI expenses for May and June: " << total_expenses.get_total_emi() << endl;
    cout << "Total education expenses for May and June: " << total_expenses.get_total_education() << endl;

    return 0;
}