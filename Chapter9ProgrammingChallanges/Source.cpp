#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <ctime>
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

//9. Median Function
//
//double findMedian(int*, int);
//int main() {
//	const int SIZE = 4;
//
//	int my_array[SIZE];
//	int num;
//
//	cout << "Please enter 4 numbers." << endl;
//	for (int i = 0; i < SIZE; i++) {
//		cout << "NUMBER " << i + 1 << ": "; cin >> num;
//		my_array[i] = num;
//	}
//	num = my_array[0];
//
//	for (int i = 0; i < SIZE; i++) {
//		for (int j = i + 1; j < SIZE; j++) {
//			if (my_array[j] < my_array[i]) {
//				int container = my_array[i];
//
//				my_array[i] = my_array[j];
//				my_array[j] = container;
//			}
//		}
//	}
//	cout << "------------------------------" << endl;
//	cout << "THE MEDIAN IS: " << findMedian(my_array, SIZE);
//	return 0; 
//}
//double findMedian(int* array, int SIZE) {
//	double median;
//	if (SIZE % 2 == 0) {
//		median = (array[(SIZE / 2) - 1] + array[(SIZE / 2)]) / 2.0f;
//		std::cout << array[(SIZE / 2) - 1] << std::endl;
//		std::cout << array[(SIZE / 2)] << std::endl;
//
//	}
//	else {
//		median = array[SIZE / 2];
//	}
//	return median;
//}

//10. Reverse Array

//int* reverseArray(int[],const int size);
//int main() {
//
//	const int size = 10;
//	int my_array[size];
//	int num;
//	int* backward_array;
//	srand(time(NULL));
//
//	for (int i = 0; i < size; i++) {
//		my_array[i] = rand()%10;
//		std::cout << my_array[i] << " ";
//	}
//	std::cout << std::endl << std::endl;;
//
//	backward_array = reverseArray(my_array, size);
//
//	std::cout << "The array backwards:" << std::endl;
//	for (int i = 0; i < size; i++) {
//		std::cout << *(backward_array+i) << " ";
//	}
//
//	return 0;
//}
//
//
//int* reverseArray(int my_array[], const int size) {
//	int counter = 0;
//
//	int* backward_array;
//
//	backward_array = new int[size];
//
//	for (int i = size; i > 0 ; i--) {
//		
//		backward_array[counter] = my_array[i-1];	
//		counter++;
//	}
//
//	return backward_array;
//}

//11. Array Expander

//int* expandedArray(int[],const int size);
//
//int main() {
//
//	const int size = 10;
//	int my_array[size];
//	int* expanded_array;
//	srand(time(NULL));
//
//	for (int i = 0; i < size; i++) {
//		my_array[i] = rand()%10;
//		std::cout << my_array[i] << " ";
//	}
//	std::cout << std::endl << std::endl;;
//
//	expanded_array = expandedArray(my_array, size);
//
//	std::cout << "The array expanded:" << std::endl;
//
//	bool do_once = true;
//	for (int i = 0; i < size*2; i++) {
//		if (i == size && do_once  == true) {
//			std::cout << "Newly added positons in the array" << std::endl;
//			do_once = false;
//		}
//		std::cout << *(expanded_array+i) << std::endl;
//	}
//
//	return 0;
//}
//
//
//int* expandedArray(int my_array[], const int size) {
//
//	int* expanded_array;
//	int doublesize = size * 2;
//	expanded_array = new int[doublesize];
//
//	for (int i = 0; i < doublesize; i++) {
//		if (i < size) {
//			expanded_array[i] = my_array[i];
//
//		}
//		else {
//			expanded_array[i] = 0;
//		}
//	}
//
//	return expanded_array;
//}
//

//12. Element Shifter

//int* shiftArray(int my_array[], const int size);
//
//
//int main() {
//	const int size = 10;
//	int my_array[size];
//	int* expanded_array;
//	srand(time(NULL));
//	
//	for (int i = 0; i < size; i++) {
//		my_array[i] = rand()%10;
//		std::cout << my_array[i] << " ";
//	}
//	std::cout << std::endl << std::endl;;
//	
//	expanded_array = shiftArray(my_array, size);
//	
//	std::cout << "The array shifted:" << std::endl;
//	
//	bool do_once = true;
//	for (int i = 0; i < size+1; i++) {
//		std::cout << *(expanded_array+i) << " ";
//	}
//	
//	return 0;
//
// }
//
//int* shiftArray(int my_array[], const int size) {
//	int* shift_one_array;
//		int new_size = size + 1;
//		shift_one_array = new int[new_size];
//
//		shift_one_array[0] = 0;
//	
//		for (int i = 1; i < new_size; i++) {
//			shift_one_array[i] = my_array[i-1];
//		}
//	
//		return shift_one_array;
//}

