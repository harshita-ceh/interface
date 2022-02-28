#include <iostream>
using namespace std;
class PlayerInterface{
public:
virtual void DoubleJump()=0;
virtual void Fire()=0; 
};
class Player:public PlayerInterface{
public:
void DubleJump(){
  cout<<"{function name} is overriden"<<endl;
}
void Fire(){
  cout<<"{function name} is overriden"<<endl;
}
};
int main() {
  PlayerInterface *p;
  Player *p1;
  p1->DoubleJump();
  p1->Fire();
  

}