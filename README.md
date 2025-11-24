
# Credit Card Validator (C++)  
A simple C++ console application that checks whether a credit card number is valid using **Luhn’s Algorithm**.

This program removes spaces from the input, processes each digit according to Luhn’s checksum rules, and tells the user whether the card number is valid.  
If the number is invalid, the user can choose to **retry** or **quit**.

---

## 🔍 Features
- Accepts credit card input with or without spaces  
- Automatically removes all spaces  
- Implements the full Luhn Algorithm  
- Separates logic into clean functions:
  - `getDigit()`
  - `sumOddDigits()`
  - `sumEvenDigits()`
- Detects invalid card numbers  
- Interactive retry/quit option  
- Beginner-friendly, clean C++ code

---

## 🧮 How Luhn’s Algorithm Works
1. Starting from the **rightmost digit**, double every second digit.  
2. If doubling produces a two-digit number, add those digits together (e.g., 12 → 1 + 2 = 3).  
3. Add all processed digits together.  
4. If the sum is divisibl

## 📘 Future Improvements

1. Detect card type (Visa, MasterCard, Amex, etc.)

2. Add input validation for non-digit characters

3. Create a GUI version

4. Add unit tests

