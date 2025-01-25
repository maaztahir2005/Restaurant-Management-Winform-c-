#pragma once
using namespace System;
#include "bill.h"
ref class discountedbill :
    public bill
{
public:
    String^ generatebill(String^ itemprice) override {
        Double pr = Convert::ToDouble(itemprice);
        if (pr >= 300) {
            return "Discounted Bill";
        }
        else {
            bill_amount = pr.ToString();
            return bill_amount;
        }
    }

};

