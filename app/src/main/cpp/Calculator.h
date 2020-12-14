//
// Created by Hyun Woo Lee on 12/14/20.
//

#ifndef NDKTUTORIAL_CALCULATOR_H
#define NDKTUTORIAL_CALCULATOR_H


class Calculator {
private:
    int mNum;

public:
    Calculator();
    Calculator(int num);
    int getAdd(const int& num);
    int getMinus(const int& num);
    ~Calculator();
};


#endif //NDKTUTORIAL_CALCULATOR_H
