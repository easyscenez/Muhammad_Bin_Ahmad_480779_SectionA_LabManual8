#include <iostream>
using namespace std;
int main(){
	
//	int n;
//    int most_frequent_elements[10]={}; 
//    int current_element;
//    int frequency,most_frequency=0;
//	bool check=false;
//	
//	cout<<"Enter length of array.\n";
//	cin>>n;
//    int numbers[n];
//    cout<<"Enter "<<n<<" elements into the array:\n";
//    for(int i=0;i<n;i++){
//    	cin>>numbers[i];
//    }
//
//    int most_frequent_index=0;
//    for(int i=0;i<n;i++) {
//        frequency=1;
//        current_element=numbers[i];
//
//    	for(int j=i+1;j<n;j++) {
//            if(numbers[i]==numbers[j]) {
//                frequency++;
//                check=true;
//            }
//        }
//
//        if (frequency>most_frequency) {
//            most_frequency=frequency;
//            most_frequent_elements[most_frequent_index]=current_element;
//            most_frequent_index=0;
//        } else if(frequency==most_frequency) {
//            most_frequent_index++;
//            most_frequent_elements[most_frequent_index]=current_element;
//        }
//    }
//    
//	if(check==false){
//		cout<<"There were no repeated elements.\n";
//	}
//    else{
//	cout<<"The most repeated elements are:\n";
//    for (int i=0;i<=most_frequent_index;i++) {
//        cout<< most_frequent_elements[i]<<" repeated "<<most_frequency<<" times."<<endl;
//    }
//    }

//     end of task 1
    
//    int a[8]={13,15,17,9,99,77,65,43};
//    int max=0;
//    int min=a[0];
//    for (int i=0;i<8;i++){
//    	if (a[i]>max){
//    		max=a[i];
//		}
//		if(a[i]<min){
//			min=a[i];
//		}
//	}
//	cout<<"The greatest number in the array is "<<max<<endl;
//	cout<<"The lowest number in the array is "<<min<<endl;
    // end of task 2
    
    int numbers[5];
    cout<<"Enter 5 elements.\n";
    for (int i=0;i<5;i++){
    	cin>>numbers[i];
	}
	cout<<"Original array:\n";
	for (int i=0;i<5;i++){
    	cout<<numbers[i]<<"  ";
	}
	cout<<endl;
	int temp;
	temp=numbers[4];
	numbers[4]=numbers[2];
	numbers[2]=temp;
	cout<<"Array after swap:\n";
	for (int i=0;i<5;i++){
    	cout<<numbers[i]<<"  ";
	}
    // end of task 3
}
