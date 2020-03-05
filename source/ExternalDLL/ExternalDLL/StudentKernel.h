#pragma once
#include <vector>

class StudentKernel
{
public:
	StudentKernel(std::vector<std::vector<int>> kernelInfo);
	unsigned getKernelValue(unsigned x, unsigned y);
	void setKernel(std::vector<std::vector<int>> kernelInfo);
	~StudentKernel();
private:
	std::vector<std::vector<int>> kernel;
};