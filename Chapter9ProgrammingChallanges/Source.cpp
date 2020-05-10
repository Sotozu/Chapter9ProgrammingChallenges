#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

/*a
// 1. Array Allocator

int* positionReturn(int);
int main() {

	int size;

	int *position;

	cout << "How large would you like your dynamic array to be?\n";

	cout << "SIZE: ";
	cin >> size;

	position = positionReturn(size);

	cout << "The starting position of the array is " << position << endl;

	cout << "The contents of the array are: ";
	for (int i = 0; i < size; i++) {
		cout << *position + i << " ";
	}

	return 0;
}

int* positionReturn(int size) {

	int* ip_array = nullptr;

	ip_array = new int[size];

	for (int i = 0; i < size; i++) {
		ip_array[i] = i + 1;
	}
	return ip_array;
}
*/

/*
// 2. Test Score #1

void ascendingSort(int*, int);
void displayArray(int*, int);
int main() {

	int size, total = 0;
	double average;

	int *ip_test_scores;

	cout << "How many test scores?\n";
	cout << "HOW MANY: ";
	cin >> size;
	ip_test_scores = new int[size];
	cout << endl;
	for (int i = 0; i < size; i++) {
		
		do {
			cout << "TEST SCORE " << i + 1 << ": ";
			cin >> *(ip_test_scores + i);
			if (*(ip_test_scores + i) < 0) {
				cout << "Error: Please enter a positive number.\n";
			}

		} while (*(ip_test_scores + i) < 0);
		total += *(ip_test_scores + i);
	}

	average = total / static_cast<double>(size);
	ascendingSort(ip_test_scores, size);
	cout << "The scores in ascending order\n";
	displayArray(ip_test_scores, size);
	cout << endl;
	cout << "AVERAGE SCORE: " << average << endl;





	return 0;
}

void ascendingSort(int* ip_test_scores, int size) {

	int startScan, minIndex;

	int minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan; //set to 0 at first, then +1 every iteration
		minValue = *(ip_test_scores + startScan); //The TEST value is set to the integer located in position'startScan'
											  //this will change to the value in the next position every iteration
		for (int index = startScan + 1; index < size; index++)
		{
			if (*(ip_test_scores + index) < minValue) //if the value found is less than the TEST value execute the following
			{
				minValue = *(ip_test_scores+index); //set minValue with the smaller value found in ip_test_scores[index]
				minIndex = index; //set minIndex with the index where the smaller value was located in the array
			}
		}
		//The smalles value has been determined at this point in the search.
		*(ip_test_scores+minIndex) = *(ip_test_scores + startScan); //set the position of where the smallest value was
															  //found with the contents of the beginning search value
		*(ip_test_scores+startScan) = minValue; //place the smallest value found into the first poisitoon being searched in the array
	}  
}

void displayArray(int *ip_test_scores, int size) {

	for (int i = 0; i < size; i++) {
		cout << *(ip_test_scores + i) << endl;
	}
}
*/

// 3. Drop Lowest Scores

