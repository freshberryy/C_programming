#include <stdio.h>
//3.3
#include <stdio.h>

// ������ Ÿ���� ��Ÿ���� �������� �����մϴ�.
typedef enum {
    WEAPON,
    SHIELD,
    POTION,
    ARMOR
} ItemType;

// ������ ����ü
typedef struct {
    ItemType type;  // �������� Ÿ��
    char name[30];  // �������� �̸�
    int value;      // �������� ��ġ
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
