#include <iostream>
#include <algorithm>

using namespace std;

// Declare a 3x3 array
int array[3][3] = {{56, 27, 9}, {25, 32, 18}, {88, 11, 23}};

// Declare a function to display the elements of the array
void display(int array[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }
}

// Declare a function to sort the array row-wise
void sortRow(int array[3][3]) {
  for (int i = 0; i < 3; i++) {
    sort(array[i], array[i] + 3);
  }
}

// Declare a function to sort the array column-wise
void sortCol(int array[3][3]) {
  for (int j = 0; j < 3; j++) {
    // Declare a temporary array to store the elements of the column
    int temp[3];
    for (int i = 0; i < 3; i++) {
      temp[i] = array[i][j];
    }
    // Sort the temporary array
    sort(temp, temp + 3);
    // Copy the sorted elements back to the original array
    for (int i = 0; i < 3; i++) {
      array[i][j] = temp[i];
    }
  }
}

// Declare a function to calculate the sum of the diagonal elements of the array
int diagonalSum(int array[3][3]) {
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    sum += array[i][i];
  }
  return sum;
}

int main() {
  // Display the original array
  cout << "Original array:" << endl;
  display(array);

  // Sort the array row-wise
  sortRow(array);
  cout << "\nRow-wise sorted array:" << endl;
  display(array);

  // Calculate and display the sum of the diagonal elements of the row-wise sorted array
  int rowSum = diagonalSum(array);
  cout << "\nSum of the diagonal elements of the row-wise sorted array: " << rowSum << endl;

  // Sort the array column-wise again
  sortCol(array);
  cout << "\nColumn-wise sorted array:" << endl;
  display(array);

  // Calculate and display the sum of the diagonal elements of the column-wise sorted array
  int colSum = diagonalSum(array);
  cout << "\nSum of the diagonal elements of the column-wise sorted array: " << colSum << endl;

  return 0;
  }

