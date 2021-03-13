#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//Function to print array.
void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << "\n";
}


int main() {
    
    vector<int> statues = { 6, 2, 3, 8 };
    sort(statues.begin(), statues.end());
    int range = statues[statues.size()-1] - statues[0];
    int largestInt = statues[statues.size() - 1];
    int size = statues.size();
    for (int i = 0; i < statues.size(); i++) {
        //cout << statues[i] << en
        /*if (statues[i] - statues[i-1] == 1) {
        }
        else {
            needed += 1;
        }*/
    }
    cout << largestInt - size -1;
    //largestInt - size -1;


    //finding the sum difference between the diagonal1 and diagonal2 of a multi-dimensional array
    //vector<vector<int>> arr = { { 3 },{11,2,4},{4,5,6}, {10, 8, -12} };
    //int diagonal1, diagonal2, sum, rows, cols, start;
    ////sum = diagonal1 - diagonal2;
    //rows = arr.size();
    //for (int i = 0; i < rows; i++) {
    //    
    //    cols = arr[i].size();
    //}
    //for (int j = 0; j < rows; j++) {
    //    if (arr[j].size() < cols) {
    //        start = arr[j].size()+1;
    //        rows = start;
    //    }
    //}
    //
    //while (rows > 0) {
    //    
    //    rows--;
    //}




    return 0;
}

void bubbleSort() {
    //bubble sort
    int i, j, temp, pass = 0; //creating variables
    int a[10] = { 10,2,0,14,43,25,18,1,5,45 };  //unsorted matrix
    cout << "Input list ...\n";
    for (i = 0; i < 10; i++) { //loop through to print out the array
        cout << a[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < 10; i++) { //nested for loops for the length of the array (in our case this is 10)
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i]) { //compare the current number to the number directly next to it
                temp = a[i];   //change temp to value of a[i]
                a[i] = a[j];   //change a[i] to the next number in array
                a[j] = temp;   //change a[j] to temp
            }
        }
        pass++; //increase numbe of passes
    }
    //once complete output sorted list
    cout << "Sorted Element List ...\n";
    for (i = 0; i < 10; i++) {
        cout << a[i] << "\t";
    }
    cout << "\nNumber of passes taken to sort the list:" << pass << endl;
}

void insertionSort() {
    //insertion sort
    int array[] = { 5, 3, 1, 9, 8, 2, 4,7 }; //create array
    int size = sizeof(array) / sizeof(array[0]); //determine sizing

    cout << "Before Insertion sort: \n";
    display(array, size);//Using dispaly function to print unsorted array.

    int i, target, j;
    for (i = 1; i < size; i++)
    {
        target = array[i];  //
        j = i - 1;

        /* Here the elements in b/w arrary[0 to i-1]
        which are greater than target are moved
        ahead by 1 position each*/
        while (j >= 0 && array[j] > target)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = target;
    }
    cout << "After Insertion sort: \n";
    display(array, size);//Using dispaly function to print sorted array. 
}

void palindromes() {
    //Palindromes
    string palindrome = "aabaa";
    int i = 0;
    int j = palindrome.length()-1;
    while (palindrome[i] == palindrome[j]) {
        //cout << "true" << endl;
        if (i == palindrome.length()-1 && j == 0) {
            cout << "true" << "\t";
            break;
        }
        i++; j--;
    }
}

void largestAdjInts() {
    //Largest Adjacent Product Integers
    int largest = 0;
     vector<int> inputArray = { 3, 6, -2, -5, 7, 3 };
     int i = 0;
     int j = 1;
     while (i != inputArray.size() - 1 && j != inputArray.size()) {
         if (inputArray[i] * inputArray[j] > largest) {
             largest = inputArray[i] * inputArray[j];
         }
         i++;
         j++;
     }
     cout << largest;
}

void sizeOfDiagram() {
    //finding the size of diagram
     int n = 4;
     int area = 1;
     while (n > 1) {
         area += (n-- -1) * 4;
     }
     cout << area;
}

void unknown() {
    //previous examples
    vector<int> a = { 17,28,30 };
    vector<int> b = { 99,16,8 };
    vector<int> total;
    int pointsA = 0;
    int pointsB = 0;
    for (int i = 0; i < a.size() && b.size(); i++) {
        if (a[i] > b[i]) {
            pointsA += 1;
        }
        else if (a[i] < b[i]) {
            pointsB += 1;
        }
    }
    total.push_back(pointsA);
    total.push_back(pointsB);
    for (int j = 0; j < total.size(); j++) {
        cout << total[j] << endl;
    }

}