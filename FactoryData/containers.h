#pragma once


#include <cliext/list>
#include <cliext/map>


using namespace System;




public ref class Combination {
public:
	String^ fitem;//Fitem
	double unitCost = -1;//calculated cost from ritems 
	String^ name;//I_R_Name
	cliext::list<String^> components;
	String^ machineLine;//Drageh or else
	String^ group;//finished of not

public:
	//functions
	Combination(String^ f, String^ name, cliext::list<String^> ^comps, String^ mach,String^ group) :
		fitem(f),
		name(name),
		machineLine(mach),
		group(group)
	{
		components.clear();
		components = gcnew cliext::list<String^>(comps);
		//calcSum need to be implemented 
		
	}

	void AddComponent(String^ str)
	{
		components.push_back(str);
	}
	void RemoveComponent(String^ str)
	{
		components.remove(str);
	}

	void ShowData() //copies data to gridView for display
	{

	}

};

public ref class RawMaterial {
public:
	String^ name;
	String^ inum;
	double unitCost;
	
public:
	//functions
	RawMaterial(String^ name, String^ inum, double unitCost) :
		name(name),
		inum(inum),
		unitCost(unitCost)
	{}
	RawMaterial(const RawMaterial^ r) {
		name = r->name;
		inum = r->inum;
		unitCost = r->unitCost;
	}
	RawMaterial^ operator=(RawMaterial^ r)
	{
		name = r->name;
		inum = r->inum;
		unitCost = r->unitCost;
		return this;
	}
};