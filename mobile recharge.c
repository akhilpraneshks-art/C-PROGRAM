#include <stdio.h>
struct akhil {
    int mobilenumber;
    float amount;
};
int main() {
    struct akhil a;
    a.mobilenumber =678905;
    a.amount = 65;
     printf("mobile recharge details\n");
     printf("mobile number : %d\n", a.mobilenumber);
     printf("recharge amount : %f\n", a.amount); 
      return 0;
}