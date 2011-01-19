#include "bmath.h"

double blitz::magnitude(const v2 vector) {
    return std::sqrt(dot(vector, vector));
}

double blitz::magnitude(const v3 vector) {
    return std::sqrt(dot(vector, vector));
}

void blitz::normalize(v2 &vector) {
    vector /= magnitude(vector);
}

void blitz::normalize(v3 &vector) {
    vector /= magnitude(vector);
}

double blitz::cross(const v2 vector1, const v2 vector2) {
    return (vector1[0] * vector2[1]) - (vector1[1] * vector2[0]);
}

int blitz::sign(double value) {
    return (value > 0) - (value < 0);
}
