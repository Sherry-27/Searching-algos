#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
	int start = 0;
	int end = size-1;
	
	int mid = start + (end-start)/2;

	while(start<=end) {
		if(arr[mid]==key) {
			return mid;
		}
		if(key>arr[mid]) {
			start = mid+1;
		}
		else{
			end = mid -1;
		}
	int	mid = start + (end-start)/2;
	}
	return -1;
}

int main() {
	
	int even[6]={2,4,6,8,12,14};
	int odd[5]={1,3,5,7,9};

	
	int evenindex = binarySearch(even,6,12);
	cout<<"Index of 12 is: "<<evenindex<<endl;
	
	int oddindex = binarySearch(odd,9,7);
	cout<<"Index of 7 is: "<<oddindex<<endl;

	
	return 0;
	
	
	
}
