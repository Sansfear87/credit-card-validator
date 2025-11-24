#include <iostream>
#include <algorithm>
/*This checker follows luhn's algorithm to check credit card's validity.*/

using namespace std;
int getDigit(const int number);
int sumOddDigits(const string cardNumber, int size);
int sumEvenDigits(const string cardNumber, int size);

int main(){
    string cardNumber;
    int result = 0;

    cout << "------Welcome to credit card checker------" << endl;

    cout << "\nEnter your Card number: ";
    getline(cin, cardNumber);
    cardNumber.erase(remove(cardNumber.begin(), cardNumber.end(), ' '),
                 cardNumber.end());
    int size = cardNumber.size();
    /* TO ERASE THE SPACE BETWEEN CARD NUMBERS */

    result = sumOddDigits(cardNumber, size) + sumEvenDigits(cardNumber, size);

    if(result % 10 == 0){
        cout << "The given card number is valid!!\n\n\n";
    }
    else{
          cout << "The given card number is NOT valid.\n";
    cout << "Press R to retry or Q to quit: ";

    char choice;
    cin >> choice;
    cin.ignore();  // so getline works again after this

    if(choice == 'R' || choice == 'r'){
        main();    // Restart program
    }
    else if(choice == 'Q' || choice == 'q'){
        cout << "Exiting program...\n\n\n\n\n";
        return 0;
    }
    else{
        cout << "Invalid input. Exiting...\n";
        return 0;
    }

    }



    cout << cardNumber.length() << endl;
}
int getDigit(const int number){

    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const string cardNumber, int size){
    int sum = 0;

    for(int i = size - 1; i>=0; i-=2){

        sum += getDigit(cardNumber[i] - '0');

    }

    return sum;
}
int sumEvenDigits(const string cardNumber, int size){
    int sum = 0;

    for(int i = size - 2; i>=0; i-=2){

        sum += getDigit((cardNumber[i] - '0') * 2);

    }

    return sum;
}