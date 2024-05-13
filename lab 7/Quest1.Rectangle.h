#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    private:
        float length;
        float width;
        
    public:
        Rectangle()
        {
            length = 0;
            width = 0;
        }
        ~Rectangle();
        void setLength(float);
        void setWidth(float);
        float getLength();
        float getWidth();
        float getArea();
};
#endif 