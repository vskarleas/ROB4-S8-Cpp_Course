#ifndef RECT_HPP
#define RECT_HPP

#include <iostream> 

namespace Geometrie
{
    class Rectangle 
    {
        private:
            double l;
            double h;

        public:
            Rectangle(){};
            Rectangle(double l_, double h_);
            
            double aire();
            double perimetre();

            bool operator==(Rectangle &r2);

            double getl(){return l;};
            double geth(){return h;};
            void setl(double l_){l = l_;};
            void seth(double h_){h = h_;}; 


    };
    void afficherDimensions(Rectangle& r);
} // Geometrie
#endif