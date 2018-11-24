#include <iostream>
#include "opencv2/opencv.hpp"


using namespace std;
using namespace cv;

int main(int argc, char** argv) {

	//打开摄像头
	VideoCapture cap(0);

	//打开视频

	//VideoCapture cap("d:/1.mp4");

	
	//检测是否打开

	if (!cap.isOpened()) {
		cerr << "Can not open a camera or file." << endl;
		return -1;
	}

	Mat edges;
	//创建窗口
	namedWindow("edges", 1);




	for (;;)
	{
		Mat frame;
		//从cap中读一帧,存到Frame
		cap >> frame;
		//未读取异常处理
		if (frame.empty())
			break;
	

		//图像转为灰度	

		cvtColor(frame, edges, CV_BGR2GRAY);

		//显示结果
		imshow("edges", edges);

		if (cvWaitKey(30) >= 0)
			break;
	}

	return 0;

}