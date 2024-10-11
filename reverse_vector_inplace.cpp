#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &numbers){
    int i = 0;
    int j = numbers.size() - 1;
    while(i < j){
        // Swap the elements at i and j
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
        // Move the indices
        i++;
        j--;
    }
}


int main(){
    int number;
    vector<int> numbers;
    vector<int> reverse_number;
    int vector_element;
    cout << "Enter the number of numbers: ";
    cin >> number;
    cout << endl;
    while(number > 0){
        cout << "Enter the input number: ";
        cin >> vector_element;
        numbers.push_back(vector_element);
        number--;
    }
    reverse(numbers);
    cout << "the reverse vector is: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}