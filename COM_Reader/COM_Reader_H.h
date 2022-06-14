#pragma once

#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>
#include <vector>

/// <summary>
/// ����� ComReader ������� ������� ��� ������ ������ �� ���������������� UART ������.
/// </summary>
struct ComReader
{
	/// <summary>
	/// 
	/// </summary>
	/// <param name="PortName">�������� ����� ��� LPCWSTR</param>
	/// <param name="BaudRate">�������� ������, �� ��������� 9600</param>
	/// <param name="byteSize">������ ����������� �������, �� ��������� 8</param>
	ComReader(LPCWSTR PortName, int BaudRate = 9600, int byteSize = 8);
	
	
	/// <summary>
	/// ������� � ������� ��� ����������, ���������� � COM �����.
	/// </summary>
	void PrintComData();

	/// <summary>
	/// ���������� ������-������ �������� �� COM �����
	/// </summary>
	std::vector<char> getCharData();

	/// <summary>
	/// ���������� ������ ��������� ������.
	/// </summary>
	/// <returns></returns>
	size_t getSizeData();

private:
	HANDLE hSerial;
	LPCWSTR PortName;
	int _BaudRate;
	int _byteSize;
	size_t packSize;

};
