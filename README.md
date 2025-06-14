# Movie-Ticket-Booking-Mangement
# 🎬 Movie Ticket Booking Management System (C++)

This project is a **Movie Ticket Booking System** built using **C++**, designed for booking and managing movie theatre seats. It allows users to view available seats, reserve them, and prevents double booking. This project simulates a basic theatre booking interface in the console.

---

## 🎯 Features

- View theatre seat layout (Rows A–E, Columns 1–10)
- Reserve seats by entering row and column
- Prevents booking of already reserved seats
- Real-time seat map update after each booking
- Simple and clean console interface

---

## 🧠 Concepts Used

- C++ Functions
- 2D Arrays for seat management
- Loops and Conditional Logic
- Character and Integer Mapping
- Console Input/Output (`cin`, `cout`, `iomanip`)

---

## 🖥️ Output Demo

```plaintext
   1  2  3  4  5  6  7  8  9 10
A  -  -  -  -  -  -  -  -  -  -
B  -  -  -  -  -  -  -  -  -  -
C  -  -  -  -  -  -  -  -  -  -
D  -  -  -  -  -  -  -  -  -  -
E  -  -  -  -  -  -  -  -  -  -

Enter the row (A-E): B
Enter the column (1-10): 5
✅ Seat reserved successfully

Do you want to reserve more seats (Y/N): Y
