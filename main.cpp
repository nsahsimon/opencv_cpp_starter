#include <iostream>
#include <opencv2/opencv.hpp>

int main(int, char**){
    std::cout << "Hello, Starting opencv\n";

    auto filename  = "C:/Users/SMARTECH/Desktop/ME/opencv_c++_projects/opencv_cpp_starter/sample_images/img_1.jfif";
    auto image = cv::imread(filename);
    cv::imshow("Image", image);
    cv::waitKey();

}
