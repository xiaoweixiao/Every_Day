//class Solution {
//public:
//	void Insert(int num)
//	{
//		number.push_back(num);
//	}
//
//	double GetMedian()
//	{
//		sort(number.begin(), number.end());
//		int size = number.size();
//		if (size % 2 == 0)
//			return (double)((double)((number[size / 2 - 1]) + (number[size / 2])) / 2);
//		else
//			return (double)number[size / 2];
//	}
//private:
//	vector<int> number;
//};
//class Solution {
//public:
//	vector<int> median;
//	void Insert(int num)
//	{
//		vector<int>::iterator pos = upper_bound(median.begin(), median.end(), num);
//		median.insert(pos, num);
//	}
//
//	double GetMedian()
//	{
//		if (median.size() == 0) return 0.0;
//		int pos = median.size() / 2;
//		if (median.size() % 2 == 1){
//			return median[pos];
//		}
//		return (median[pos - 1] + median[pos]) / 2.0;
//	}
//};

//class Solution {
//private:
//	vector<int> min;
//	vector<int> max;
//public:
//	void Insert(int num)
//	{
//		int size = min.size() + max.size();
//		if ((size & 1) == 0)
//		{
//			if (max.size()>0 && num<max[0])
//			{
//				max.push_back(num);
//				push_heap(max.begin(), max.end(), less<int>());
//				num = max[0];
//				pop_heap(max.begin(), max.end(), less<int>());
//				max.pop_back();
//			}
//			min.push_back(num);
//			push_heap(min.begin(), min.end(), greater<int>());
//		}
//		else
//		{
//			if (min.size()>0 && num>min[0])
//			{
//				min.push_back(num);
//				push_heap(min.begin(), min.end(), greater<int>());
//				num = min[0];
//				pop_heap(min.begin(), min.end(), greater<int>());
//				min.pop_back();
//			}
//			max.push_back(num);
//			push_heap(max.begin(), max.end(), less<int>());
//		}
//	}
//
//	double GetMedian()
//	{
//		int size = min.size() + max.size();
//		if (size <= 0)
//			return 0;
//		if ((size & 1) == 0)
//			return (max[0] + min[0]) / 2.0;
//		else
//			return min[0];
//	}
//};

