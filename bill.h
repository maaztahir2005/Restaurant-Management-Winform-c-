#pragma once
using namespace System;
ref class bill
{
public:
	String^ item;
	String^ price;
	String^ bill_amount;

    virtual String^ generatebill(String^ itemprice) {
        double pr = Convert::ToDouble(itemprice);
        if (pr < 300) {
            return "Regular Bill";
        }
        else {
            bill_amount = pr.ToString();
            return bill_amount;
        }
    }
};
