#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(int a[], int n){
	for (int i=0; i<n; i++){
		int t = a[i];
		int j = i-1;
		while(j>=0 && a[j] > t){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = t;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		Insertion_Sort(a,n);
		for (int i=0; i<n; i++){
			cout << a[i] << " ";
		}
	}
}
