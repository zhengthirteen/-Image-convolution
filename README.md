# -Image-convolution
图像可以用一个整数二维矩阵表示。图像卷积操作，或称为核操作，是进行图像处理的一种常用手段，图像卷积操作的目的是利用像素点和其邻域像素之前的空间关系，通过加权求和的操作，实现模糊，锐化，边缘检测等功能。图像卷积的计算过程就是卷积核按步长对图像局部像素块进行加权求和的过程。  卷积核是一个m*m大小的矩阵 (m是奇数)  步骤：  1)将核围绕中心旋转180度(注意，非上下颠倒)  2)滑动核，使其中心位于输入图像g的(i，j)像素上  3)卷积核和图像对应元素相乘求和，得到输出图像的(i，j)像素值  4)重复上面操作，求出输出图像的所有像素值
An image can be represented by an integer two-dimensional matrix. Image convolution operation, or kernel operation, is a common means of image processing, the purpose of image convolution operation is to use the spatial relationship before the pixel point and its neighborhood pixels, through the weighted summation operation, to achieve blurring, sharpening, edge detection and other functions. The calculation process of image convolution is the process of weighting and summing the local pixel blocks of the image by step size of the convolution kernel.

The convolution kernel is a matrix of m*m size (m is odd)

Steps:

1) Rotate the nucleus 180 degrees around the center (note, not upside down)

2) Slide the core so that its center is on the (i,j) pixel of the input image g

3) Multiply and sum the convolution kernel and the corresponding elements of the image to obtain the (i,j) pixel values of the output image

4) Repeat the above operation to find all pixel values of the output image
