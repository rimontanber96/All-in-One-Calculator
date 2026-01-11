#include<bits/stdc++.h>
using namespace std;

void scientificCalculator() {
    int choice;
    double a, b;

    cout << "\n--- Scientific Calculator ---\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "5. Square Root\n6. Power\n7. Sin\n8. Cos\n9. Tan\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cin >> a >> b;
            cout << "Result = " << a + b;
            break;
        case 2:
            cin >> a >> b;
            cout << "Result = " << a - b;
            break;
        case 3:
            cin >> a >> b;
            cout << "Result = " << a * b;
            break;
        case 4:
            cin >> a >> b;
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Error: Division by zero";
            break;
        case 5:
            cin >> a;
            cout << "Result = " << sqrt(a);
            break;
        case 6:
            cin >> a >> b;
            cout << "Result = " << pow(a, b);
            break;
        case 7:
            cin >> a;
            cout << "Result = " << sin(a);
            break;
        case 8:
            cin >> a;
            cout << "Result = " << cos(a);
            break;
        case 9:
            cin >> a;
            cout << "Result = " << tan(a);
            break;
        default:
            cout << "Invalid choice!";
    }
}

/* CGPA Calculator */
void cgpaCalculator() {
    int n, i = 1;
    double grade, credit, total = 0, creditSum = 0;

    cout << "\n--- CGPA Calculator ---\n";
    cout << "Enter number of subjects: ";
    cin >> n;

    while (i <= n) {
        cout << "Enter grade point for subject " << i << ": ";
        cin >> grade;
        cout << "Enter credit for subject " << i << ": ";
        cin >> credit;

        total += grade * credit;
        creditSum += credit;
        i++;
    }

    cout << "CGPA = " << total / creditSum << endl;
}

/* Discount Calculator */
void discountCalculator() {
    double price, discount;

    cout << "\n--- Discount Calculator ---\n";
    cout << "Enter original price: ";
    cin >> price;
    cout << "Enter discount percentage: ";
    cin >> discount;

    double finalPrice = price - (price * discount / 100);
    cout << "Final Price after discount = " << finalPrice << endl;
}

int main() {
    int choice = 0;

    while (choice != 4) {
        cout << "\n====== ALL-IN-ONE CALCULATOR ======\n";
        cout << "1. Scientific Calculator\n";
        cout << "2. CGPA Calculator\n";
        cout << "3. Discount Calculator\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
            scientificCalculator();
        else if (choice == 2)
            cgpaCalculator();
        else if (choice == 3)
            discountCalculator();
        else if (choice == 4)
            cout << "Thank you!\n";
        else
            cout << "Invalid choice!\n";
    }

    return 0;
}
