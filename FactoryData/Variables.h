#pragma once
#include "containers.h"
#include <cliext/map>
#include "ConnectionData.h"

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace OleDb;




ref class Variables {

public:
	static String^ connecttionString = Connection::connectionString;
	static cliext::map<String^, double>^ mapRaw = gcnew cliext::map<String^, double>;//Raw Inum -->> Unit_Cost map
	static cliext::map<String^, double>^ mapCom = gcnew cliext::map<String^, double>;//Combination Fitem-->Unit_Cost
	static cliext::map<String^, double>^ totalCom = gcnew cliext::map<String^, double>;//total Cost for combination
	static cliext::map<String^, double>^ Generalwastes = gcnew cliext::map<String^, double>;//wastes for cost calculating
	static cliext::map<String^, double>^ DragehWastes = gcnew cliext::map<String^, double>;
	static cliext::map<String^, double>^ BoxCosts = gcnew cliext::map<String^, double>;
	static cliext::map<String^, double>^ Expences1 = gcnew cliext::map<String^, double>;
	static cliext::map<String^, double>^ Expences2 = gcnew cliext::map<String^, double>;
	static cliext::map<String^, double>^ SellCostCom = gcnew cliext::map<String^, double>;
	static System::Collections::Generic::Stack<String^ >^ queryStack = gcnew Generic::Stack<String^>;
	static cliext::map<String^, String^>^ NameCom = gcnew cliext::map<String^, String^>;
	static cliext::map<String^, double>^ inputQuan = gcnew cliext::map<String^, double>;
	static cliext::map<String^, double>^ outputQuan = gcnew cliext::map<String^, double>;
	static cliext::map<String^, double>^ diffQuan = gcnew cliext::map<String^, double>;
	static cliext::map<String^, double>^ quanCom = gcnew cliext::map<String^, double>;
	static cliext::map<String^, double>^ comBoxWeight = gcnew cliext::map<String^, double>;
	static cliext::map<String^, String^>^ RawIGroup = gcnew cliext::map<String^, String^>;
	static cliext::map<String^, String^>^ RawName = gcnew cliext::map<String^, String^>;
	static double expences1, expences2;
	static String^ rowToQuery = "";//saves the name of the fitem to query on 
	static cliext::map<String^, bool>^ rawItemsUnits = gcnew cliext::map<String^, bool>;

	


	//for inputs form
	static cliext::map<String^, double>^ mapInputList = gcnew cliext::map<String^, double>; // Fitem --> number of boxes
	static cliext::map<String^, double>^ rawItemsQuanAll = gcnew cliext::map<String^, double>; // raw --> used quantitiy


	//for imports form
	static cliext::map<String^, double>^ mapImportList = gcnew cliext::map<String^, double>; // Fitem --> number of boxes

};