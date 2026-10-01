#include "math_funcs.h"

double linear_interpolation(double x0, double y0, double x1, double y1, double x) {
    // Защита от деления на ноль, если точки совпадают по x
    if (x1 == x0) {
        return y0;
    }
    
    // Основная формула линейной интерполяции
    return y0 + (x - x0) * (y1 - y0) / (x1 - x0);
}