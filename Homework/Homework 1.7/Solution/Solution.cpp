#pragma once
#include <cmath>
#include <iostream>

struct Vector3f
{
	float x, y, z;
};

//Сложение и вычитание векторов

Vector3f operator+(Vector3f const& A, Vector3f const& B)
{
	Vector3f result = { A.x + B.x, A.y + B.y, A.z + B.z };
	return result;
}

Vector3f operator-(Vector3f const& A, Vector3f const& B)
{
	Vector3f result = { A.x - B.x, A.y - B.y, A.z - B.z };
	return result;
}

//Умножение на вещественное число

Vector3f operator*(Vector3f const& A, float const& b)
{
	Vector3f result = { A.x * b, A.y * b, A.z * b };
	return result;
}

Vector3f operator*(float const& a, Vector3f const& B)
{
	Vector3f result = { a * B.x, a * B.y, a * B.z };
	return result;
}

//Деление на вещественное число

Vector3f operator/(Vector3f const& A, float const& b)
{
	Vector3f result = { A.x / b, A.y / b, A.z / b };
	return result;
}

//Скалярное произведение

float operator*(Vector3f const& A, Vector3f const& B)
{
	float result = { A.x * B.x + A.y * B.y + A.z * B.z };
	return result;
}

//Унарные операторы

Vector3f operator+(Vector3f A)
{
	return A;
}

Vector3f operator-(Vector3f A)
{
	Vector3f A = { -A.x, -A.y, -A.z };
	return A;
}

//Проверка на равенство/неравенство

bool Compare(Vector3f const& A, Vector3f const& B)
{
	if ((A.x == B.x) && (A.y == B.y) && (A.z == B.z))
		return true;
	else
		return false;
}

//Операторы +=, -=, *=, /=

Vector3f& operator+=(Vector3f& A, Vector3f& B)
{
	A.x += B.x;
	A.y += B.y;
	A.z += B.z;
	return A;
}

Vector3f& operator-=(Vector3f& A, Vector3f& B)
{
	A.x -= B.x;
	A.y -= B.y;
	A.z -= B.z;
	return A;
}

Vector3f& operator*=(Vector3f& A, float const& b)
{
	A.x *= b;
	A.y *= b;
	A.z *= b;
	return A;
}

Vector3f& operator/=(Vector3f& A, float const& b)
{
	A.x /= b;
	A.y /= b;
	A.z /= b;
	return A;
}

//Операторы ввода/вывода

std::ostream& operator<<(std::ostream& out, Vector3f const& A)
{
	out << "(" << A.x << ", " << A.y << ", " << A.z << ")";
	return out;
}

std::istream& operator>>(std::istream& in, Vector3f A)
{
	in >> A.x >> A.y >> A.z;
	return in;
}

//Функции

float squaredNorm(const Vector3f& A)
{
	float result = A.x * A.x + A.y * A.y + A.z * A.z;
	return result;
}

float norm(const Vector3f& A)
{
	float result = sqrt(squaredNorm(A));
	return result;
}

void normalize(Vector3f& A)
{
	Vector3f A = { A.x / norm(A), A.y / norm(A), A.z / norm(A)};
}