#!/usr/bin/python3.5

import numpy as np


def reshape(matrix):
    return matrix.reshape((matrix.shape[0]*matrix.shape[1]*matrix.shape[2],1))

