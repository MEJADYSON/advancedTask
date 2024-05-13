#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    private:
        float length;
        float width;
        
    public:
        //Overloaded constructor
        Rectangle();
        Rectangle(float, float);
        ~Rectangle();
        void setValues(float, float);
        float getLength();
        float getWidth();
        float getArea();
};
#endif 