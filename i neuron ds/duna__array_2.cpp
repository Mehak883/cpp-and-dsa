#include <iostream>
using namespace std;
class dynamic_array
{
    int *array;
    int size, capacity;

public:
    dynamic_array()
    {
        array = new int[1];
        size = 0;
        capacity = 1;
    }
void insert_by_shift(int index, int value){
  if (size == capacity)
        {
            resize();
        }
        if (index >= capacity)
        {
            cout << "memory not exist \n";
        }
      for(int i=size;i>=index;i--){
array[i]=array[i-1];
      }
      array[index]=value;
      size++;
}
    void insert(int index, int value)
    {
        if (size == capacity)
        {
            resize();
        }
        if (index >= capacity)
        {
            cout << "memory not exist \n";
        }
        array[index] = value;
        size++;
    }
    void resize()
    {
        int *temp = new int[2 * capacity];
        for (int i = 0; i < size; i++)
        {
            temp[i] = array[i];
        }
        delete[] array;
        array = temp;
        capacity = 2 * capacity;
    }
    void printarray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << "  ";
        }
        cout<<"\nsize : "<<size<<"\ncapacity : "<<capacity<<"\n\n";
    }
    int get_size(){
        return size;
    }
    int get_capacity(){
        return capacity; 
    }
    void delete_arr(int index){
        if(index>=size){
            cout<<"\nindex does not exist \n";
            return;
        }
        for(int i=index;i<size-1;i++){
            array[i+1]=array[i];
        }
    size--;
    }
    void shrinktofit(){
        int *temp=new int[size];
       for(int i=0;i<size;i++) 
        {
temp[i]=array[i];
        }
        delete []array;
        array=temp;
        capacity=size;
    }
    int search(int value){
        for(int i=0;i<size;i++){
            if(array[i]==value){
                return i;
            }
        }
        return -1;
    }
    ~dynamic_array()
    {
        delete[] array;
        size = 0;
        capacity = 0;
    }
};
int main()
{
dynamic_array a1;
int *b{new int[5]{1,2,3,4,5}};
int *c{new int[5]{}};
for(int i=0;i<5;i++){
cout<<b[i]<<"  ";
}
cout<<"\n\n";
for(int i=0;i<5;i++){
cout<<c[i]<<"  ";
}
cout<<"\n\n";
a1.insert(0,10);
a1.printarray();

a1.insert(1,20);
a1.printarray();

a1.insert(2,30);
a1.printarray();

a1.insert(3,40);
a1.printarray();

a1.insert(4,50);
a1.printarray();

a1.insert_by_shift(2,100);
a1.printarray();

a1.shrinktofit();
a1.printarray();

int ans;
ans=a1.search(30);
if(ans!=-1){
    cout<<"\n30 is found at "<<ans;
}
else{
    cout<<"\nvalue not found !!";
}
// a1.delete_arr(2);
// a1.printarray();
    return 0;
}