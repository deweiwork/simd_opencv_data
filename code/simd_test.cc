//https://blog.csdn.net/Tommy_wxie/article/details/53021326
#include <iostream>
#include <opencv2/opencv.hpp> 
 
using namespace std;
using namespace cv; 
 
int main(int argc ,char** args)
{
	//设置是否启用指令集优化特性
	cv::setUseOptimized(true);
	//获取当前机器的CPU指令集支持特性
	bool opt_status = cv::useOptimized();
	cout<<"now status:"<<opt_status<<endl;
	//检查硬件支持
	volatile bool simd = checkHardwareSupport(CV_CPU_SSE);
	cout<<"HardwareSupport(CV_CPU_SSE): "<<simd<<endl;
	simd = checkHardwareSupport(CV_CPU_MMX);
	cout<<"HardwareSupport(CV_CPU_MMX): "<<simd<<endl;
	simd = checkHardwareSupport(CV_CPU_SSE2);
	cout<<"HardwareSupport(CV_CPU_SSE2): "<<simd<<endl;
	simd = checkHardwareSupport(CV_CPU_SSE3);
	cout<<"HardwareSupport(CV_CPU_SSE3): "<<simd<<endl;
	simd = checkHardwareSupport(CV_CPU_SSSE3);
	cout<<"HardwareSupport(CV_CPU_SSSE3): "<<simd<<endl;
	simd = checkHardwareSupport(CV_CPU_SSE4_1);
	cout<<"HardwareSupport(CV_CPU_SSE4_1): "<<simd<<endl;
	simd = checkHardwareSupport(CV_CPU_SSE4_2);
	cout<<"HardwareSupport(CV_CPU_SSE4_2): "<<simd<<endl;
	simd = checkHardwareSupport(CV_CPU_POPCNT);
	cout<<"HardwareSupport(CV_CPU_POPCNT): "<<simd<<endl;
	simd = checkHardwareSupport(CV_CPU_AVX);
	cout<<"HardwareSupport(CV_CPU_AVX): "<<simd<<endl;
	return getchar();
}