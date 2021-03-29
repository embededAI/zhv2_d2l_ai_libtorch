/*
 * =====================================================================================
 *
 *       Filename:  load_opencv.hpp
 *
 *    Description:  load opencv related header files and libs.
 *                  you'd better compile opencv from so"urce code；
 *                  in this project, I use opencv 4.2.0;
 *
 *        Version:  1.0
 *        Created:  03/26/2021 03:01:43
 *       Revision:  1.0.2
 *       Compiler:  gcc
 *
 *         Author:  hanliu (liuhang20011@163.com), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef LOAD_OPENCV_HPP
#define LOAD_OPENCV_HPP

#pragma cling add_library_path("/usr/local/lib")
#pragma cling add_include_path("/usr/local/include")
#pragma cling add_include_path("/usr/local/include/opencv4")


#if defined(__linux__)

#pragma cling load("libopencv_imgproc.so")
#pragma cling load("libopencv_highgui.so")
#pragma cling load("libopencv_videoio.so")
#pragma cling load("libopencv_video.so")
#pragma cling load("libopencv_imgcodecs.so")
#pragma cling load("libopencv_features2d.so")

#pragma cling load("libopencv_gapi.so") 
#pragma cling load("libopencv_stitching.so")
#pragma cling load("libopencv_aruco.so")
#pragma cling load("libopencv_bgsegm.so")
#pragma cling load("libopencv_bioinspired.so")
#pragma cling load("libopencv_ccalib.so")
#pragma cling load("libopencv_dnn_objdetect.so")
#pragma cling load("libopencv_dnn_superres.so")
#pragma cling load("libopencv_dpm.so")
#pragma cling load("libopencv_face.so")
#pragma cling load("libopencv_freetype.so")
#pragma cling load("libopencv_fuzzy.so")
#pragma cling load("libopencv_hdf.so")
#pragma cling load("libopencv_hfs.so")
#pragma cling load("libopencv_img_hash.so")
#pragma cling load("libopencv_line_descriptor.so")
#pragma cling load("libopencv_quality.so")
#pragma cling load("libopencv_reg.so")
#pragma cling load("libopencv_rgbd.so")
#pragma cling load("libopencv_saliency.so")
#pragma cling load("libopencv_stereo.so")
#pragma cling load("libopencv_structured_light.so")
#pragma cling load("libopencv_phase_unwrapping.so")
#pragma cling load("libopencv_superres.so")
#pragma cling load("libopencv_optflow.so")
#pragma cling load("libopencv_surface_matching.so")
#pragma cling load("libopencv_tracking.so")
#pragma cling load("libopencv_datasets.so")
#pragma cling load("libopencv_text.so")
#pragma cling load("libopencv_dnn.so")
#pragma cling load("libopencv_plot.so")
#pragma cling load("libopencv_videostab.so")
#pragma cling load("libopencv_xfeatures2d.so")
#pragma cling load("libopencv_shape.so")
#pragma cling load("libopencv_ml.so")
#pragma cling load("libopencv_ximgproc.so")
#pragma cling load("libopencv_xobjdetect.so")
#pragma cling load("libopencv_objdetect.so")
#pragma cling load("libopencv_calib3d.so")
#pragma cling load("libopencv_flann.so")
#pragma cling load("libopencv_xphoto.so")
#pragma cling load("libopencv_photo.so")
// #pragma cling load("libopencv_cor.so")

#elif __APPLE__


#endif


#endif /*LOAD_OPENCV_HPP*/
