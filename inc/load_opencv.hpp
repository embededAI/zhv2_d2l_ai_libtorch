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



#if defined(__linux__)

#pragma cling add_library_path("/usr/local/lib")
#pragma cling add_include_path("/usr/local/include")
#pragma cling add_include_path("/usr/local/include/opencv4")

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

#pragma cling add_library_path("/usr/local/Cellar/opencv/4.5.1_2/lib")
#pragma cling add_include_path("/usr/local/Cellar/opencv/4.5.1_2/include/opencv4")
#pragma cling add_include_path("/usr/local/Cellar/opencv/4.5.1_2/include")

#pragma cling load("libopencv_imgproc.dylib")
#pragma cling load("libopencv_highgui.dylib")
#pragma cling load("libopencv_videoio.dylib")
#pragma cling load("libopencv_video.dylib")
#pragma cling load("libopencv_imgcodecs.dylib")
#pragma cling load("libopencv_features2d.dylib")

#pragma cling load("libopencv_gapi.dylib") 
#pragma cling load("libopencv_stitching.dylib")
#pragma cling load("libopencv_aruco.dylib")
#pragma cling load("libopencv_bgsegm.dylib")
#pragma cling load("libopencv_bioinspired.dylib")
#pragma cling load("libopencv_ccalib.dylib")
#pragma cling load("libopencv_dnn_objdetect.dylib")
#pragma cling load("libopencv_dnn_superres.dylib")
#pragma cling load("libopencv_dpm.dylib")
#pragma cling load("libopencv_face.dylib")
#pragma cling load("libopencv_freetype.dylib")
#pragma cling load("libopencv_fuzzy.dylib")
// #pragma cling load("libopencv_hdf.dylib")
#pragma cling load("libopencv_hfs.dylib")
#pragma cling load("libopencv_img_hash.dylib")
#pragma cling load("libopencv_line_descriptor.dylib")
#pragma cling load("libopencv_quality.dylib")
#pragma cling load("libopencv_reg.dylib")
#pragma cling load("libopencv_rgbd.dylib")
#pragma cling load("libopencv_saliency.dylib")
#pragma cling load("libopencv_stereo.dylib")
#pragma cling load("libopencv_structured_light.dylib")
#pragma cling load("libopencv_phase_unwrapping.dylib")
#pragma cling load("libopencv_superres.dylib")
#pragma cling load("libopencv_optflow.dylib")
#pragma cling load("libopencv_surface_matching.dylib")
#pragma cling load("libopencv_tracking.dylib")
#pragma cling load("libopencv_datasets.dylib")
#pragma cling load("libopencv_text.dylib")
#pragma cling load("libopencv_dnn.dylib")
#pragma cling load("libopencv_plot.dylib")
#pragma cling load("libopencv_videostab.dylib")
#pragma cling load("libopencv_xfeatures2d.dylib")
#pragma cling load("libopencv_shape.dylib")
#pragma cling load("libopencv_ml.dylib")
#pragma cling load("libopencv_ximgproc.dylib")
#pragma cling load("libopencv_xobjdetect.dylib")
#pragma cling load("libopencv_objdetect.dylib")
#pragma cling load("libopencv_calib3d.dylib")
#pragma cling load("libopencv_flann.dylib")
#pragma cling load("libopencv_xphoto.dylib")
#pragma cling load("libopencv_photo.dylib")

#endif


#endif /*LOAD_OPENCV_HPP*/
