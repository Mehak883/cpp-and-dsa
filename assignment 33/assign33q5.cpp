// 5. Create a base class called Photon. Use this class to store double type value of wavelength that could be used to calculate photon
// energy. Create class calculate_photonEnergy which will photon energy. Using these classes, calculate photon energy.
#include<iostream>
#include<math.h>
using namespace std;
class photon{
protected:
double wavelength;
public:
photon(){
    cout<<"enter wavelength : ";
    cin>>wavelength;
}
};
class calculate_photoenergy:public photon{
public:
calculate_photoenergy():photon(){
double ans;
ans= (6.6261*pow(10,-34) * 3*pow(10,8))/wavelength;
cout<<"ans : "<<ans; 
}
};
int main(){
    calculate_photoenergy c1;
    return 0;
}