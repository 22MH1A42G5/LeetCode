class ProductOfNumbers {
private:
    vector<int> pp;
    int size = 0;

public:
    ProductOfNumbers() {
        pp.push_back(1);
        size = 0;
    }

    void add(int num) {
        if (num == 0) {
            pp = {1};
            size = 0;
        } else {
            pp.push_back(pp[size] * num);
            size++;
        }
    }

    int getProduct(int k) {
        if (k > size) return 0;
        return pp[size] / pp[size - k];
    }
};