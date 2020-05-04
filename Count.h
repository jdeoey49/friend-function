class Count
{
    friend void setx(Count &, int);
    public:
        Count();
        void print();
    private:
        int x_;
};
