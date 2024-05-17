#include <iostream>
using namespace std;

class Box {
   public:
      
      Box() {
         length = 0;
         breadth = 0;
         height = 0;
      }
      
      Box(double len, double bre, double hei) {
         length = len;
         breadth = bre;
         height = hei;
      }
      
      void SetLength(double len) {
         length = len;
      }
      void SetBreadth(double bre) {
         breadth = bre;
      }
      void SetHeight(double hei) {
         height = hei;
      }
      // Calculate the volume of a box
      double GetVolume() {
         return length * breadth * height;
      }
      
      Box operator+(const Box& b) {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
   private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box
};


int main() {
   Box Box1;               
   Box Box2;               
   Box Box3;               
   double volume = 0.0;    

   
   Box1.SetLength(6.0);
   Box1.SetBreadth(7.0);
   Box1.SetHeight(5.0);

   
   Box2.SetLength(12.0);
   Box2.SetBreadth(13.0);
   Box2.SetHeight(10.0);

   
   volume = Box1.GetVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   
   volume = Box2.GetVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   
   Box3 = Box1 + Box2;

   
   volume = Box3.GetVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}
