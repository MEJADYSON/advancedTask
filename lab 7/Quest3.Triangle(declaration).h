#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes
{
    class Triangle
    {
        private:
            double base;
            double height;
        public:
            Triangle();
            Triangle(double height, double base);
            void setHeight(double height);
            void setBase(double base);
            double getHeight();
            double getBase();
            ~Triangle();
    };
    #endif
}