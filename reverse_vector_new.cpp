#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> numbers){
    vector<int> reverse_vector;
    for(int i=0; i<numbers.size(); i++){
        reverse_vector.push_back(numbers[numbers.size()-(i+1)]);
        }
    return reverse_vector;

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
    reverse_number = reverse(numbers);
    cout << "the reverse vector is: ";
    for (int num : reverse_number) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}