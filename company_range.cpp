#include<iostream>
using namespace std;

int main() {
    int no_of_emp, start, end, emp_distance;
    cin>>no_of_emp;
    cin>>start;
    cin>>end;

    int arr[no_of_emp];

    for(emp_distance=0; emp_distance<no_of_emp; emp_distance++) {
        cin>>arr[emp_distance];
    }

    for(emp_distance=0; emp_distance<no_of_emp; emp_distance++) {
        if(arr[emp_distance]>start && arr[emp_distance]<end) {
            cout<<arr[emp_distance]<<" "<<endl;
        }
    }

    return 0;
}
