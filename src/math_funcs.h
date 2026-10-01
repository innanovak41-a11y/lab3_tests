#pragma once

// Функция линейной интерполяции
// x0, y0 - первая точка
// x1, y1 - вторая точка
// x - точка, для которой мы ищем значение y
double linear_interpolation(double x0, double y0, double x1, double y1, double x);