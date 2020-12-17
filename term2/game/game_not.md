Screen->raster: convert to pixel

Game engine provides field of view 20-50

Human 120

Trans matrix 对角scale, 最后移动，其他旋转

视角变化how to handle a fixed pt: 把点移到world origin，进行rotation，移到原先的点的坐标

前方的画面render出来后，不让不可见的背面render出来。

render新图像的时候 计算3d内到cam的距离，如果距离更小就更新Zbuffer，Zbuffer存放dist

1 Pixel 用4byte 存，Zbuffer中一个位置用2byte 表示dist