#pragma once

namespace Math {
	template<typename T>
	class Point {
	public:
		Point() = default;
		Point(T x, T y) :
			m_x(x),
			m_y(y)
		{
		}

		Point<T> operator + (const Point<T>& other) {
			return Point<T>(m_x + other.m_x, m_y + other.m_y);
		}
		Point<T> operator - (const Point<T>& other) {
			return Point<T>(m_x - other.m_x, m_y - other.m_y);
		}

		bool operator == (const Point<T>& other) {
			return (m_x == other.m_x && m_y == other.m_y);
		}

		Point<T> Add(const Point<T>& other) {
			return Point<T>(m_x + other.m_x, m_y + other.m_y);
		}

		T getX() { return m_x; }
		T getY() { return m_y; }

	private:
		T m_x = 0;
		T m_y = 0;
	};
	using ipoint_t = Point<int>;
}