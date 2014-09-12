#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
 
int main( )
{    
  // Create black empty images
  Mat image = Mat::zeros( 400, 400, CV_8UC3 );
   
  // Draw a rectangle ( 5th argument is not -ve)
  rectangle( image, Point( 15, 20 ), Point( 70, 50), Scalar( 0, 55, 255 ), +1, 4 );
  imshow("Image1",image);
  // Draw a filled rectangle ( 5th argument is -ve)
  rectangle( image, Point( 115, 120 ), Point( 170, 150), Scalar( 100, 155, 25 ), -1, 8 );
  imshow("Image2",image);
 
  waitKey( 0 );
  return(0);
}
