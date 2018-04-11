/*测试程序-图像显示1*/
#include <opencv2/opencv.hpp> //包含头文件
#include <iostream>    
using namespace cv;      //使用命名空间cv，下面的cv::line等的前缀可以不写
using namespace std;    //使用命名空间std，可以调用C++标准库里面的函数或类


int main() {

	Mat grayim(600, 800, CV_8UC1);
	Mat colorim(600, 800, CV_8UC3);

	//遍历所有像素,并设置像素值
	for (int i = 0; i < grayim.rows; ++i)
		for (int j = 0; j < grayim.rows; ++j)
			grayim.at<uchar>(i, j) = (i + j) % 255;

	//遍历所有像素,并设置像素值 
	for(int i=0; i<colorim.rows;++i)
		for (int j = 0; j < colorim.cols; ++j) {


			Vec3b	pixel;
			pixel[0] = i % 255; //blue 
			pixel[1] = j % 255; //Green
			pixel[2] = 0;  // red 
			colorim.at<Vec3b>(i, j) = pixel;
		}

	//显示结果
	imshow("grayim", grayim);
	imshow("colorim", colorim);


	waitKey(0);
	return 0; 


}