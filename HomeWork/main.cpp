//
//  main.cpp
//  HomeWork
//
//  Created by braindamage on 2022/7/22.
//

#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

using namespace std;
/*
 给定一个点 P =(2,1), 将该点绕原点先逆时针旋转 45◦，再平移 (1,2), 计算出 变换后点的坐标(要求用齐次坐标进行计算)。
 */
int main(int argc, const char * argv[]) {
    // insert code here...
    Eigen::Vector3f p(2.0,1.0,1.0);
    float pi = acos(-1);
    float cos45 = cos(45.0 / 180.0 * pi);
    float sin45 = sin(45.0 / 180.0 * pi);
    Eigen::Matrix3f R45, T12;
    R45<<cos45,-sin45,0,
        sin45,cos45,0,
        0,0,1;
   T12<<1,0,1,
        0,1,2,
        0,0,1;
    Eigen::Matrix3f M(T12*R45);
    cout<< M * p<<endl;
    return 0;
}
