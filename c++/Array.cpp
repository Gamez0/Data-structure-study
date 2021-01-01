#include <iostream>

using namespace std;

class Array{
	public:
		int n;
		int* arr;
	Array(int size){
		this->n = 0;
		this->arr = new int[size];
		for(int i=0;i<size;i++){
			arr[i] = 0;
		}
	}
	
	int at(int idx){
		return arr[idx];
	}
	
	void set(int idx, int X){
		if(arr[idx]!=0){
			arr[idx] = X;
		}
		else{
			arr[idx] = X;
			n++;	
		}
		
	}
	
	void add(int idx, int num){
		
		if(arr[idx]==0){
			arr[idx] = num;
		}
		else{
			int *temp = new int[n-idx+1];
			int j = idx;
			for(int i=0;i<n-idx+1;i++){
				temp[i] = arr[j++];
			}
			int k = 0;
			for(int i=idx+1;i<n+1;i++){
				arr[i] = temp[k++];
			}
			arr[idx]=num;
		}
		n++;
	}
	
	int remove(int idx){
		if(arr[idx]==0)return 0;
		
		int value = arr[idx];
		int *temp = new int[n-idx+1];
		int j = idx;
		for(int i=0;i<n-idx+1;i++){
			temp[i] = arr[j++];
		}
		int k = 0;
		for(int i=idx;i<n;i++){
			arr[i] = temp[k++];
		}
		n--;
		return value;
	}
	void printArray(){
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
};

int main(){
	Array a = Array(10);
	a.set(0,1);
	a.set(1,2);
	a.set(2,4);
	a.set(3,5);
	a.add(2,3);
	a.add(5,10);
	a.add(5,9);
	a.add(5,8);
	a.add(5,7);
	a.add(5,6);
	
	// 1 2 3 4 5 6 7 8 9 10
	a.printArray();
	
	// 1 2 3 4 5 6 7 8 9
	cout<<a.remove(9)<<endl;
	a.printArray();
}
