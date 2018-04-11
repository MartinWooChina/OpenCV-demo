/*���Գ���-ͼ����ʾ1*/
#include <opencv2/opencv.hpp> //����ͷ�ļ�
#include <iostream>    
using namespace cv;      //ʹ�������ռ�cv�������cv::line�ȵ�ǰ׺���Բ�д
using namespace std;    //ʹ�������ռ�std�����Ե���C++��׼������ĺ�������


int main() {

	Mat grayim(600, 800, CV_8UC1);
	Mat colorim(600, 800, CV_8UC3);

	//������������,����������ֵ
	for (int i = 0; i < grayim.rows; ++i)
		for (int j = 0; j < grayim.rows; ++j)
			grayim.at<uchar>(i, j) = (i + j) % 255;

	//������������,����������ֵ 
	for(int i=0; i<colorim.rows;++i)
		for (int j = 0; j < colorim.cols; ++j) {


			Vec3b	pixel;
			pixel[0] = i % 255; //blue 
			pixel[1] = j % 255; //Green
			pixel[2] = 0;  // red 
			colorim.at<Vec3b>(i, j) = pixel;
		}

	//��ʾ���
	imshow("grayim", grayim);
	imshow("colorim", colorim);


	waitKey(0);
	return 0; 


}