/*
void ascendingSort(int*, int);
void displayArray(int*, int);
int main() {

	int size, total = 0;
	double average;

	int* ip_test_scores;

	cout << "How many test scores?\n";
	cout << "HOW MANY: ";
	cin >> size;
	ip_test_scores = new int[size];
	cout << endl;
	for (int i = 0; i < size; i++) {

		do {
			cout << "TEST SCORE " << i + 1 << ": ";
			cin >> *(ip_test_scores + i);
			if (*(ip_test_scores + i) < 0) {
				cout << "Error: Please enter a positive number.\n";
			}

		} while (*(ip_test_scores + i) < 0);
	}

	ascendingSort(ip_test_scores, size);

	for (int i = 1; i < size; i++) { //The lowest score is located in index 1. We are skipping that index and adding the rest
		total += *(ip_test_scores + i);//this effectively drops the lowest score.
	}

	average = total / (size - 1);

	cout << "The scores in ascending order\n";
	displayArray(ip_test_scores, size);
	cout << endl;
	cout << "Dropped the lowest score.\n";
	cout << "AVERAGE SCORE: " << average << endl;





	return 0;
}

void ascendingSort(int* ip_test_scores, int size) {

	int startScan, minIndex;

	int minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan; //set to 0 at first, then +1 every iteration
		minValue = *(ip_test_scores + startScan); //The TEST value is set to the integer located in position'startScan'
											  //this will change to the value in the next position every iteration
		for (int index = startScan + 1; index < size; index++)
		{
			if (*(ip_test_scores + index) < minValue) //if the value found is less than the TEST value execute the following
			{
				minValue = *(ip_test_scores + index); //set minValue with the smaller value found in ip_test_scores[index]
				minIndex = index; //set minIndex with the index where the smaller value was located in the array
			}
		}
		//The smalles value has been determined at this point in the search.
		*(ip_test_scores + minIndex) = *(ip_test_scores + startScan); //set the position of where the smallest value was
															  //found with the contents of the beginning search value
		*(ip_test_scores + startScan) = minValue; //place the smallest value found into the first poisitoon being searched in the array
	}
}

void displayArray(int* ip_test_scores, int size) {

	for (int i = 0; i < size; i++) {
		cout << *(ip_test_scores + i) << endl;
	}
}
*/
/*
// 4. Test Scores #2
void ascendingSort(int*, string*, int);
void displayArray(int*, string*, int);
int main() {

	int size, total = 0;
	double average;

	int* ip_test_scores; //integer pointer
	string* sp_student_names; //string pointer

	cout << "How many test scores?\n";
	cout << "HOW MANY: ";
	cin >> size;

	sp_student_names = new string[size];
	ip_test_scores = new int[size];

	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << "Student " << i + 1 << " name: ";
		cin.get();
		getline(cin, sp_student_names[i]);


		do {
			cout << "TEST SCORE " << i + 1 << ": ";
			cin >> *(ip_test_scores + i);
			if (*(ip_test_scores + i) < 0) {
				cout << "Error: Please enter a positive number.\n";
			}

		} while (*(ip_test_scores + i) < 0);
		cout << endl;
	}
	ascendingSort(ip_test_scores, sp_student_names, size);

	for (int i = 1; i < size; i++) { //The lowest score is located in index 1. We are skipping that index and adding the rest
		total += *(ip_test_scores + i);//this effectively drops the lowest score.
	}

	average = total / (size - 1);
	cout << "The scores in ascending order\n";
	displayArray(ip_test_scores, sp_student_names, size);
	cout << endl;
	cout << "Dropped the lowest score.\n";
	cout << "AVERAGE SCORE: " << average << endl;
	return 0;
}

void ascendingSort(int* ip_test_scores, string* sp_student_names, int size) {

	int startScan, minIndex;

	int minValue;

	string min_student;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan; //set to 0 at first, then +1 every iteration
		minValue = *(ip_test_scores + startScan); //The TEST value is set to the integer located in position'startScan'
											  //this will change to the value in the next position every iteration
		min_student = *(sp_student_names + startScan);

		for (int index = startScan + 1; index < size; index++)
		{
			if (*(ip_test_scores + index) < minValue) //if the value found is less than the TEST value execute the following
			{
				min_student = *(sp_student_names + index);
				minValue = *(ip_test_scores + index); //set minValue with the smaller value found in ip_test_scores[index]
				minIndex = index; //set minIndex with the index where the smaller value was located in the array

			}
		}
		//The smalles value has been determined at this point in the search.
		*(ip_test_scores + minIndex) = *(ip_test_scores + startScan); //set the position of where the smallest value was
															  //found with the contents of the beginning search value
		*(ip_test_scores + startScan) = minValue; //place the smallest value found into the first poisitoon being searched in the array
		
		*(sp_student_names + minIndex) = *(sp_student_names + startScan);
		*(sp_student_names + startScan) = min_student;
	}
}

void displayArray(int* ip_test_scores, string* sp_student_names, int size) {

	for (int i = 0; i < size; i++) {
		cout << *(sp_student_names + i) << ": ";
		cout << *(ip_test_scores + i) << endl;
	}
}
*/
/*
// 5. Pointer Rewrite
int doSomething(int*, int*);

int main() {
	int result;

	int x_variable = 5;
	int *xptr = &x_variable;

	int y_variable = 10;
	int* yptr = &y_variable;

	result = doSomething(xptr, yptr);

	cout << result << endl;

	return 0;
}

int doSomething(int* x, int* y) {
	int temp = *x; //temp = 5
	*x = *y * 10; //y = 10 -> thus 10*10 = 100. New value of *x is 100
	*y = temp * 10; // temp = 5 -> this 5*10 = 50. New value of *y is 50
	return (*x + *y); //should return 150 -> (100 + 50)
}
*/
/*
// 6. Case Modification #1

 // Function prototypes 
void arrSelectSort(int* [], int);
void showArray(const int[], int);
void showArrPtr(int* [], int);
int main() {

	const int NUM_DONATIONS = 15;

	 // An array containing the donation amounts. 
	int* iptr_donations = nullptr;
	iptr_donations = new int[NUM_DONATIONS];

	for (int i = 0; i < NUM_DONATIONS; i++) {
		cout << "Donation " << i + 1 << ": ";
		cin >> iptr_donations[i];
	}

	// An array of pointers to int. 
	int* arrPtr[NUM_DONATIONS] = { nullptr, nullptr, nullptr, nullptr, nullptr,
									nullptr, nullptr, nullptr, nullptr, nullptr,
									nullptr, nullptr, nullptr, nullptr, nullptr };
	
	// Each element of arrPtr is a pointer to int. Make each 
	// element point to an element in the donations array.
	for (int count = 0; count < NUM_DONATIONS; count++) {
		arrPtr[count] = &(iptr_donations[count]);
	}

	// Sort the elements of the array of pointers. 
	arrSelectSort(arrPtr, NUM_DONATIONS);

	// Display the donations using the array of pointers. This 
	// will display them in sorted order. 
	cout << "The donations, sorted in ascending order are: \n";
	showArrPtr(arrPtr, NUM_DONATIONS);

	// Display the donations in their original order. 
	cout << "The donations, in their original order are: \n";
	showArray(iptr_donations, NUM_DONATIONS);

	 return 0; 
}

//**************************************************************** 
// Definition of function arrSelectSort. * 
// This function performs an ascending order selection sort on * 
// arr, which is an array of pointers. Each element of array * 
// points to an element of a second array. After the sort, * 
// arr will point to the elements of the second array in * 
// ascending order. * 
//**************************************************************** 
void arrSelectSort(int* arr[], int size) {
	int startScan, minIndex;

	int* minElem;
	for (startScan = 0; startScan < (size - 1); startScan++) {
		minIndex = startScan;
		minElem = arr[startScan];
		for (int index = startScan + 1; index < size; index++) {
			if (*(arr[index]) < *minElem) {
			minElem = arr[index];
			 minIndex = index;
			}
		}
		arr[minIndex] = arr[startScan];
		arr[startScan] = minElem;
	}
}

//*********************************************************** 
// Definition of function showArray. * 
// This function displays the contents of arr. size is the * 
// number of elements. * 
//*********************************************************** 
void showArray(const int arr[], int size)
{
	for (int count = 0; count < size; count++) {
		cout << arr[count] << " ";
	}
	cout << endl;
}
//*************************************************************** 
// Definition of function showArrPtr. * 
// This function displays the contents of the array pointed to * 
// by arr. size is the number of elements. * 
//*************************************************************** 
void showArrPtr(int* arr[], int size) {
	for (int count = 0; count < size; count++) {
		cout << *(arr[count]) << " ";
	}
	cout << endl;
}
*/
/*
// 7. Case Study Modification #2
// Function prototypes 
void arrSelectSort(int* [], int);
void showArray(const int[], int);
void showArrPtr(int* [], int);
int main() {

	const int NUM_DONATIONS = 15;

	// An array containing the donation amounts. 
	int* iptr_donations = nullptr;
	iptr_donations = new int[NUM_DONATIONS];

	for (int i = 0; i < NUM_DONATIONS; i++) {
		cout << "Donation " << i + 1 << ": ";
		cin >> iptr_donations[i];
	}

	// An array of pointers to int. 
	int* arrPtr[NUM_DONATIONS] = { nullptr, nullptr, nullptr, nullptr, nullptr,
									nullptr, nullptr, nullptr, nullptr, nullptr,
									nullptr, nullptr, nullptr, nullptr, nullptr };

	// Each element of arrPtr is a pointer to int. Make each 
	// element point to an element in the donations array.
	for (int count = 0; count < NUM_DONATIONS; count++) {
		arrPtr[count] = &(iptr_donations[count]);
	}

	// Sort the elements of the array of pointers. 
	arrSelectSort(arrPtr, NUM_DONATIONS);

	// Display the donations using the array of pointers. This 
	// will display them in sorted order. 
	cout << "The donations, sorted in descending order are: \n";
	showArrPtr(arrPtr, NUM_DONATIONS);

	// Display the donations in their original order. 
	cout << "The donations, in their original order are: \n";
	showArray(iptr_donations, NUM_DONATIONS);

	return 0;
}

//**************************************************************** 
// Definition of function arrSelectSort. * 
// This function performs an ascending order selection sort on * 
// arr, which is an array of pointers. Each element of array * 
// points to an element of a second array. After the sort, * 
// arr will point to the elements of the second array in * 
// ascending order. * 
//**************************************************************** 
void arrSelectSort(int* arr[], int size) {
	int startScan, maxIndex;

	int* maxElem;
	for (startScan = 0; startScan < (size - 1); startScan++) {
		maxIndex = startScan;
		maxElem = arr[startScan];
		for (int index = startScan + 1; index < size; index++) {
			if (*(arr[index]) > *maxElem) {
				maxElem = arr[index];
				maxIndex = index;
			}
		}
		arr[maxIndex] = arr[startScan];
		arr[startScan] = maxElem;
	}
}

//*********************************************************** 
// Definition of function showArray. * 
// This function displays the contents of arr. size is the * 
// number of elements. * 
//*********************************************************** 
void showArray(const int arr[], int size)
{
	for (int count = 0; count < size; count++) {
		cout << arr[count] << " ";
	}
	cout << endl;
}
//*************************************************************** 
// Definition of function showArrPtr. * 
// This function displays the contents of the array pointed to * 
// by arr. size is the number of elements. * 
//*************************************************************** 
void showArrPtr(int* arr[], int size) {
	for (int count = 0; count < size; count++) {
		cout << *(arr[count]) << " ";
	}
	cout << endl;
}
*/

