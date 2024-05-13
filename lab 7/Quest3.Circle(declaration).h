#ifndef CIRCLE_H
#define CIRCLE_H
using namespace std;

namespace shapes
{
    class Circle
    {
        private:
            double radius;
        public:
            Circle();
            Circle(double);
            void setRadius(double);
            double getRadius();
            ~Circle();
    };
    #endif
}