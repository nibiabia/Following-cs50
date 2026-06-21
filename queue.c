const int CAPACITY = 50;//队列的总容量，容量始终是50，因为它是常量
typedef struct{

    string name;
    string number;
} Person;
typedef struct{

    Person people[CAPACITY];
    int size;//当前队列里的人或物品数量（有效数据）
} queue;