/*
// 8. Mode Function

int modeReturn(int*, int);

int main() {

	srand(time(NULL));

	int mode;

	const int SIZE = 20;

	int* ptr = nullptr;
	ptr = new int[SIZE];

	cout << " The data set\n";
	for (int i = 0; i < SIZE; i++) { //Populate the dynamic array with 20 numbers between 1 and 10
		ptr[i] = rand() % 10 + 1;
		cout << ptr[i] << endl;
	}
	cout << endl;

	mode = modeReturn(ptr, SIZE);

	if (mode == -1) {
		cout << "The data set does not have a mode.\n";
	}
	else {
		cout << "It occurs " << mode << " times in the data set.\n";
	}

	return 0;
}

int modeReturn(int*ptr, int SIZE) {
	vector<int> number_amount;
	vector<int> unique_number;
	int counter;
	int test_number;
	int mode;


	unique_number.push_back(*(ptr+0));

	bool unique;

	for (int i = 1; i < SIZE; i++) { //will iterate through all values in the *ptr array

		unique = true;

		test_number = *(ptr + i); //The test_number will be set to the next number in the array for each iteration

		for (int j = 0; j < unique_number.size() ; j++) { //Will iterate through each number in the vector. WILL GROW EVERYTIME A UNIQUE NUMBER IS ADDED

			if (test_number == unique_number[j]) { //If the test_number is equal to a number in the vecotor then the test_number is NOT unique
				unique = false;
			}
		}
		if (unique == true) { // Once the test_number is determined to be unique execute this

			unique_number.push_back(test_number); //Add the uniuqe test_number to the vector
		}
	}
	
	for (int i = 0; i < unique_number.size(); i++) { //Will iterate through each value in the unique_numbers vector
		counter = 0;
		for (int j = 0; j < SIZE; j++) { //Will iterate through each value in the ptr array

			if (unique_number[i] == *(ptr + j)) { //If the value of unique_number[i] is equal to the value found in ptr array position j then execute
				counter++;
			}
		}

		number_amount.push_back(counter);
	}

	
	int startScan, maxIndex, maxValue, max_number = 0;

	int* ptr_placeholder;


	for (startScan = 0; startScan < (number_amount.size() - 1); startScan++)
	{
		maxIndex = startScan;
		maxValue = number_amount[startScan];
		for (int index = startScan + 1; index < number_amount.size(); index++)
		{
			if (number_amount[index] > maxValue)
			{
				maxValue = number_amount[index];
				max_number = unique_number[index]; //holds the number that shows up the least in the array;
				maxIndex = index;
			}
		}
		unique_number[maxIndex] = unique_number[startScan];
		unique_number[startScan] = max_number;

		number_amount[maxIndex] = number_amount[startScan];
		number_amount[startScan] = maxValue;
	}

	for (int i = 1; i < unique_number.size(); i++) {
		if (unique_number[0] == unique_number[i]) {
			return -1;
		}
	}

	cout << "The number " << unique_number[0] << " is the mode.\n";
	return number_amount[0];
}
*/

//complete

