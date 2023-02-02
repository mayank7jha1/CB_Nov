
template<typename T>
class vector {
	T *arr;
	int total_size;
	int current_size;
public:

	vector() {
		current_size = 0;//Koi element nahi hain
		total_size = 1;
		arr = new T[total_size];
	}

	void push_back(T d) {
		if (current_size == total_size) {
			T *oldArr = arr;//Line no 12. ko point kar raha hain
			//do pointer hain 12line ko point kar rahe hain
			arr = new T[2 * total_size];
			//old arr me se saari value ko arr me copy karo
			total_size = total_size * 2;
			for (int i = 0; i < current_size; i++) {
				arr[i] = oldArr[i];
			}
			delete[]oldArr;
		}
		arr[current_size] = d;
		current_size++;
	}

	void pop_back() {
		current_size--;
	}

	T front() {
		return arr[0];
	}

	T back() {
		return arr[current_size - 1];
	}

	bool empty() {
		if (current_size == 0) {
			return true;
		} else {
			return false;
		}
	}

	int size() {
		return current_size;
	}


	int capacity() {
		return total_size;
	}

	T operator[](int i) {
		return arr[i];
	}


};

//a[3]?


//[]===overload