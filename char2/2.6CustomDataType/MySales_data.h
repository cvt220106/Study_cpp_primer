//
// Created by jacky on 2022/11/8.
//

#ifndef CHAR2_MYSALES_DATA_H
#define CHAR2_MYSALES_DATA_H
#include <string>


struct MySales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


#endif //CHAR2_MYSALES_DATA_H
