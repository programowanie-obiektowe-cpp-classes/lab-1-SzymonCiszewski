class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
public:
    void   setX(double X) { x = X; }
    void   setY(double Y) { y = Y; }
    double getX() { return x; }
    double getY() { return y; }
    Wektor2D()
    {
        x = 0;
        y = 0;
    }
    Wektor2D(double X, double Y)
    {
        x = X;
        y = Y;
    }
    double x;
    double y;
};

Wektor2D suma(Wektor2D w1, Wektor2D w2)
{
    Wektor2D w3;
    w3.x = w1.getX() + w2.getX();
    w3.y = w1.getY() + w2.getY();
    return w3;
}

double dotp(Wektor2D w1, Wektor2D w2)
{
    return w1.getX() * w2.getX() + w1.getY() * w2.getY();
}

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    return suma(w1, w2);
}

double operator*(Wektor2D w1, Wektor2D w2)
{
    return dotp(w1, w2);
}