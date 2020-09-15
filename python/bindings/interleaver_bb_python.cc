/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(interleaver_bb.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(3ea0a6d4ac3cd257a1abdc9760f0656e)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <dvbs2/interleaver_bb.h>
// pydoc.h is automatically generated in the build directory
#include <interleaver_bb_pydoc.h>

void bind_interleaver_bb(py::module& m)
{

    using interleaver_bb    = ::gr::dvbs2::interleaver_bb;


    py::class_<interleaver_bb, gr::block, gr::basic_block,
        std::shared_ptr<interleaver_bb>>(m, "interleaver_bb", D(interleaver_bb))

        .def(py::init(&interleaver_bb::make),
           D(interleaver_bb,make)
        )
        



        ;




}






