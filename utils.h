#pragma once
#include <Windows.h>
#include <vector>
namespace Utils
{
	template<typename T> T Read(ULONG Address)
	{
		return *(T*)Address;
	}

	template<typename T> void Write(ULONG Address, T ValueToWrite)
	{
		*(T*)Address = ValueToWrite;
	}

	ULONG GetAddress(std::vector<unsigned int> pointers);
	
};

