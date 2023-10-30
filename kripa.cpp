#include"kanha.h"
int main(){
    complex c1,c2,c3;
    c1.set_data(1,2);
    c2.set_data(1,2);
    c3=c1.add(c2);
    c3.display_data();
    return 0;
}