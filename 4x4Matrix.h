﻿#pragma once
#include <assert.h>
#include <Vector4.h>
#include <math.h>
#include <time.h>
#define _USE_MATH_DEFINE
#include "Matrix4x4.h"
#include <Novice.h>
#include <stdio.h>
#include <stdlib.h>


// 1.行列の加法
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);

// 2.行列の減法
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);

// 3.行列の積
Matrix4x4 Multyply(const Matrix4x4& m1, const Matrix4x4& m2);

// 4.逆行列
Matrix4x4 Inverse(const Matrix4x4& m);

// 5.転置行列
Matrix4x4 Transpose(const Matrix4x4& m);

// 6.単位行列の作成
Matrix4x4 MakeIdenity4x4();

static const int kRowHeight = 20;
static const int kColumnWidth = 60;

void MatrixScreenPrintf(int x, int y, const Matrix4x4& matrix, const char* label);