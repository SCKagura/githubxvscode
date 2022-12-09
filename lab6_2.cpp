#include <iostream>
#include<cmath>

using namespace std;


    

double deg2rad(double deg){
    return deg*M_PI/180;
}
    
double rad2deg(double rad){
    return rad*180/M_PI ;

}


double findXComponent(double length1,double length2,double a1,double a2){
    double x= length1*cos(a1)+length2*cos(a2);
    return x;
}
double findYComponent(double length1,double length2,double a1,double a2){
    double y= length1*sin(a1)+length2*sin(a2);
    return y;
}   
double  pythagoras(double x ,double y  ){
    double xy=sqrt((x*x)+(y*y));
    return xy;
}
void showResult(double anslength,double ansdeg){
cout<< "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" ;
    cout<<"Length of the resultant vector = "<<anslength<<"\n"; 
   cout<<"Direction of the resultant vector (deg) = "<<ansdeg<<"\n";
     cout<< "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" ;
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}