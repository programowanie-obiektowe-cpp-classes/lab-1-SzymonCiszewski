class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
public:
    void   setX(double X) { x = X; }
    void   setY(double Y) { y = Y; }
    double getX() { return x; }
    double getY() { return y; }
    Wektor2D() {}
    Wektor2D(double X, double Y)
    {
        x = X;
        y = Y;
    }
    Wektor2D(Wektor2D w1, Wektor2D w2)
    {
        x = w1.getX() + w2.getX();
        y = w1.getY() + w2.getY();
    }
    double dotp(Wektor2D w1, Wektor2D w2) { 
        return w1.getX() * w2.getX() + w1.getY() * w2.getY(); 
    }

    double x;
    double y;
};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    return Wektor2D{w1, w2};
}

double operator*(Wektor2D w1, Wektor2D w2)
{
    return w1.dotp(w1, w2);
}