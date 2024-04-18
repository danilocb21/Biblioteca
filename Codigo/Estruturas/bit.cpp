// BIT
//
// build - O(n)
// update - O(log(n))
// query - O(log(n))

struct BIT {
	vector<ll> elements;
	int size;

	BIT(int _size) {
		elements = vector<ll>(_size);
		size = _size;
	}

	void update(int index, ll delta) {
		for(int i = index; i < size; i += i&-i) {
			elements[i] += delta;
		}
	}

	ll query(int index) {
		ll sum = 0;
		for(int i = index; i > 0; i -= i&-i) {
			sum += elements[i];
		}

		return sum;
	}
};