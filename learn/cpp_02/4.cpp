

#include <iostream>

class   Distance
{
    private:
        int feet;
        float   inches;
    
    public:
        Distance();
        Distance(int f, float i);
        
        void    setDistance(int f, float i);
        void    print() const;
};


Distance::Distance() : feet(0), inches(0.0)
{

}

Distance::Distance(int f, float i) : feet(f), inches(i)
{

}

void    Distance::setDistance(int f, float i)
{
    feet = f;
    inches = i;
}

void    Distance::print() const
{
    std::cout << "feet = " << feet << ", inches = " << inches << std::endl;
}

int main()
{
    Distance    d1;
    Distance    d2(3, 3.5);
    Distance    d3(d2);
    Distance    d4 = d2;

    d2.print();
    d3.print();
    d4.print();
    d3.setDistance(44, 4.4);
    d4.setDistance(55, 5.4);
    d2.print();
    d3.print();
    d4.print();

}
