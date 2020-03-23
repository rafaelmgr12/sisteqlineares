#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Mar 23 14:55:08 2020

@author: tjpp
"""


import sys
sys.getsizeof(1)
x=2
sys.getsizeof(x)
x=2.
sys.getsizeof(12345678901234567890)
sys.getsizeof(1+2j)
import numpy
x=numpy.float128(2)