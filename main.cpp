#include <iostream>

using namespace std;

int inputArrSize();
void inputArray(int[]);
void displayArray(int[]);
void displaySelected();
int searche;
int arrSize,i;

int main()
{
    int new_age[arrSize];
    displaySelected();

    int arrSize;

    return 0;
}
int inputArrSize()
{
    cout << "Enter Array size: ";
    cin>>arrSize;

    return arrSize;
}
void displaySelected(){
                int age[arrSize],serchmo;


               cout << "Enter the number of elements: ";
                cin >> arrSize;

                cout << "Enter " << arrSize << " value of item: ";
                for(i=0;i<arrSize;i++)
                {
                    cin >> age[i];
                }
                cout << "Enter the value  you want to search: ";
                cin >> serchmo;
                for(i=0;i<arrSize;i++)
                {
                if(age[i]==serchmo)
                {
                    cout <<"The value "<< serchmo << " is at position " << i << "\n";

        }

    }

}
