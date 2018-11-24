#include <iostream>
#include "opencv2/opencv.hpp"


using namespace std;
using namespace cv;

int main(int argc, char** argv) {

	//������ͷ
	VideoCapture cap(0);

	//����Ƶ

	//VideoCapture cap("d:/1.mp4");

	
	//����Ƿ��

	if (!cap.isOpened()) {
		cerr << "Can not open a camera or file." << endl;
		return -1;
	}

	Mat edges;
	//��������
	namedWindow("edges", 1);




	for (;;)
	{
		Mat frame;
		//��cap�ж�һ֡,�浽Frame
		cap >> frame;
		//δ��ȡ�쳣����
		if (frame.empty())
			break;
	

		//ͼ��תΪ�Ҷ�	

		cvtColor(frame, edges, CV_BGR2GRAY);

		//��ʾ���
		imshow("edges", edges);

		if (cvWaitKey(30) >= 0)
			break;
	}

	return 0;

}