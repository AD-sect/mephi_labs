class RGB {
public:

    RGB(int size);

    RGB();

    int* getR() const;

    void setR(int *r);

    int* getG() const;

    void setG(int *g);

    int* getB() const;

    void setB(int *b);

private:
    int* R;
    int* G;
    int* B;

};



