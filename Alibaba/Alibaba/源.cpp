#include <stdint.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <limits>
#include<string>
using namespace std;

struct FieldStorePosition
{
	int blockIndex;            // 压缩数组的整数下标（从0开始）
	int inBlockBitPos;         // 对应下标内的bit位置（存储开始位置0～31）
	int bitLen;                // bit位宽长度
};

struct StorePlan
{
	std::vector<FieldStorePosition> fieldStorePosVec;    // 每个字段对应的存储位置信息
	int storeVectorSize;                                                       // 存储数组的元素个数
};

class BitStoreAccessor
{
public:
	bool init(const vector<int>& bitLengthVector) {
		_plan = generateStorePlan((int*)bitLengthVector.data(), bitLengthVector.size());
		return _plan.fieldStorePosVec.size() == bitLengthVector.size();
	}

	int getStoreVectorSize() const { return _plan.storeVectorSize; }

public:
	bool setFieldValue(vector<uint32_t> &storeAddress, int fieldIndex, uint32_t value);
	bool getFieldValue(const vector<uint32_t> &storeAddress, int fieldIndex, uint32_t &value);

private:
	StorePlan generateStorePlan(int *bitLengthVector, int fieldCount);
private:
	StorePlan _plan;
};

/** 请完成下面这个函数，实现题目要求的功能 **/
bool BitStoreAccessor::setFieldValue(
	vector<uint32_t> &storeAddress, int fieldIndex, uint32_t value)
{
	// assert(false);

	return false;
}

bool BitStoreAccessor::getFieldValue(
	const vector<uint32_t> &storeAddress, int fieldIndex, uint32_t &value)
{
	// assert(false);
	return false;
}

StorePlan BitStoreAccessor::generateStorePlan(int *bitLengthVector, int fieldCount)
{
	StorePlan plan;
	// assert(false);
	return plan;
}

/** 请完成上面的函数实现 **/


vector<string> splitString(const string& text, const string &sepStr)
{
	vector<string> vec;
	string str(text);
	string sep(sepStr);
	size_t n = 0, old = 0;
	while (n != string::npos)
	{
		n = str.find(sep, n);
		if (n != string::npos)
		{
			vec.push_back(str.substr(old, n - old));
			n += sep.length();
			old = n;
		}
	}
	vec.push_back(str.substr(old, str.length() - old));
	return vec;
}
template <typename T>
bool stringToInteger(const string& text, T& value)
{
	const char* str = text.c_str();
	char* endPtr = NULL;
	value = (T)strtol(str, &endPtr, 10);
	return (endPtr && *endPtr == 0);
}

bool testBitStore(string fieldBitInfoStr, string setValueString, int expectStoreVectorSize) {
	vector<string> bitLenStrVec = splitString(fieldBitInfoStr, ",");
	vector<int> bitLengthVector;
	bitLengthVector.resize(bitLenStrVec.size());
	for (size_t i = 0; i < bitLenStrVec.size(); i++) {
		if (!stringToInteger<int>(bitLenStrVec[i], bitLengthVector[i]))
		{
			return false;
		}
	}

	BitStoreAccessor accessor;
	if (!accessor.init(bitLengthVector))
	{
		return false;
	}

	// check store size
	if (expectStoreVectorSize != accessor.getStoreVectorSize()) {
		return false;
	}

	// prepare store vector
	vector<uint32_t> storeVector;
	storeVector.resize(accessor.getStoreVectorSize());

	if (setValueString.empty())
	{
		return true;
	}
	// test set & get value
	vector<string> setValueStrVec = splitString(setValueString, ";");
	for (size_t i = 0; i < setValueStrVec.size(); i++) {
		vector<string> singleSetValueInfo = splitString(setValueStrVec[i], ":");
		if (singleSetValueInfo.size() != 2) {
			return false;
		}

		int fieldIdx = 0;
		uint32_t value = 0;
		if (!stringToInteger<int>(singleSetValueInfo[0], fieldIdx) ||
			!stringToInteger<uint32_t>(singleSetValueInfo[1], value))
		{
			return false;
		}
		if (!accessor.setFieldValue(storeVector, fieldIdx, value)) {
			return false;
		}
		uint32_t actualValue = 0;
		if (!accessor.getFieldValue(storeVector, fieldIdx, actualValue)) {
			return false;
		}
		if (actualValue != value) {
			return false;
		}
	}
	return true;
}

int main() {
	bool res;

	string _bitLenVectorString;
	getline(cin, _bitLenVectorString);
	string _setValueString;
	getline(cin, _setValueString);
	int _expectStoreVectorSize;
	cin >> _expectStoreVectorSize;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	res = testBitStore(_bitLenVectorString, _setValueString, _expectStoreVectorSize);
	if (res)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
	return 0;
}