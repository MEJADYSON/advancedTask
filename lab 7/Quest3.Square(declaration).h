#ifndef SQUARE_H
#define SQUARE_H
namespace shapes
{
    class Square
    {
        private:
            double length;
    
        public:
           Square();
           Square(double);
           void setLength(double);
           double getLength();
           ~Square();
    };
    #endif
}