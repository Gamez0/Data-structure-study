# Linked List

각 노드가 데이터와 포인터를 가지고 한 줄로 연결되어 있는 방식으로 데이터를 저장하는 자료 구조이다.

- 단일 연결 리스트
- 이중 연결 리스트

늘어선 노드의 중간지점에서도 자료의 추가와 삭제가 O(1)의 시간에 가능하다는 장점을 갖는다. 그러나 배열이나 트리 구조와는 달리 특정 위치의 데이터를 검색해 내는데에는 O(n)의 시간이 걸린다는 단점도 갖고 있다.

## Singly Linked List

![https://s3.us-west-2.amazonaws.com/secure.notion-static.com/79941432-2ef2-4cac-b410-5f204fb16d97/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210101T132556Z&X-Amz-Expires=86400&X-Amz-Signature=315a1275c73de5a4e09210656f7865699d9c457688cde1b7c3f628679a816518&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/79941432-2ef2-4cac-b410-5f204fb16d97/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210101T132556Z&X-Amz-Expires=86400&X-Amz-Signature=315a1275c73de5a4e09210656f7865699d9c457688cde1b7c3f628679a816518&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22)

단일 연결 리스트는 각 노드에 자료 공간과 한 개의 포인터 공간이 있고, 각 노드의 포인터는 다음 노드를 가리킨다.

## Doubly Linked List

![https://s3.us-west-2.amazonaws.com/secure.notion-static.com/83a921f7-cdec-4a73-8616-61a32d88b86e/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210101T132819Z&X-Amz-Expires=86400&X-Amz-Signature=e79308561316711fdcb261eca17d1dc0ab0f9c9bdfae586ec1c0611f5a082aeb&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/83a921f7-cdec-4a73-8616-61a32d88b86e/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210101T132819Z&X-Amz-Expires=86400&X-Amz-Signature=e79308561316711fdcb261eca17d1dc0ab0f9c9bdfae586ec1c0611f5a082aeb&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22)

이중 연결 리스트의 구조는 단일 연결 리스트와 비슷하지만, 포인터 공간이 두 개가 있고 각각의 포인터는 앞의 노드와 뒤의 노드를 가리킨다.

## Circular Linked List

![https://s3.us-west-2.amazonaws.com/secure.notion-static.com/31d33841-59e4-49dc-accc-c28b89330080/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210101T132849Z&X-Amz-Expires=86400&X-Amz-Signature=9dfc66760df862f008bc2c38d407f9cae197207e12cdc2e5a3eb0f0ff0b51bc6&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/31d33841-59e4-49dc-accc-c28b89330080/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210101T132849Z&X-Amz-Expires=86400&X-Amz-Signature=9dfc66760df862f008bc2c38d407f9cae197207e12cdc2e5a3eb0f0ff0b51bc6&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22)

원형 연결 리스트는 일반적인 연결 리스트에 마지막 노드와 처음 노드를 연결시켜 원형으로 만든 구조이다.

---

### Advantages: Insert/Remove → O(1)

- 데이터가 메모리에 연속적으로 저장되어 있을 필요가 때문
- 리스트 어디에서도 삽입 삭제가 상수 시간 안에 가능

### Disadvantages: → X/O(N)

- Random access(Direct access) 불가
- 효율적인 인덱스 접근 불가
- 마지막 노드 찾기
- 주어진 datum(자료)를 가진 노드 찾기
- 새로운 노드가 추가 될 수 있는 곳 찾기

List 원소를 거의 전부 접근해야 가능하다. → O(N)

---

## Inserting and Removing

### 1. Inserting at the Head

1. 새 노드 할당
2. 원소 삽입
3. 새 노드의 포인터가 head를 가리키게
4. 새 노드를 가리키게 head 업데이트

### 2. Removing at the Head

1. head가 다음 노드를 가리키게 업데이트
2. Garbage collector가 정리

### 3. Inserting at the Tail

1. 새 노드 할당
2. 원소 삽입
3. 새 노드의 포인터가 null을 가리키도록
4. 마지막 노드의 포인터가 새 노드를 가리키도록
5. tail이 마지막 노드를 가리키도록

### 4. Removing at the Tail

- O(N)

---

## 도전: Implement a stack/queue with Linked List

[https://www.geeksforgeeks.org/implement-a-stack-using-singly-linked-list/](https://www.geeksforgeeks.org/implement-a-stack-using-singly-linked-list/)

[https://www.geeksforgeeks.org/queue-linked-list-implementation/](https://www.geeksforgeeks.org/queue-linked-list-implementation/)
