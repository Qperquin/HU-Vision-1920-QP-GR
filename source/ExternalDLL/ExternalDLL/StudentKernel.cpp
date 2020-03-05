#include "StudentKernel.h"

StudentKernel::StudentKernel(std::vector<std::vector<int>> kernelInfo) :
	kernel{kernelInfo}
{
}

unsigned StudentKernel::getKernelValue(unsigned x, unsigned y)
{
	return kernel.at(x).at(y);
}

void StudentKernel::setKernel(std::vector<std::vector<int>> kernelInfo)
{
	kernel = kernelInfo;
}

StudentKernel::~StudentKernel()
{
	kernel.clear();
}
