double area(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y) {
    double hc = circumference(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y) / 2.0;

    return sqrt(hc * (hc - side_length(p1_x, p1_y, p2_x, p2_y)) * (hc - side_length(p2_x, p2_y, p3_x, p3_y)) * (hc - side_length(p3_x, p3_y, p1_x, p1_y)));
}

double circumference(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y) {
    return side_length(p1_x, p1_y, p2_x, p2_y) + side_length(p2_x, p2_y, p3_x, p3_y) + side_length(p3_x, p3_y, p1_x, p1_y);
}

double side_length(double a_x, double a_y, double b_x, double b_y) {
    return sqrt(square(a_x - b_x) + square(a_y - b_y));
}

double square(double d) {
    return d * d;
}