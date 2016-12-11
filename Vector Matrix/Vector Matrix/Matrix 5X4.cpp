#include <iostream>

class Vector4D
{
public:
	int x, y, z, k;

	Vector4D()
		:x(0), y(0), z(0), k(0)
	{}

	Vector4D(const int &_x, const int &_y, const int &_z, const int &_k)
		:x(_x), y(_y), z(_z), k(_k)
	{}

	Vector4D operator+(const Vector4D &input) //+operator overloading
	{
		Vector4D vec;
		vec.x = this->x + input.x;
		vec.y = this->y + input.y;
		vec.z = this->z + input.z;
		vec.k = this->k + input.k;
		return vec;
	}

	int operator*(const Vector4D &input) //*operator overloading return integer
	{
		int ans;
		ans = this->x * input.x;
		ans += this->y * input.y;
		ans += this->z * input.z;
		ans += this->k * input.k;
		return ans;
	}

	friend std::ostream& operator<<(std::ostream& os, const Vector4D& vec); //stream operator overloading
};

class Vector5D
{
public:
	int x, y, z, k, l;

	Vector5D()
		:x(0), y(0), z(0), k(0), l(0)
	{}

	Vector5D(const int &_x, const int &_y, const int &_z, const int &_k, const int &_l)
		:x(_x), y(_y), z(_z), k(_k), l(_l)
	{}

	Vector5D operator+(const Vector5D &input) //+operator overloading
	{
		Vector5D vec;
		vec.x = this->x + input.x;
		vec.y = this->y + input.y;
		vec.z = this->z + input.z;
		vec.k = this->k + input.k;
		vec.l = this->l + input.l;
		return vec;
	}

	int operator*(const Vector5D &input) //*operator overloading return integer
	{
		int ans;
		ans = this->x * input.x;
		ans += this->y * input.y;
		ans += this->z * input.z;
		ans += this->k * input.k;
		ans += this->l * input.l;
		return ans;
	}

	friend std::ostream& operator<<(std::ostream& os, const Vector5D& vec); //stream operator overloading
};

class Matrix5x4
{
public:
	Vector4D row0, row1, row2, row3, row4;

	Matrix5x4(const Vector4D &r0, const Vector4D &r1, const Vector4D &r2, const Vector4D &r3, const Vector4D &r4)
		:row0(r0), row1(r1), row2(r2), row3(r3), row4(r4)
	{}

	Vector5D operator*(const Vector4D &rightside) //*operator overloading return integer
	{
		Vector5D ans;
		ans.x = row0*rightside;
		ans.y = row1*rightside;
		ans.z = row2*rightside;
		ans.k = row3*rightside;
		ans.l = row4*rightside;
		return ans;
	}
};

std::ostream& operator<<(std::ostream& os, const Vector4D& vec)
{
	os << vec.x << " " << vec.y << " " << vec.z << " " << vec.k << std::endl;
	return os;
}

std::ostream& operator<<(std::ostream& os, const Vector5D& vec)
{
	os << vec.x << " " << vec.y << " " << vec.z << " " << vec.k << " " << vec.l << std::endl;
	return os;
}


int main()
{
	Vector4D v0(1, 2, 3, 4);
	Vector4D v1(4, 5, 6, 7);
	Vector4D v2(2, 3, 4, 5);
	Vector4D v3(3, 4, 5, 6);
	Vector4D v4(5, 6, 7, 8);


	std::cout << v0 << std::endl;
	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;
	std::cout << v3 << std::endl;
	std::cout << v4 << std::endl;
	std::cout << "곱하기" << std::endl;
	std::cout << v0 << std::endl;
	std::cout << "=" << std::endl;
	Matrix5x4 m(v0, v1, v2, v3, v4);

	Vector5D y = m*v0;

	std::cout << y << std::endl;
	return 0;
}