/*
 * Copyright 2021 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(sis_encoder.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(c81e968ecd7e7c25a3a28f3bc1dcf80f)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <nrsc5/sis_encoder.h>
// pydoc.h is automatically generated in the build directory
#include <sis_encoder_pydoc.h>

void bind_sis_encoder(py::module& m)
{

    using sis_encoder    = ::gr::nrsc5::sis_encoder;


    py::class_<sis_encoder, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<sis_encoder>>(m, "sis_encoder", D(sis_encoder))

        .def(py::init(&sis_encoder::make),
           py::arg("short_name") = "ABCD",
           py::arg("slogan") = "",
           py::arg("message") = "",
           py::arg("latitude") = 40.6892,
           py::arg("longitude") = -74.0445,
           py::arg("altitude") = 93.0,
           py::arg("country_code") = "US",
           py::arg("fcc_facility_id") = 0,
           D(sis_encoder,make)
        )
        



        ;




}