//13.Movie Statistics
//int modeReturn(int*, int);
//double findMedian(int*, int);
//
//int main() {
//	int size;
//	int mode;
//	double median;
//	std::cout << "How many students were surveyed?" << std::endl;
//	std::cout << "NUMBER OF STUDENTS: "; std::cin >> size;
//
//	int* my_array = new int[size];
//	
//	std::cout << endl;
//	std::cout << "How many movies did each student watch?" << std::endl;
//	int movie_num;
//	for (int i = 0; i < size; i++) {
//		do {
//			std::cout << "STUDENT " << i + 1 << ": "; std::cin >> movie_num;
//			if (movie_num < 0) {
//				std::cout << "ERROR: PLEASE ENTER A NON NEGATIVE NUMBER." << std::endl;
//			}
//		} while (movie_num < 0);
//		my_array[i] = movie_num;
//	}
//
//	mode = modeReturn(my_array, size);
//	median = findMedian(my_array, size);
//	if (mode == -1) {
//		cout << "The data set does not have a mode.\n";
//	}
//	else {
//		std::cout << "THE MODE IS: " << mode << std::endl;
//	}
//	std::cout << "THE MEDIAN IS: " << median << std::endl;
// 
//	return 0;
//}
//
//int modeReturn(int* ptr, int SIZE) {
//	vector<int> number_amount;
//	vector<int> unique_number;
//	int counter;
//	int test_number;
//	int mode;
//	
//	
//
//	unique_number.push_back(*(ptr + 0));
//
//	bool unique;
//
//	for (int i = 1; i < SIZE; i++) { //will iterate through all values in the *ptr array
//
//		unique = true;
//
//		test_number = *(ptr + i); //The test_number will be set to the next number in the array for each iteration
//
//		for (int j = 0; j < unique_number.size(); j++) { //Will iterate through each number in the vector. WILL GROW EVERYTIME A UNIQUE NUMBER IS ADDED
//
//			if (test_number == unique_number[j]) { //If the test_number is equal to a number in the vecotor then the test_number is NOT unique
//				unique = false;
//			}
//		}
//		if (unique == true) { // Once the test_number is determined to be unique execute this
//
//			unique_number.push_back(test_number); //Add the uniuqe test_number to the vector
//		}
//	}
//
//	for (int i = 0; i < unique_number.size(); i++) {
//		std::cout << unique_number[i] << " ";
//	}
//
//
//	for (int i = 0; i < unique_number.size(); i++) { //Will iterate through each value in the unique_numbers vector
//		counter = 0;
//		for (int j = 0; j < SIZE; j++) { //Will iterate through each value in the ptr array
//
//			if (unique_number[i] == *(ptr + j)) { //If the value of unique_number[i] is equal to the value found in ptr array position j then execute
//				counter++;
//			}
//		}
//
//		number_amount.push_back(counter);
//	}
//	int maxIndex = 0,
//	times_number_appears_max = number_amount[0];
//	mode = 0;
//
//
//		within the list of times a number appears it finds the one that appeared the most (the greatest number)
//		for (int i = 1; i < number_amount.size(); i++) {
//			if (times_number_appears_max < number_amount[i]) {
//				times_number_appears_max = number_amount[i];
//				maxIndex = i;
//			}
//		}
//		Now we run throug the list again and try to find if it repeats. IF IT DOES THEN WE DONT HAVE A MODE
//		for (int i = 0; i < number_amount.size(); i++) {
//			Will compare all numbers except it's own by skipping it's index position
//			if (times_number_appears_max == number_amount[i] && i != maxIndex) {
//				return -1;
//			}
//		}
//
//		mode = unique_number[maxIndex];
//		return mode;
//
//}
//
//double findMedian(int* array, int SIZE) {
//	double median;
//	if (SIZE % 2 == 0) {
//		median = (array[(SIZE / 2)-1] + array[(SIZE / 2)]) / 2.0f;
//		std::cout << array[(SIZE / 2)-1] << std::endl;
//		std::cout << array[(SIZE / 2)] << std::endl;
//
//	}
//	else {
//		median = array[SIZE / 2];
//	}
//	return median;
//}