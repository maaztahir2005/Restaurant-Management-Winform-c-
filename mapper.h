#pragma once
#include <string>
#include "menu.h"
#include "order.h"
#include "table.h"
#include "discountedbill.h"
#include "employee.h"
#include <iostream>
using namespace System;
using namespace System::Text;
using namespace System::IO;
ref class mapper
{
public:
	static cli::array<menu^>^ map_menu(cli::array <String^>^ rows)
	{
		cli::array<menu^>^ ob = gcnew cli::array<menu^>(rows->Length);

		for (int i = 0; i < rows->Length; i++)
		{

			cli::array<String^>^ temp = rows[i]->Split(',');
			ob[i] = gcnew menu();
			ob[i]->name = temp[0];
			ob[i]->price = temp[1];
			ob[i]->category = temp[2];


		}

		return ob;
	}
	static cli::array<order^>^ map_order(cli::array <String^>^ rows)
	{
		cli::array<order^>^ ob = gcnew cli::array<order^>(rows->Length);

		for (int i = 0; i < rows->Length; i++)
		{
			cli::array<String^>^ temp = rows[i]->Split(',');
			ob[i] = gcnew order();
			ob[i]->customer = temp[0];
			ob[i]->item = temp[1];
			ob[i]->quantity = temp[2];

		}

		return ob;
	}
	static cli::array<table^>^ map_table(cli::array <String^>^ rows)
	{
		cli::array<table^>^ ob = gcnew cli::array<table^>(rows->Length);

		for (int i = 0; i < rows->Length; i++)
		{
			cli::array<String^>^ temp = rows[i]->Split(',');
			ob[i] = gcnew table();
			ob[i]->customer = temp[0];
			ob[i]->seats = temp[1];
			ob[i]->table_no = temp[2];

		}

		return ob;
	}
	static cli::array<employee^>^ map_emp(cli::array <String^>^ rows)
	{
		cli::array<employee^>^ ob = gcnew cli::array<employee^>(rows->Length);

		for (int i = 0; i < rows->Length; i++)
		{
			cli::array<String^>^ temp = rows[i]->Split(',');
			ob[i] = gcnew employee();
			ob[i]->name = temp[0];
			ob[i]->position = temp[1];
			ob[i]->salary = temp[2];
		}
		return ob;
	}
	static cli::array<discountedbill^>^ map_bill(cli::array <String^>^ rows)
	{
		cli::array<discountedbill^>^ ob = gcnew cli::array<discountedbill^>(rows->Length);

		for (int i = 0; i < rows->Length; i++)
		{
			cli::array<String^>^ temp = rows[i]->Split(',');
			ob[i] = gcnew discountedbill();
			ob[i]->item = temp[0];
			ob[i]->price = temp[1];
			ob[i]->bill_amount = temp[2];
		}
		return ob;
	}
	
};

