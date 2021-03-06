#-
# SPDX-License-Identifier: GPL-3.0-or-later
#
# This file is part of a firmware for Xling, a tamagotchi-like toy.
#
# Copyright (c) 2019 Dmitry Salychev
#
# Xling firmware is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Xling firmware is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

#
# CMake script to build a PDF manual for Xling.
#
cmake_minimum_required(VERSION 3.2)
project(Xling-manual NONE)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/UseLATEX.cmake)

add_latex_document(
	manual.tex
	IMAGE_DIRS images
)
