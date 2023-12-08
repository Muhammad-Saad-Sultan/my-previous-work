class Complex
{
private:
    int real;
    int imag;

public:
    // Constructors
    Complex(int r = 0, int i = 0);

    // Setter
    void setReal(int r);
    void setImag(int i);

    // Getters
    int getReal() const;
    int getImag() const;

    // Overloaded operators
    Complex operator+(const Complex &other) const;
    Complex operator-(const Complex &other) const;
    Complex operator*(const Complex &other) const;
    Complex operator/(const Complex &other) const;
    
    // Destructor
    ~Complex();
};