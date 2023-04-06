#include "LinkedList.h"

template<typename T>
class Stack : public LinkedList<T>{
	public:
		bool Delete (T &element){
			if (this->first == 0) {
				return false;
			}

			//포인터 변수 current에 현재 first 값을 저장한다.
			Node<T> *current = this->first;

			//element 변수에 current의 data를 저장한다.
			element = current->data;

			//다음 위치를 first에 할당한다.
			this->first = current->link;

			//current를 삭제한다.
			delete current;

			//전체 노드 개수가 줄었으므로 current size를 줄인다.
			this->current_size--;

			return true;
		}	
};
