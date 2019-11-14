#include<stdio.h>

void swap(vector<int>& nums, int i, int j)
{
int temp;
temp = nums[i];
nums[i] = nums[j];
nums[j] = temp;
}
void heapify(vector<int>& nums, int n, int i)
{
int maxN = i;
int left = 2*i+1;
int right = 2*i+2;
if((2*i+1)< n && nums[maxN]<nums[left]) maxN = left;
if((2*i+2)< n && nums[maxN]<nums[right]) maxN = right;
if(maxN !=i)
{
    swap(nums,maxN, i);
    heapify(nums,n, maxN);
}

}
void build_heapify(vector<int>& nums, int n)
{
int parentnode = (n-2)/2;
for(int i = parentnode; i>=0; i--){
    heapify(nums,n,i);
}
}
void heapify_sort(vector<int>& nums, int n){
build_heapify(nums, n);
for(int i=n-1;i>=0;i--){
    swap(nums, i, 0);
    heapify(nums, i, 0);
}

}
vector<int> sortArray(vector<int>& nums) {

heapify_sort(nums, nums.size());
return nums;
}

    int main()
{
	vector<int> test = {5,2,3,1};
	vector<int> result = sortArray(test);
	for(int i=0;i<result.size();i++)
	{
		cout <<result[i]<<endl;
	}
	return 0;

}	

