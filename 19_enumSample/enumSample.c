#include <stdio.h>
//3.3
#include <stdio.h>

// 아이템 타입을 나타내는 열거형을 정의합니다.
typedef enum {
    WEAPON,
    SHIELD,
    POTION,
    ARMOR
} ItemType;

// 아이템 구조체
typedef struct {
    ItemType type;  // 아이템의 타입
    char name[30];  // 아이템의 이름
    int value;      // 아이템의 가치
} Item;

void printItemInfo(Item item) {
    printf("Item: %s, Type: ", item.name);
    switch (item.type) {
    case WEAPON:
        printf("Weapon\n");
        break;
    case SHIELD:
        printf("Shield\n");
        break;
    case POTION:
        printf("Potion\n");
        break;
    case ARMOR:
        printf("Armor\n");
        break;
    }
    printf("Value: %d\n", item.value);
}

int main() {
    Item sword = { WEAPON, "Excalibur", 100 };
    Item shield = { SHIELD, "Dragon Shield", 80 };

    printItemInfo(sword);
    printItemInfo(shield);

    return 0;
}
