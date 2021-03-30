/*
 * =====================================================================================
 *
 *       Filename:  load_matplotlibcpp.hpp
 *
 *    Description:  load matplotlibcpp package, then we can
 *                  draw charts in notebook just like matplotlib;
 *
 *        Version:  1.0
 *        Created:  03/29/2021 11:00:47 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  PhoenixMY (lh), liuhang20011@163.com
 *   Organization:  
 *
 * =====================================================================================
 */





#ifndef LOAD_MATPLOTLIBCPP_H
#define LOAD_MATPLOTLIBCPP_H




//////////////////////////////////////////////////////
//
// matplotlibcpp:
// repo:  https://github.com/lava/matplotlib-cpp
// build: 
// 1. enter your conda enviroment(I setup a separate env for xeus-cling);
// 2. run: cmake -DCMAKE_INSTALL_PREFIX=$CONDA_PREFIX .. -DCMAKE_BUILD_TYPE=Release
// 3. make install
//
//////////////////////////////////////////////////////


/*
 * please choose c++17 kernel when you run your sample code with matplotlibcpp, or you
 * will meet below warning:
 *
 * matplotlibcpp.h:350:37: warning: static_assert with no message is a C++17 extension [-Wc++17-extensions]
    static_assert(sizeof(long long) == 8);
 * matplotlibcpp.h:352:46: warning: static_assert with no message is a C++17 extension [-Wc++17-extensions]
    static_assert(sizeof(unsigned long long) == 8);
 */

#pragma cling add_include_path("$CONDA_PREFIX/include/python3.9")
#pragma cling add_include_path("$CONDA_PREFIX/lib/python3.9/site-packages/numpy/core/include")
#pragma cling add_library_path("$CONDA_PREFIX/lib")

#if defined(__linux__)

#pragma cling load("libpython3.so")

#elif __APPLE__

#pragma cling load("libpython3.9.dylib")

#endif


#include <cmath>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;





/*
 * below is a simple example from matplotlibcpp official repo,
 * 
 * <code>
 * std::vector<std::vector<double>> x, y, z;
 * for (double i = -5; i <= 5;  i += 0.25) {
 *     std::vector<double> x_row, y_row, z_row;
 *     for (double j = -5; j <= 5; j += 0.25) {
 *         x_row.push_back(i);
 *         y_row.push_back(j);
 *         z_row.push_back(::std::sin(::std::hypot(i, j)));
 *     }
 *     x.push_back(x_row);
 *     y.push_back(y_row);
 *     z.push_back(z_row);
 * }
 * </code>
 *
 * but it can't be embedded into jupyter notebook, but just 
 * pop-up a windown to show the image; to achieve this goal,
 * we can use xeus-cling's rich content displaying feature;
 * 
 * notes:
 * as matplotlibcpp can't embedded charts into notebook, maybe
 * you can try [xvega](https://blog.jupyter.org/a-c-backend-for-vega-lite-bd2524b247c2);
 *
 */

#include <string>
#include <fstream>

#include "xtl/xbase64.hpp"
#include "xeus/xjson.hpp"

namespace im
{
    struct image
    {   
        inline image(const std::string& filename)
        {
            std::ifstream fin(filename, std::ios::binary);   
            m_buffer << fin.rdbuf();
        }
        
        std::stringstream m_buffer;
    };
    
    xeus::xjson mime_bundle_repr(const image& i)
    {
        auto bundle = xeus::xjson::object();
        bundle["image/png"] = xtl::base64encode(i.m_buffer.str());
        return bundle;
    }
}

/*
 * now above example can be written like this:
 *
 *
 * <code>
 * std::vector<std::vector<double>> x, y, z;
 * for (double i = -5; i <= 5;  i += 0.25) {
 *     std::vector<double> x_row, y_row, z_row;
 *     for (double j = -5; j <= 5; j += 0.25) {
 *         x_row.push_back(i);
 *         y_row.push_back(j);
 *         z_row.push_back(::std::sin(::std::hypot(i, j)));
 *     }
 *     x.push_back(x_row);
 *     y.push_back(y_row);
 *     z.push_back(z_row);
 * }
 *
 * plt::plot_surface(x, y, z);
 * plt::save("./test1.png")
 * auto img = im::image("./test1.png");
 * img
 *
 * </code>
 
 
 */









#endif
