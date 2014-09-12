#include "opencv2/opencv.hpp"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap(0); // สร้างตัวแปรสำหรับเปิด Webcam (0 คือค่า default)
	if (!cap.isOpened())  // เช็คว่าเปิดกล้องได้ไหม
		return -1;

	namedWindow("Video", 1);
	float width, height;
	width = cap.get(CV_CAP_PROP_FRAME_WIDTH); // get width of captured frame
	height = cap.get(CV_CAP_PROP_FRAME_HEIGHT); // get height of captured frame
	cout << width << height;
	while (1)
	{
		Mat frame;
		cap >> frame;         // ดึงเฟรมจาก video ออกมา
		imshow("Video", frame);
		if (waitKey(30) == 'c') break; // กดปุ่ม c ให้ออกจากโปรแกรม
	}
	
	return 0;
}
